#include <bits/stdc++.h>
using namespace std;

const int N = 1030;
int a[N];
int main()
{
	ios::sync_with_stdio(0),cout.tie(0),cin.tie(0);
	int n;cin>>n;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i = n;i>=1;--i){
		for(int j = 1;j<i;j++){
			if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
			
		}
	}
	
	for(int i = 1;i<=n;i++){
		cout<<a[i]<<' ';
	}
	
	return 0;
}
