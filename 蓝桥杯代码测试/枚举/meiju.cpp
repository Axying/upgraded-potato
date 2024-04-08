//Ã¶¾Ù
#include <bits/stdc++.h>
using namespace std;
const int N = 1001;
int a[N];
map<int,int> mp;
int main()
{
	int n,m;
	ios::sync_with_stdio(0),cout.tie(0),cin.tie(0);
	cin>>n>>m;
	for(int i = 1;i<=n*m;i++){
		int x;
		cin>>x;
		mp[x]++;
	}
	for(auto const &[x,y]:mp){
		if(2*y>m*n){
		cout<<x<<'\n';
		}
	}
	
	
	return 0;
}
