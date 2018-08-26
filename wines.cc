#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;
static vector<int> v{2,3,5,1,4};

int calcEvent(int year, int its, int ite){
    if(its > ite){
        cout << "return called" << endl;
        return 0;
    }
    cout << "year=" <<year << endl;
    cout << its << " " << v[its]*year << "\t" << ite << " " << v[ite]*year << endl;
    return std::max((calcEvent(year+1,its+1,ite) + v[its]*year),(calcEvent(year+1,its,ite-1) + v[ite]*year));
}

int main(int argc, char const *argv[])
{
    //for(auto &i:v)  cout << i << endl;
    int profit = calcEvent(1,0,v.size());
    cout << profit << endl;
    return 0;
}