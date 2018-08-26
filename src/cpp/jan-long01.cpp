#include <bits/stdc++.h>

#define ULL unsigned long long int

using namespace std;

int main(){
	int t;
	cin >>t;
	unsigned long int d,l;
	float c;
	while(t--){
		cin>>c>>d>>l;
		ULL min,max;
		long int cap = d*2;
		if(cap >= c)	min = d*4;
		else min = abs(cap - c)*4 + d*4;
		max = (c+d)*4;
		//cout <<min<<endl;
		if((l % 4 == 0) && (l >= min) && (l <= max))	cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}