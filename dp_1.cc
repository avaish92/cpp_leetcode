#include <iostream>
#include <vector>

#define ULL unsigned long long
#define all(container) container.begin(),container.end()

using namespace std;

int _equal(const vector<int> &v){
    int result = 1e8;
    for(const int &elem : v){
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int t ;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> v(n);
        for(int &elem : v)  cin >> elem;
        int result = _equal(v);
        cout << result << endl;
    }
    return 0;
}