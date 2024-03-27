import bs4
import requests
url = 'http://www.baidu.com'
req = requests.get(url)
req.encoding = 'utf-8'

soup = bs4.BeautifulSoup(req.text,'lxml')
print(soup.title.string)
print(soup.a)
print(soup.find_all('a'))
print(soup.find(id = "link1"))
print(soup.select('title'))
print(soup.select('body a'))