#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
    string a;
    cin>>a;
    bool flag = true;
    for(int i = 0; i<=a.length()-1; ++i)
    {   
        if(a[i]=='a')
        cout<<a[i],flag = false;
        
        else if(a[i]=='b')
        cout<<a[i],flag = true;
        
        else if(a[i]=='?')
        {    
            if(flag && a[i+1]!='a')
            cout<<'a',flag = false;
        
            else
            cout<<'b',flag = true;
        }
    }
    
	return 0;
}
