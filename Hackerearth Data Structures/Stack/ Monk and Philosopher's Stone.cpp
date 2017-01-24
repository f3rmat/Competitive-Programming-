#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int a[10005];
int main() 
{
    int n,q,x,j=1;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
        scanf("%d",&a[i]);
        
    scanf("%d%d",&q,&x);
    string s;
    stack<int> mys;
    int sum = 0;
    int flag = 1;
    for(int i = 1; i<=q; i++)
    {
        cin>>s;
        if(s[0]=='H' && j<=n)
        {
            mys.push(a[j]);
            sum = sum + a[j];
            j++;
        }
        
        else if(s[0]=='R')
        {
            sum = sum - mys.top();
            mys.pop();
        }
        
        if(sum==x)
        {
            cout<<mys.size();
            flag = 0;
            break;
        }
        
    }
    
    if(flag)
    cout<<"-1";
    
    
	return 0;
}
