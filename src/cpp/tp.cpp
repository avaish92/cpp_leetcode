#include <iostream>

using namespace std;

int main(){
	int t,n;
	cin >>t;
	while(t--){
		cin >> n;
		if(n % 8 == 0)	cout <<n-1<<"SL"<<endl;
		else if((n + 1) % 8 == 0)	cout<<n+1<<"SU"<<endl;
		else{
			int a = (n/8)+1;
			int berth = n % 8;
			int res;
			if(((n+3) >= (a*8)) || (n+3) >= (a*8-1))	res = n-3;
			else res = n+3;
			if (berth == 1 || berth == 4)	cout <<res<<"LB"<<endl;
			else if(berth == 2 || berth == 5)	cout<<res<<"MB"<<endl;
			else	cout <<res<<"UB"<<endl;
		}
	}
	return 0;
}