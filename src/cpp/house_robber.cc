#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    static int rob(vector<int>& v) {
        if(!v.size())   return 0;
        if(v.size() == 1)   return v[0];
        if(v.size() <= 2)    return std::max(v[0], v[1]);
        vector<int> dp(v.size());
        long long int max = -1e18;
        dp[0] = v[0];
        dp[1] = v[1];
        dp[2] = v[2] + v[0];
        max = std::max(std::max(dp[0],dp[1]),dp[2]);
        for(int i = 3;i < v.size(); ++i){
            dp[i] += std::max(v[i] + dp[i-2], v[i]+dp[i-3]);
            //cout << dp[i] << endl;
            if(dp[i] > max) max = dp[i];
        }
        return max;
    }
};

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    std::vector<int> v;

    while(t--){
        Solution::rob(v);
    }
    return 0;
}
