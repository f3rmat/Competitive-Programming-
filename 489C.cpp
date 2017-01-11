#include<bits/stdc++.h>
using namespace std;
bool can_adjust(int length, int sum)
{
	return (sum>=0 && sum<=9*length);
}

int main()
{
	int length, sum,sum1;
	cin>>length>>sum;
	sum1 = sum;
	if(!can_adjust(length, sum)||(sum==0 && length>1))
	{
		cout<<"-1 -1";
	}
	
	else if(length==1 &&sum==0)
	{
		cout<<"0 0";
	}
	
	else
	{
		for(int i = 1; i<=length; i++)
		{
			for(int j = 0; j<=9; j++)
			{
				if(((i==1 && j>0)||(i>1)) && can_adjust(length-i,sum-j))
				{
					cout<<j;
					sum = sum - j;
					break;
				}
			}
		}
		
		cout<<" ";
		for(int i = 1; i<=length; i++)
		{
			for(int j = 9; j>=0; j--)
			{
				if(can_adjust(length-i,sum1-j))
				{
					cout<<j;
					sum1 = sum1 - j;
					break;
				}
			}
		}
	}
	return 0;
}
