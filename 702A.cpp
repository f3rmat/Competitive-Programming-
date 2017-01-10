#include<bits/stdc++.h>
using namespace std;
long long a[100005];
int main()
{
	int n;
	cin>>n;
	for(int i = 0; i<=n-1; i++)
	{
		cin>>a[i];
	}
	
	int max_length = 1;
	int max_right_now = 1;
	
	for(int i = 1; i<=n-1; i++)
	{
		if(a[i] > a[i-1])
		{
			max_right_now++;
			max_length = max(max_length, max_right_now);
		}
		
		else 
		{
			max_right_now = 1;
		}
		
	}
	
	cout<<max_length;
	
	
	return 0;
}
