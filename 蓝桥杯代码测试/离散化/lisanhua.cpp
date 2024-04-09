#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int a[N];
vector<int> L;

int getidx(int x){
	return lower_bound(L.begin(),L.end(),x)-L.begin();	
}

int main()
{
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		L.push_back(a[i]);
	}
	sort(L.begin(),L.end());
	L.erase(unique(L.begin(),L.end()),L.end());
	
	
	cout<<"离散化数组为:";
	for(const auto &i:L){
		cout<<i<<' ';
	}
	cout<<'\n';
	
	//查询值对应的下标
	int val = 0;
	cin>>val;
	if(val>=(int)L.size())
	cout<<"out of range!";
	
	cout<<getidx(val)<<'\n';
	
}
