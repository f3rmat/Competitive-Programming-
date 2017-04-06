#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int a[105];
int cum[105];
//long long int alpha[105][55]={0};
int upperbound(int target, int n)
{
    int low = 0; 
    int high = n;
    int mid;
    while(low != high)
    {
        mid = (low + high)/2;
        if(target >= a[mid])
            low = mid+1;
        else
            high = mid;
    }
    
    return low;
}


long long int count(int index, int target)
{	
	//if(alpha[index][target]!=0)
	//return alpha[index][target];
	
	if(target==0)
	return 1;
	
	else if(index < 0 || target < 0)
	return 0;
	
	else if(target > cum[index])
	return 0;
    
    long long int sum = 0;
    
    for(int i = index; i>=0; i--)
    {
		 //int z = count(i-1, target-a[i]);
		 //if(z)
		 //cout<<i<<" "<<target<<" "<<index<<endl;
		 //sum+=z;
		 sum += count(i-1, target-a[i]);
	 }
    
    //alpha[index][target] = sum;
    return sum;
        
}

int main() 
{
    int n,t;
    cin>>n>>t;
    
    for(int i = 0; i<n; ++i)
        cin>>a[i];
        //a[i] = 1;
        
    cum[0] = a[0];
    
    for(int i = 1; i<n; i++)
    cum[i] = cum[i-1] + a[i];
    
    sort(a,a+n);
    int ub = upperbound(t,n);
    if(ub==n)
    ub--;
    //cout<<ub<<endl;

    cout<<count(ub,t);
    
	return 0;
}
