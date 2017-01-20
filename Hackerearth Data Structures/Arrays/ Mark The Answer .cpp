#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
    int n,skipped=0;
    ll x,y,ans=0;
    cin>>n>>x;;
    for(int i = 1; i<=n; i++)
    {
        scanf("%lld",&y);
        if(y>x && skipped==0)
        {
            skipped=1;
        }
        
        else if(y>x && skipped == 1)
        {
            break;
        }
        
        else
        ans++;
        
    }
    cout<<ans;
	return 0;
}
