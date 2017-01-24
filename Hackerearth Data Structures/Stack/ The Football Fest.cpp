#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,pos;
        char ch;
        scanf("%d%d",&n,&pos);
        stack<int> mys;
        mys.push(pos);
        for(int i =1; i<=n; i++)
        {
            scanf(" %c",&ch);
            if(ch=='P')
            {
                scanf("%d ",&pos);
                mys.push(pos);
            }
            
            else if(ch=='B')
            {
                int x = mys.top();
                mys.pop();
                int y = mys.top();
                mys.pop();
                mys.push(x);
                mys.push(y);
            }
            
            //cout<<mys.top()<<endl;
            
        }
        
        cout<<"Player "<<mys.top()<<"\n";
    }
    
	return 0;
}
