#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

#define ULL unsigned long long

#define ULL unsigned long long 

class Solution {    
public:
    int countPrimes(int n) {
        if(n < 3) return 0;
        vector<bool> v(n, true);
        ULL count = 0;
        for(int i = 2; i < std::sqrt(n); ++i){
            int j = 2;
            if(v[i]){
            int k = j * i;
            while(k < n){
                if(v[k]){
                    //cout << k << endl;
                    v[k] = false;
                    ++count;
                }
                k = i * ++j;
            }
            }
        }
        /////cout << "\n" << count << endl;
        return ((n-2) - count);
    }
};