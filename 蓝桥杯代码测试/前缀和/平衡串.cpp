//平衡串
#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int prefix[N];
char s[N];
int main()
{
	ios::sync_with_stdio(0),cout.tie(0),cin.tie(0);
	cin>>s+1;
	int m = strlen(s+1);
	for(int i = 1;i<=m;i++){
		prefix[i] = prefix[i-1]+(s[i]=='L'? 1 : -1);
		
	}
	int ans = 0;
	for(int i = 1;i<=m;i++){
		for(int j = 1;j<=i;j++){
			if(prefix[i]-prefix[j-1]==0){
				ans = max(ans,i-j+1);
			}
			
		}
	}
	cout<<ans<<endl;	
	return 0;
	
}
