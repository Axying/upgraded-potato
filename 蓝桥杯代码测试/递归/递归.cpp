#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int a[N];//��ʾ����ÿһλ

int dfs(int dep){  //dep��ʾ��ȣ���2��ʼ��Ϊ1��ʱ��Ϊ1��
	int res = 1;
	for(int i = 1;i<=a[dep-1]/2;i++){
		a[dep] = i;
		res += dfs(dep+1);		
	}
	return res;
}

int main(){
	int n = 0;
	cin>>n;
	
	a[1] = n;
	cout<<dfs(2);
}
