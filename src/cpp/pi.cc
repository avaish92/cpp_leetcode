#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>

#define getcx getchar_unlocked
#define LL long long
#define FOR(i,n,i++) for(i=0;i<(n-1);i++)

inline void inp( int &n )
{
    n=0;
    int ch=getcx();int sign=1;
    while(ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}
    while(ch >= '0' && ch <= '9' )
            n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
    n=n*sign;
}
