#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {

        if(trust.empty()) return 1;
        vector<std::pair<bool, int>> meta(N+1, std::pair<bool, int>(0, 0));
        std::pair<int, int> max = {-1, -1};
        for(auto &i: trust){
            meta[i.at(0)].first = 1;
            meta[i.at(1)].second += 1;
            if(meta[i.at(1)].second > max.second)   max = std::make_pair(i.at(1), meta[i.at(1)].second);
        }
        
        return ( !(meta[max.first].first) && max.second == N-1 ) ? max.first : -1;
    }
};
