#include<vector>
#include <iostream>
using namespace std;
//static vector<int> sumMeta;
class NumArray {
    vector<int> sumMeta;
public:
    NumArray(vector<int> nums) {
        sumMeta.resize(nums.size());
        sumMeta[0] = nums[0];
        for(int i =1;i<sumMeta.size(); ++i) sumMeta[i] += sumMeta[i-1];
    }
    int sumRange(int i, int j) {
        return sumMeta[j]-sumMeta[i];
    }
};