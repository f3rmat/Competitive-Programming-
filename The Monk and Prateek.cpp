#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
long long int xorlele(int n)
{
    int x = n, sum = 0;
    while(x>0)
    {
        sum += (x%10);
        x = x/10;
    }
    long long z = (n^sum);
    //cout<<z<<endl;
    return z;
}

int main() 
{
    int n;
    scanf("%d",&n);
    
    map<long long int, int> m;
    
    bool flag = true;
    long long maxvalue = 0;
    long long leastvalue = 100000000000000000;
    long long maxcount = 0;
    
    for(int i =1; i<=n; i++)
    {
        int x;
        scanf("%d",&x);
        long long y = xorlele(x);
        //cout<<x<<" "<<y<<endl;
        
        auto it = m.find(y);
        
        if (it != m.end())
        {
            it->second = (it->second)+1;
            flag = false;
        }
        
        else
        m[y] = 1;
    }
    //cout<<endl;
    
    if(flag)
    {
        for(auto it = m.begin(); it!=m.end(); it++)
        {
            if(it->first > maxvalue)
            maxvalue = (it->first);
        }
        cout<<maxvalue<<" "<<0;
    }
    
    else
    { int sum1 = 0;
        for(auto it = m.begin(); it!=m.end(); it++)
        {
            if(it->second > maxcount)
            {
                maxcount = (it->second);
            }
            
            sum1 = sum1 + (it->second)-1;
        }
        
        //cout<<maxcount<<endl;
        
        for(auto it = m.begin(); it!=m.end(); it++)
        {
            if(it->second == maxcount)
            {
                leastvalue = min(leastvalue, it->first);
            }
        }
        
        cout<<leastvalue<<" "<<sum1;
    }
    
    
	return 0;
}
