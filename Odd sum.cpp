#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main() 
{
	int n,sum=0;
	cin>>n;
	for(int i = 1; i<=n; i++)
	{
		cin>>a[i];
		if(a[i]>0)
			sum+=a[i];
	}
	if(sum%2==1)
		cout<<sum;
	else
	{
		int mini = 1000000;
		for(int i =1; i<=n; i++)
		{
			if(mini > abs(a[i]) && abs(a[i])%2==1)
				mini = abs(a[i]);
		}
		cout<<sum-mini;
	}

	return 0;
}
