//判断一个日期的下一个回文数
#include <bits/stdc++.h>
using namespace std;

int s2i(string s){
	int a=0;
	for(int i = 0;i<(int)s.length();i++){
		a =a*10+(s[i]-'0');
	}
	return a;
}

string i2s(int x,int width){
	string s;
	while(x){
		s += x%10+'0';
		x = x/10;
	}
	while((int)s.length()<width){
		s = s+'0';
		
	}
	reverse(s.begin(),s.end());
	return s;
}

bool isleap(int year){
	return (year%4==0&&year%100!=0)||year%400==0;
}

bool isok(int year,int month,int day){
	int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(isleap(year))
	{
		days[2] = 29;
		
	}
	return day<=days[month];	
}

bool ispa1(string s){
	for(int i = 0;i<(int)s.length()/2;i++){
		if(s[i]!=s[(int)s.length()-1-i])
		{
			return false;
		}
		
	}
	return true;
}

bool ispa2(string s){
	if(!ispa1(s))
	return false;
	if(s[0]==s[2]&&s[1]==s[3])
	return true;
	else
	return false;
}


int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string s;
	cin>>s;
	int year = s2i(s.substr(0,4));
	int month = s2i(s.substr(4,2));
	int day = s2i(s.substr(6,2));
	bool ans1 = false;
	bool ans2 = false;
	for(int i = year;i<=9999;i++)
	{
		for(int j = month; j <= 12 && j > 0; j++)
		{
			if(i==year&&j<month)
			continue;
			for(int k = day;k>0&&k<=31;k++){
				if(i==year&&j==month&&k<=day)
				continue;
				if(!isok(i,j,k))
				continue;
				string date = i2s(i,4)+i2s(j,2)+i2s(k,2);
			    if(!ans1&&ispa1(date))
			    {
			    	ans1=true;
					cout<<date<<endl;
				}
			    
			    if(!ans2&&ispa2(date)){
			    	ans2 = true;
					cout<<date<<endl;
				}
			    
			    
			}
		}
	}
	
	return 0;
}
