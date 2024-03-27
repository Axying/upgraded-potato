#爬取豆瓣top250电影

import requests
import bs4
import xlwt

headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36 Edg/107.0.1418.56'
}

book = xlwt.Workbook(encoding='utf-8', style_compression=0)
sheet = book.add_sheet('豆瓣电影Top250', cell_overwrite_ok=True)
sheet.write(0, 0, '名称')
sheet.write(0, 1, '图片')
sheet.write(0, 2, '排名')
sheet.write(0, 3, '评分')
sheet.write(0, 4, '作者')
sheet.write(0, 5, '简介')

def main(page, m):
    url = 'https://movie.douban.com/top250?start=' + str(25 * page) + '&filter='
    html = request_douban(url)
    soup = bs4.BeautifulSoup(html, 'lxml')
    movie_list = soup.find(class_='grid_view').find_all('li')

    for item in movie_list:
        item_name = item.find(class_='title').string
        item_img = item.find('a').find('img').get('src')
        item_index = item.find('em').string
        item_score = item.find(class_='rating_num').string
        item_author = item.find('p').text
        if item.find(class_='inq') and item.find(class_='inq').string:
            item_intr = item.find(class_='inq').string
        else:
            item_intr = None


        sheet.write(m, 0, item_name)
        sheet.write(m, 1, item_img)
        sheet.write(m, 2, item_index)
        sheet.write(m, 3, item_score)
        sheet.write(m, 4, item_author)
        if item_intr:
            sheet.write(m, 5, item_intr)
        else:
            sheet.write(m, 5, '暂无简介')

        m += 1

        print('爬取电影：' + item_index + ' | ' + item_name + ' | ' + item_score + ' | ' + str(item_intr))

def request_douban(url):
    try:
        req = requests.get(url=url, headers=headers)
        if req.status_code == 200:
            return req.text
        else:
            print('请求失败，状态码：', req.status_code)
            return ''  # 返回空字符串表示请求失败
    except requests.RequestException as e:
        print('请求异常：', e)
        return None

if __name__ == '__main__':
    m = 1
    for i in range(0, 10):
        main(i, m)
        m += 25

    book.save('豆瓣最受欢迎的250部电影.xlsx')