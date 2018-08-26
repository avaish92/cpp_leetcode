#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    short int t;
    long int n,x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        unsigned long long int sum = 0;
        long long int count = -1;
        std::vector<long int> v(n);
        for(auto &i : v)    cin >> i;
        sort(v.begin(),v.end());
        ///decltype(v.begin()) it = v.begin();
        auto it = v.begin();
        while(sum <= x && it!=v.end()){
            sum += *it++;
            ++count;
        }
        if(sum > x) cout << count << endl;
        else cout << count+1 << endl;
    }
    return 0;
}
