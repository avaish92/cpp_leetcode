#include <stdio.h>

//using namespace std;

unsigned long long gcd(unsigned long long u,unsigned long long v){
	unsigned long long r;
	while ( v != 0){
		r = u % v;
		u = v;
		v = r;
	}
	return u;
}

unsigned long long lcm(unsigned long long a, unsigned long long b){
	unsigned long long res = a * b;
	return (res/gcd (a,b));
}

int main(){
	short int t;
	int n,i,j;
	unsigned long long int res = 1e18,min;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		unsigned long long int arr[n];
		for( i = 0; i < n; ++i)	scanf("%lld", &arr[i]);
		res = 1e18;

		for( i = 0;i < n;++i){
			for( j = i+1;j < n;++j){
				min = lcm(arr[i], arr[j]);
				if(min < res) res = min;
			}
		}
		printf("%lld\n", res);
	}
	return 0;
}