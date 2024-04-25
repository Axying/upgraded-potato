#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int a[N];
int main()
{
	int n = 0;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	
	sort(a+1,a+n+1);
	int ans = abs(a[2]-a[1]);
	for(int i = 1;i<=n;i++){
		ans = min(ans,abs(a[i+1]-a[i]));
	}
	cout<<ans;
	
	return 0;
	
}
