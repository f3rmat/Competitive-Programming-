#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a;
	cin>>a;
	if(a<=2)
	{
		cout<<-1;
	}
	
	//(m^2 - 1)^2 + (2m)^2 = (m^2+1)^2
	else if(a%2==0)
	{
		cout<<(a/2)*(a/2) - 1<<" "<<(a/2)*(a/2) + 1;
	}
	
	else
	{
		cout<<(a*a + 1)/2<<" "<<(a*a - 1)/2;
	}	
	return 0;
}
