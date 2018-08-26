    #include <iostream>
 
    using namespace std;

	#define ULL unsigned long long
     
    ULL gcd(ULL u,ULL v){
    	ULL r;
    	while ( v != 0)
    	{
    		r = u % v;
    		u = v;
    		v = r;
    	}
    	return u;
    }
     
    ULL lcm(ULL a, ULL b){
    	ULL res = a * b;
    	return (res/gcd (a,b));
    }

    int main(){
    	short int t;
    	int n;
    	ULL int res = 1e18;
    	cin >> t;
    	while(t--){
    		cin >> n;
    		ULL int arr[n];
    		for(int i = 0; i < n; ++i)	cin >>arr[i];
    		res = 1e18;
     
    		for(int i = 0;i < n;++i){
    			for(int j = i+1;j < n;++j){
    				res = std::min(res,lcm(arr[i], arr[j]));
    			}
    		}
    		cout <<res<<endl;
    	}
    	return 0;
    } 