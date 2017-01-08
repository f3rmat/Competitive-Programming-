#include<bits/stdc++.h>
using namespace std;
int c[1000005];
int main()
{
	int k;
	long long int sum = 0;
	string s;
	cin>>k>>s;
	c[0] = 1;
	int n = s.length();
	for(int i = 0; i<=n-1; i++)
	{
		sum += (s[i]-48);
		c[sum]++;
	}
	/*for(int i = 0; i<=n-1; i++)
	cout<<c[i]<<" ";
	cout<<endl;*/
	long long int ans = 0;
	if(k==0)
	{
		for(int i = 0; i<=sum;i++)
		{
			ans = ans + (1LL*c[i]*(c[i]-1))/2;
		}
		cout<<ans<<endl;
	}
	
	
	else 
	{	
		for(int s = k; s<=sum;s++)
		{
			ans = ans + 1LL*c[s]*c[s-k];
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
