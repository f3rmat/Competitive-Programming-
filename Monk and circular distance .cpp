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
    long long x,y;
    vector<long double> v;
    for(int i = 1; i<=n; i++)
    {
        scanf("%lld%lld",&x,&y);
        long double distance = sqrt(x*x + y*y);
        v.push_back(distance);
    }
    sort(v.begin(), v.end());
    int q;
    scanf("%d",&q);
    long double z;
    while(q--)
    {
        scanf("%Lf",&z);
        cout<<(upper_bound(v.begin(), v.end(), z)-v.begin())<<endl;
    }
    
    
	return 0;
}
