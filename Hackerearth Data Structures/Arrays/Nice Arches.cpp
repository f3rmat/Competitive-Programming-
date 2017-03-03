#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
    int t;
    int ans = 0;
    scanf("%d",&t);
    while(t--)
    {
        string a;
        cin>>a;
        
        stack<char> s;
        for(int i = 0; i<a.length(); ++i)
        {
            if(a[i]=='A')
            {
                if(s.empty())
                s.push('A');
                
                else
                {
                    if(s.top()=='A')
                    s.pop();
                    
                    else s.push('A');
                }
                
            }
            
            else if(a[i]=='B')
            {
                if(s.empty())
                s.push('B');
                
                else
                {
                    if(s.top()=='B')
                    s.pop();
                    
                    else s.push('B');
                }
                
            }
            
            
        }
        
        if (s.empty())
        ans++;
    
    }
    
    printf("%d",ans);
    
	return 0;
}
