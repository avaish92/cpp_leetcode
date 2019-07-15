#include <iostream>
#include <vector>

#define lli long long int

using namespace std;
 
int main(int argc, char const *argv[])
{
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<lli> v(n);
        vector<lli> dp;
        vector<lli> dp_temp;
        lli sum = 0;

        //input
        for(lli &elem : v){
            cin >> elem;
            sum += elem;
        }

        dp.push_back(sum);
        for(int i = 1; i < n ; ++i){
            for(int elem : dp){
                if()
                dp_temp.push_back();
            }
        }

        //cout << n << endl << k << endl;
    }
    return 0;
}