#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
	int n,x;
	cin>>n;
	int ones = 0;
	for(int i = 1; i<=n; i++)
	{
		cin>>x;
		if(x==1)
		a[i] = -1,ones++;
		else a[i] = 1;
	}
	// this is a tricky one 
	// asumme 1.....n is the array 
	// you flip values from j to k (inclusive of both) 
	// the answer will be total no. of ones in the whole new array 
	// this will mean number of 0s in j to k - number of 1s in j to k + total number of ones in the entire array
	
	int max_so_far = a[1];
	int max_end_here = a[1];
	
	for(int i = 2; i<=n; i++)
	{
		max_end_here = max(a[i], max_end_here+a[i]);
		max_so_far = max(max_so_far, max_end_here);
	}
	//cout<<max_so_far<<endl;
	cout<<max_so_far+ones;
	
	return 0;
}
