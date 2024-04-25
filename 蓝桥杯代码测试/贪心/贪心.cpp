//贪心算法
#include <bits/stdc++.h>
using namespace std;

void deletenum(char *s,int len,int k){
	int n = 0;
	int i;
	while(n!=k){
		
		for(i = 0;i<len;i++){
			if(s[i]>s[i+1]){
				s[i] = 'X';
				n++;
				break;
			}
		}
			
		if(i == len-1){
			s[i] = 'X';
			n++;
			
		}
			
		char s1[100];
		int m = 0;
		for(int i = 0;i<len;i++){
			if(s[i]!='X')
				s1[m++] = s[i];
				
			
		}
		s = s1;
			
		}
		cout<<s;
		
	}
	

int main(){
	char s[100];
	cin>>s;
	int k = 0;
	cin>>k;
	
	int len = strlen(s);
	deletenum(s,len,k);	
	return 0;
}
