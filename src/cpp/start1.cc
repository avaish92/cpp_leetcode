#include <iostream>
#include <vector>

#define all(container) container.begin(),container.end()
#define lli long long int


int main(){
    int t,n;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        std::vector <int> v(n);
        long int min = 1e8;
        long int sum_right=0, sum_left;
        int i = 0;

        for(int &elem : v){
            std::cin >> elem;
            sum_right += elem;
        }
        sum_left= v.at(0);
        sum_right -= sum_left;
        min = (sum_right >= sum_left) ? sum_right-sum_left : -1;
        while(sum_left <= sum_right && i < v.size()){
            min = std::min(min,sum_right-sum_left);
            sum_left += v.at(++i);
            sum_right -= v.at(i);
        }
        std::cout << min << std::endl;
        v.erase(all(v));
    }
}