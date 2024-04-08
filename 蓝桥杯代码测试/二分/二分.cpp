#include<bits/stdc++.h>
using namespace std;
int data[200];
int main()
{
	for(int i = 0;i<200;i++)data[i] = 4*i+6;
	int l = -1;
	int r = 199;
	int x;
	cin>>x;
	while(l+1!=r){
		int mid = (l+r)/2;
		if(data[mid]>=x)r = mid;
		else l = mid;
		
	}
	cout<<r;
	
	return 0;
}
