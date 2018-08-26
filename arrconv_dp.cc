#include <iostream>
#include <vector>

using namespace std;

#define ull unsigned long long
#define lli long long int
#define all(container) container.begin(),container.end()

const int dp_constant = 10000;

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--){

    vector<bool> dp(1000005,false);
    vector<lli> paths;
    lli sum = 0;
    lli x,y,z,n,k;
    cin >> n >> k;
    vector<lli> v(n);    
    for(lli &elem : v){
        cin >> elem;
        sum += elem;
    }
    paths.push_back(sum);
    dp[sum + dp_constant] = true;
    
    return 0;
    }
}
