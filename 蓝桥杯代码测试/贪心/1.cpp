//贪心
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+9;
char a[N];

int main()
{
    int m=0;
    
    int x = 0;
    cin>>m>>x;
    cin>>a+1;  
    sort(a+1,a+m+1);
    if(a[1]==a[m]){
        for(int i = 1;i<=m/x+(m%x?1:0);i++){
            cout<<a[i];
        }
    }
    else if(a[1]==a[x]){
        for(int i = x;i<=m;i++){
            cout<<a[i];
        }
    }
    else{
        cout<<a[x];
    }

    return 0;

}
