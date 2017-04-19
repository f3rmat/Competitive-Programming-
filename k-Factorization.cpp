#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
	int n,k;
	cin>>n>>k;
	int m = n;
	
	while(m%2==0)
	{
		m=m/2;
		v.push_back(2);
	}
	
	
	for(int i = 3; i*i<=n; i+=2)
	{
		while(m%i==0)
		{
			m=m/i;
			v.push_back(i);
		}
	}
	
	if(m>1)
	v.push_back(m);
	
	/*for(int i = 0; i<(int)v.size(); i++)
	cout<<v[i]<<" ";
	
	cout<<endl;*/
	
	if((int)v.size() < k)
	cout<<-1;
	
	else
	{
		for(int i =0; i<k-1; i++)
		cout<<v[i]<<" ";
		
		int prod = 1;
		for(int i = k-1; i<(int)v.size(); i++)
		prod = prod*v[i];
		
		cout<<prod;
		
	}
	return 0;
}
