#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	
	stack<char> temp;
	
	string t(s.length()+1,'z'+1);
	
	for(int i = s.length()-1; i>=0; i--){
		t[i] = min(t[i+1],s[i]);
	}
	
	for(int i = 0; i<s.length(); ++i){
		while(!temp.empty() && temp.top() <= t[i]){
			cout<<temp.top();
			temp.pop();
		}
		temp.push(s[i]);
	}
	
	while(!temp.empty()){
		cout<<temp.top();
		temp.pop();
	}
	
	return 0;
}
