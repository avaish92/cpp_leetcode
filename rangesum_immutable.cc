#include<vector>
using namespace std;

class NumArray {
    vector<int> sumMeta;
public:
    NumArray(vector<int> nums) {
        if(!nums.empty()){
        sumMeta.resize(nums.size());
        sumMeta[0] = nums[0];
        for(int i =1;i<sumMeta.size(); ++i){
            sumMeta[i] += sumMeta[i-1] + nums[i];
            ///cout << sumMeta[i] << " " << nums[i] << endl;
            }
        }
    }
    int sumRange(int i, int j) {
        ///if(i>j) return -1;
        
        if(i==0)
        return sumMeta[j];
        else return(sumMeta[j]-sumMeta[i-1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */