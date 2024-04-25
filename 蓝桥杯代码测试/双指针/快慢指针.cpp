//快慢指针
//区间和等于m,区间长度越短越好
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+9;

int a[N];

int main(){
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	int ans = n+1;
	for(int l=1,r=0,sum=0;l<=n;l++){
		while(l>r||(r+1<=n&&sum<m)){
			sum+=a[++r];
		}
		if(sum>=m){
			ans = min(ans,r-l+1);
		}
		sum-=a[l];
		
	}
	cout<<(ans>n?0:ans)<<endl;
	
	return 0;
}
