#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if(a==0)
	return b;
	return gcd(b%a, a);
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		string b;
		cin>>a>>b;
		
		if(a==0)
		{
			cout<<b<<"\n";
			continue;
		}
	
		int rem = 0;
		int powerten = 1;
		for(int i = b.length()-1; i>=0; i--)
		{
			rem = (rem + powerten*(b[i]-'0'))%a; 
			powerten = (10*powerten)%a;
		}
	
		cout<<gcd(rem,a)<<"\n";	
	}
	
	return 0;
}
