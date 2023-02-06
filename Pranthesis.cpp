#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbols = {{'[',-1},{'{',-2},{'(',-3},{']',+1},{'}',+2},{')',+3}};

string isBlanced(string str)
{
	stack<char> st;

	for(char Bracket: str)
	{
		if(symbols[Bracket]<0)
		{
			st.push(Bracket);
		}
		else
		{
			if(st.empty()) return "NO";

			char top = st.top();

			st.pop();

			if(symbols[top] + symbols[Bracket] != 0)
			{
				return "NO";
			}
		}
	}

	if(st.empty()) return "YES";

    return "NO";
}
int main()
{

	int t;
	cin>> t;

	while(t--){
		string str;
		cin>>str;
		cout<<isBlanced(str)<<endl;
	}

/*
input->
4
{[()]}
{([({}])])}
({[({})]})
{[(})}}]}


output->
yes
no
yes
no
*/

	return 0;
}