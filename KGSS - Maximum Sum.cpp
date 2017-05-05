#include <bits/stdc++.h>
using namespace std;
pair<long long, long long> a[200005];
int n;

pair<long long, long long> merge(pair<long long, long long> x, pair<long long, long long> y)
{
	long long z[5];
	z[0] = x.first;
	z[1] = x.second;
	z[2] = y.second;
	z[3] = y.first;

	sort(z,z+4);
	return make_pair(z[3],z[2]);
}


void build()
{
	for(int i = n-1; i>0; i--)
		a[i] = merge(a[2*i], a[2*i+1]);
}

void update(long long p, long long ta)
{
	p+=n;
	a[p] = make_pair(ta,0);
	while(p>1){
		a[p/2] = merge(a[p],a[p^1]);
		p=p/2;
	}
}

long long int query(long long l, long long r)
{	
	long long res1 = -1;
	long long res2 = -1;
	for(l+=n, r+=n; l < r; l = l/2, r = r/2)
	{
		if(l%2)
		{	
			if(a[l].first > res1)
			{	
				res2 = max(res1,a[l].second);
				res1 = a[l].first;
				
			}
			
			else if(a[l].first > res2)
			{
				res2 = a[l].first;
			}
			
			else if(a[l].second > res2)
			{
				res2 = a[l].second;
			}
			
			l++;
		}

		if(r%2)
		{	
			r--;
			if(a[r].first > res1)
			{	
				res2 = max(res1,a[r].second);
				res1 = a[r].first;
			}
			
			else if(a[r].first > res2)
			{
				res2 = a[r].first;
			}
			
			else if(a[r].second > res2)
			{
				res2 = a[r].second;
			}
					
		}
	}
	return res1+res2;
}

int main() 
{
	cin>>n;
	long long x;
	for(int i = 0; i < n; ++i)
	{
		cin>>x;
		a[n+i] = make_pair(x,0);
	}

	build();

	int q;
	long long m,k;
	char c;
	cin>>q;
	while(q--)
	{
		cin>>c;
		if(c=='U'){
			cin>>m>>k;
			update(m-1,k);
		}
		else if(c=='Q'){
			cin>>m>>k;
			cout<<query(m-1,k)<<"\n";
		}

		/*for(int i = 1; i<n; ++i)
			cout<<a[i].first<<" "<<a[i].second<<" ";

		cout<<"\n";
		
		for(int i = n; i<2*n; ++i)
		cout<<a[i].first<<" "<<a[i].second<<" ";

		cout<<"\n";*/

	}

	return 0;
}
