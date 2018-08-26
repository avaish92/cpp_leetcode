#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for(int i = 5 ; i >= 1;--i){
        for(int j = 1;j<= i; ++j){
            std::cout << "*";
        }
        cout << std::endl;
    }
    return 0;
}
