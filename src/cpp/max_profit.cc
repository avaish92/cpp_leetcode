#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& a) {
        int size = a.size();
        //int pos = 0;
        int maxProfit = 0;
        if(size <= 1)   return 0;
        int min_cost = a[0];
        int max_sell = 0;
        for (int i = 0; i < size; ++i)
        {
            if(a[i] < min_cost){
                min_cost = a[i];
                //pos = i;
            }
            else if (/*(i > pos) &&*/ (a[i] - min_cost >= maxProfit)){
                max_sell = a[i];
                maxProfit = std::max(maxProfit, (max_sell - min_cost));
            }   
        }
        return maxProfit;
    }
};