#include<bits/stdc++.h>
using namespace std;
const int N = 10;
int a[N];
int b[N];
int gcd(int a , int b){
	int r = a%b;
	while(r!=0){
		a = b;
		b = r;
		r = a%b;
	}
	return b;
}
int main()
{
	ios::sync_with_stdio(0),cout.tie(0),cin.tie(0);
	int n;
	cin>>n;
	
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}	
	sort(a+1,a+n+1);
	for(int j = 1;j<n;j++){
		b[j] = a[j+1]-a[j];
	}
	int tmp = b[1];
	for(int k = 1;k<n;k++){
		int p = gcd(tmp,b[k]);
		if(p<tmp){
			tmp = p;
		}
	}
	//�����̵Ȳ����а������ָ���
	int num = (a[n]-a[1])/tmp+1;
	cout<<num;
	
	return 0;
}
