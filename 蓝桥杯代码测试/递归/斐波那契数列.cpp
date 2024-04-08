#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6+2 ;
const ll p = 1e9+5;

ll dp[N];

int fib(int n){
	if(dp[n])return dp[n];
	if(n<=2)return 1;
	else 
	return dp[n]=(fib(n-1)+fib(n-2))%p;//带备忘录,注意不是==
}

int main()
{
	int n;
	cin>>n;
	cout<< fib(n);
	
	return 0;
}
