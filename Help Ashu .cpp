#include <iostream>
using namespace std;
long long a[100006];

int getSum(long long int BITree[], int index)
{
    int sum = 0; 
    index = index + 1;
    while (index>0)
    {
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
}

void updateBIT(long long int BITree[], int n, int index, int val)
{
    index = index + 1;
 
    while (index <= n)
    {
	
       BITree[index]+=val;
 
       index += index & (-index);
    }
}


long long int* constructBITree(long long int* freq, int n)
{
	long long int* BITree = new long long int[n+1];
	
	for(int i = 1; i<=n; i++)
	BITree[i]=0;
	
	for (int i=0; i<n; i++)
        updateBIT(BITree, n, i, a[i]);
 
    return BITree;
}



int main()
{
    int n;
    cin>>n;
    long long x;
    
    for(int i = 0; i<= n-1; i++)
    {
    	cin>>x;
    	if(x%2==0)
    	a[i]=0;
    	else a[i]=1;
    }
    
    int q;
    cin>>q;
    
    long long int* BITree = constructBITree(a, n);

    
    for(int i=0; i<=q-1; i++)
    {
    	
    	int b,x;
    	long long int y;
    	cin>>b>>x>>y;
    	if(b==0)
    	{
    	    
    	    if(y%2==1&&a[x-1]==0)
    	    {a[x-1]=1;
    	    updateBIT(BITree, n, x-1, 1);	
    	    }
    	    
    	    else if(y%2==0&&a[x-1]==1)
    	    {
    	    	a[x-1]=0;
    	    updateBIT(BITree, n, x-1, -1);
    	    }
    		
    	}
    	
    	else if(b==2)
    	{
    		int ans1 = getSum(BITree,y-1);
    		int ans2 = getSum(BITree,x-2);
    		cout<<ans1-ans2<<endl;
    	}
    	
    	else if(b==1)
    	{
    		int ans1 = getSum(BITree,y-1);
    		int ans2 = getSum(BITree,x-2);
    		cout<<y-x+1-(ans1-ans2)<<endl;
    		
    		
    	}
    }
    
    
    
    return 0;
}
