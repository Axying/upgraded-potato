#include<bits\stdc++.h>
using namespace std;

const int N = 1e5+3;
int a[N],d[N];

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	
	int n,m;cin>>n>>m;
	for(int i = 1 ;i<=n ;i++)cin>>a[i];
	for(int i = 1;i<=n;i++)d[i] = a[i]-a[i-1];
	
	while(m--)
	{
		int l,v,p;
		cin>>l>>v>>p;
		d[l] +=p;
		d[v+1] -=p;
		
		
	}
	
	for(int i = 1;i<=n;i++)a[i] = a[i-1]+d[i];
	
	for(int i = 1;i<=n;i++)cout<<a[i]<<" \n"[i==n];
	
	return 0;
	
}
