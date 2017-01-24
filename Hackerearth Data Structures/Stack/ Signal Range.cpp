#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
ll a[1000005];
int x[1000005];
int main() 
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        scanf("%lld",&a[i]);
    }
    
    x[1] = 1;
    
    stack<int> lr;
    
    lr.push(1);
    
    for(int i = 2; i<=n; i++)
    {
        if(a[lr.top()]>a[i])
        {
            x[i]=lr.top();
            lr.push(i);
        }
        
        else
        {   
           int flag = 1;
           while(a[i]>=a[lr.top()])
           {    
               lr.pop();
               if(lr.empty())
               {
                   x[i] = 0;
                   flag = 0;
                   lr.push(i);
                   break;
               }
           }
           
           if(flag)
           {
               x[i]=lr.top();
                lr.push(i);
           }
           
        }
    }
    
   /* for(int i =1; i<=n; i++)
    cout<<x[i]<<" ";
    
    cout<<endl;
    */
    
    
    cout<<"1 ";
    for(int i = 2; i<=n; i++)
    {   
        cout<<i-x[i]<<" ";
    }
    
    cout<<"\n";
        
    }
    
    
	return 0;
}
