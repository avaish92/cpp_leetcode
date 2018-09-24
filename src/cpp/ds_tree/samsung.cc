#include<bits/stdc++.h>

#define ULL unsigned long long int

using namespace std;

int main(int argc, char const *argv[])
{
    string str = "127.0.0.1";
    size_t found = str.find(".");
    cout << found << endl;
    if(str.find(".") != string::npos)   cout << "Inside if condition" << endl;
    else  cout << "inside else" << endl;

    return 0;
}