#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		ll x = (ll)( (ll)sqrt(8*n+9) - 3 )/2;
		ll ans = 2*(n - x);
		ans = min(min(ans, 2*n), (n*(n+1))/2);
		printf("%lld\n",ans);
	}
	
	return 0;
}
