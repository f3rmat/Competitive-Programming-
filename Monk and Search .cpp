#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
    int n;
    scanf("%d",&n);
    vector<long long>v;
    long long x;
    for(int i = 1; i<=n; i++)
    {
        scanf("%lld",&x);
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    
    int q;
    long long a,b;
    scanf("%d",&q);
    for(int i =1; i<=q; i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a==0)
        {
            cout<<n-(lower_bound(v.begin(),v.end(),b)-v.begin())<<endl;
        }
        else
        {
            cout<<n-(upper_bound(v.begin(),v.end(),b)-v.begin())<<endl;
        }
        
    }
    
	return 0;
}
