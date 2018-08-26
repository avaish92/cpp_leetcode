#include <iostream>
#include <string>

using namespace std;
static int count = 0;

int _palindrome(string s,int i, int j){
    if(i == j) return 1;
    if(s[i] == s[j] && i+1 == j)    return 2;
    if(s[i] == s[j])    return _palindrome(s,i+1,j-1) +2;
    else return std::max(_palindrome(s,i,j-1),_palindrome(s,i+1,j));
}

int main(int argc, char const *argv[])
{
    string s = "maabclayaxyzlam";
    string s1 = "kxzmalayalamzfghhn";
    int val = _palindrome(s,0,s.size());
    cout << val << endl;
    return 0;
}