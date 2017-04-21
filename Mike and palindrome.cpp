#include <iostream>
using namespace std;
bool ispalin(string a)
{
	int i = 0, j = a.length()-1; 
	while(i<=j)
	{
		if(a[i]!=a[j])
		return false;
		
		i++;
		j--;
	}
	
	return true;
}


int main() {
	string a;
	cin>>a;
	if(ispalin(a))
	{
		if(a.length()%2==1)
			cout<<"YES";
		else
			cout<<"NO";
	}
	
	else
	{
		bool changed = false;
		int i = 0, j = a.length()-1;
		while(i<=j)
		{
			if(a[i]!=a[j] && !changed)
			{
				changed = true;
			}
			
			else if(a[i]!=a[j])
			{
				cout<<"NO";
				return 0;
			}
			
			i++;
			j--;
		}
		cout<<"YES";
	}
	return 0;
}
