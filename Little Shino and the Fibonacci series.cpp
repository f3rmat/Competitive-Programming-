#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;

int an[30005];
ll values[30005];
ll d[15005];

void solve()
{
	an[0] = 0;
	an[1] = 0;
    an[2] = 1;

	values[0] = 0;
	values[1] = 0;
	values[2] = 1;

	for(int i = 3; i<=30004; i++)
		{
			an[i] = (an[i-1] + an[i-2])%10000;
			values[i] = (an[i] + values[i-1])%mod;
		}

	for(int i = 1; i<=15000; i++)
	{
		d[i] = (values[i+15000] - values[i-1] + mod)%mod;
	}

}

int main()
{
    solve();
    //freopen("input.txt","r",stdin);
    //freopen("output2.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	ll l,r;
    	scanf("%lld %lld",&l,&r);
    	if(r-l<15000)
    	{
    		int left = l%15000;
    		int right = r%15000;

    		if(left==0)
    		left = 15000;

    		if(right==0)
    		right = 15000;

    		if(left<=right)
    		{
    			long long int ans = (values[right] - values[left-1] + mod)%mod;
    			printf("%lld\n",ans);
    		}

    		else if(left > right)
    		{

    			long long int ans = (values[15000] - values[left-1] + mod)%mod;
    			ans = (ans + values[right])%mod;
    			printf("%lld\n",ans);
    		}
    	}


    	else
    	{
    		ll cycles = (ll)((r-l)/15000);

    		ll ans = 0;

    		ans = ((cycles%mod)*(74970000))%mod;


    		//cout<<ans<<endl;
    		//cout<<cycles<<endl;


    		ll lower = cycles*15000 + l-1;

    		if(lower==r)
    		printf("%lld\n",ans);

    		else if(lower<r)
    		{
    			//lower++ se r tak ka sum nikalna hai
    			lower++;
    			int left = lower%15000;
    			int right = r%15000;

    			if(left==0)
    			left = 15000;

    			if(right==0)
    			right = 15000;

    			if(left<=right)
    			{
    			 ans = (ans + values[right] - values[left-1] + mod)%mod;
    			printf("%lld\n",ans);
    			}

    			else if(left > right)
    			{

    			ans = (ans + values[15000] - values[left-1] + mod)%mod;
    			ans = (ans + values[right])%mod;
    			printf("%lld\n",ans);
    			}


    		}

    	}
    }
	return 0;
}
