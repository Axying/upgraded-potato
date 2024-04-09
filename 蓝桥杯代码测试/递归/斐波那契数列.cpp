#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e8+9;
ll dp[N];//±¸ÍüÂ¼

int fb(int n){
	if(dp[n]){
		return dp[n];
		
	}
	if(n<=2){
		return 1;
	}
	
	else{
		return dp[n] = fb(n-1)+fb(n-2);
	}
			
	
}

int main()
{
	ios::sync_with_stdio(0),cout.tie(0),cin.tie(0);
	int n = 0;
	cin>>n;
	cout<<fb(n);
	
	return 0;
}
