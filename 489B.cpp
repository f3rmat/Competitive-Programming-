#include<bits/stdc++.h>
using namespace std;
int a[105];
int b[105];
int seti[105];
int main()
{
	int n,m;
	
	cin>>n;
	for(int i = 0; i<=n-1; i++)
	{
		cin>>a[i];
	}
	
	cin>>m;
	for(int i = 0; i<=m-1; i++)
	{
		cin>>b[i];
	}
	
	sort(a,a+n);
	sort(b,b+m);
	int ans = 0;
	for(int i = 0; i<=n-1; i++)
	{
		for(int j = 0; j<=m-1; j++)
		{
			if(seti[j]==false && a[i]-b[j]>=-1 && a[i]-b[j]<=1)
			{
				ans++;
				seti[j] = true;
				break;
			}
		}
	}
	
	cout<<ans;
	
	return 0;
}
