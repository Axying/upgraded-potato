//判断是否是回文串
#include <bits/stdc++.h>
using namespace std;
const int N = 1e8;
char s[N];
int main(){
	ios::sync_with_stdio(0),cout.tie(0),cin.tie(0);
	
	cin>>s+1;
	int n = strlen(s+1);
	int l = 1;
	int r = n;
	bool ans = true;
	while(l<r){
		if(s[l]!=s[r]&&ans)
		{
			ans = false;			
		}
		l++,r--;
	}
	if(ans)
	cout<<'Y';
	else
	cout<<'N';
	
	return 0;
}
