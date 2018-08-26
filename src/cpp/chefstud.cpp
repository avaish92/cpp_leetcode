#include <bits/stdc++.h>

#define getcx getchar_unlocked()
#define LLI long long int
#define ULL unsigned long long int
#define REP(i,s,n)  for (int i=(s),_n=(n);i<=_n;i++)
#define FOR(j,s,n)  for (int i=(s),_n=(n);i<_n;i++)
#define REPD(i,e,s)  for (int i=(e),_s=(s);i>=_s;i--)
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

using namespace std;

int main()
{
	int t;
	cin >>t;
	while(t--){
		string s;
		int count = 0,i = 0;
		cin >>s;
		while(i<s.size()-1){
			if(s[i] == '<' && s[i+1] == '>'){
				++count;
				++i;
			}
			++i;
		}
		cout<<count<<endl;
	}
return 0;
}