#include <bits\stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	map<string,vector<string>> mp;
	vector<string> citys;
	int num;
	cin>>num;
	for(int i = 1;i<=num;i++)
	{
		string a,b;
		cin>>a>>b;
		if(!mp.count(b))citys.push_back(b);
		mp[b].push_back(a);
	    
	}
	
	for(auto &city:citys){
		cout<<city<<' '<<mp[city].size()<<endl;
		for(auto &i:mp[city])
		{
			cout<<i<<'\n';
			
		}
	}
	
	return 0;
}
