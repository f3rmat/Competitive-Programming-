#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
    int n,q;
    long long l,r;
    scanf("%d%d",&n,&q);
    vector<pair<long long, long long> >v;
    vector<long long>m;
    long long sum = 0;
    for(int i = 0; i<=n-1; i++)
    {
        scanf("%lld%lld",&l,&r);
        v.push_back(make_pair(l,r));
        sum +=(r-l+1);
        m.push_back(sum);
    }
    
    for(int i =1; i<=q; i++)
    {
        scanf("%lld",&l);
        vector<long long>::iterator it = upper_bound(m.begin(), m.end(), l);
        int z = it-m.begin()-1;
        
        if(it == m.end())
        {
            cout<<v[n-1].second<<endl;
        }
        else if(z==-1)
        {
            cout<<v[0].first + l - 1<<endl;
         }
        else
            cout<<v[z+1].first + (l - m[z] - 1)<<endl;
           
    }
    
    
    
    
	return 0;
}
