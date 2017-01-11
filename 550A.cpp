#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n = s.length();
	if(n<=3)
	{
		cout<<"NO";
	}
	
	else
	{	
		int flag = -1;
		int flag1 = 0;
		for(int i = 0; i<=n-2; i++)
		{
			if(s[i]=='A' && s[i+1] == 'B')
			{
				flag = i+2;
				break;
			}
		}
		
		if(flag!=-1)
		for(int i = flag; i<=n-2; i++)
		{
			if(s[i]=='B' && s[i+1]=='A')
			{
				cout<<"YES";
				flag1 = 1;
				break;
			}
		}
		
		int flag2 = 0;
		if(flag1==0)
		{	
			flag = -1;
			for(int i = 0; i<=n-2; i++)
			{
				if(s[i]=='B' && s[i+1] == 'A')
				{
					flag = i+2;
					break;
				}
			}
			
			if(flag!=-1)
				for(int i = flag; i<=n-2; i++)
				{
					if(s[i]=='A' && s[i+1]=='B')
					{
						cout<<"YES";
						flag2 = 1;
						break;
					}
				}
		}
		
		if(flag2==0 && flag1 ==0)
		cout<<"NO";
		
		
		
			
	}
	
	
	return 0;
}
