//π‡∏»Œ Ã‚
#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int mp[N][N];

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m,t;
	cin>>n>>m>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		mp[a][b] = 1;
	}
	int k;
	cin>>k;
	int tmp = 1; 
	while(k--){		
		for(int i = 1;i<=n;i++){
			for(int j = 1;j<=m;j++){
				if(mp[i][j]==tmp){
					if(mp[i-1][j]==0)
					mp[i-1][j] = tmp+1;	
					if(mp[i][j-1]==0)				
					mp[i][j-1] = tmp+1;
					if(mp[i][j+1]==0)
					mp[i][j+1] = tmp+1;
					if(mp[i+1][j]==0)
					mp[i+1][j] = tmp+1;
				}
			}
		}
		tmp++;
	}
	int cnt = 0;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			if(mp[i][j]){
				cnt++;
			}
		}
	}
	
	cout<<cnt;
	
	
	return 0;
}
