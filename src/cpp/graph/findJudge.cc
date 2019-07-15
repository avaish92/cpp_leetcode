#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {

        if(trust.empty()) return 1;
        vector<std::pair<int, int>> meta(N+1, std::pair<int, int>(0, 0));
        std::pair<int, int> max = {-1, -1};
        for(auto &i: trust){
            meta[i.at(0)].first += 1;
            meta[i.at(1)].second += 1;
            if(meta[i.at(1)].second > max.second)   max = std::make_pair(i.at(1), meta[i.at(1)].second);
        }
        
        return ( meta[max.first].first == 0 && max.second == N-1 ) ? max.first : -1;
    }
};