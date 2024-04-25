#include <bits/stdc++.h>
using namespace std;

const int N = 1030;
int a[N];
int main(){
	int n;cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++){
		int min_id = i;
		for(int j = i;j<=n;j++){
			if(a[j]<a[min_id]){
				min_id = j;
			}
		}
		swap(a[min_id],a[i]);
	}
	for(int i = 1;i<=n;i++){
		cout<<a[i]<<' ';
	}
	
	return 0;
}
