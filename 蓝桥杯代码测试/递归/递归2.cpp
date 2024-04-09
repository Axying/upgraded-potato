#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int a[N];//表示数字每一位

int dfs(int dep){  //dep表示深度，从2开始，为1的时候为1个
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
