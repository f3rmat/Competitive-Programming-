#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
ll a[1000005];
int x[1000005];
int y[1000005];
int main() 
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        scanf("%lld",&a[i]);
    }
    
    x[1] = -1;
    y[n] = -1;
    
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
                   x[i] = -1;
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
    
    stack<int> rl;
    
    rl.push(n);
    
    for(int i = n-1; i>=1; i--)
    {
        if(a[rl.top()]>a[i])
        {
            y[i]=rl.top();
            rl.push(i);
        }
        
        else
        {   
           int flag = 1;
           while(a[i]>=a[rl.top()])
           {    
               rl.pop();
               if(rl.empty())
               {
                   y[i] = -1;
                   flag = 0;
                   rl.push(i);
                   break;
               }
           }
           
           if(flag)
           {
               y[i]=rl.top();
                rl.push(i);
           }
           
        }
        
    }
    
    
   /* for(int i =1; i<=n; i++)
    cout<<x[i]<<" ";
    
    cout<<endl;
    
    for(int i =1; i<=n; i++)
    cout<<y[i]<<" ";
    
    cout<<endl;
    */
    
    
    for(int i = 1; i<=n; i++)
    {   
        cout<<x[i]+y[i]<<" ";
    }
    
    
	return 0;
}
