    #include<bits/stdc++.h>
    using namespace std;
     
    #define ll long long
    #define sp ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
    #define cps CLOCKS_PER_SEC
    #define mod (ll)1000000007
    #define f first
    #define s second
    #define debug1(x) cout<<x<<"\n"
    #define debug2(x,y) cout<<x<<" "<<y<<"\n"
    #define debug3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
    #define nl cout<<"\n";
    #define pq priority_queue
    #define inf 0x3f3f3f3f
    #define test cout<<"abcd\n";
    #define pi pair<int,int>
    #define pii pair<int,pi>
    #define pb push_back
    #define mxn 200005

    int a[mxn];
    int vis[mxn];
    int base=100001;
     
    int main(){
    //sp;
    int t;
    cin>>t;
    while(t--){
        int n,k,sum=0;
        cin>>n>>k;
        memset(vis,0,sizeof vis);
        for(int i=1; i<=n; ++i){
            cin>>a[i];
            sum+=a[i];
        }
        vector<int> v;
        v.pb(sum);
        vis[sum+base]=1;
        int y,z,w;
        for(int i=1; i<=n; ++i){
                vector<int> q;
        for(int x:v){
            //debug
            cout << endl << "x= " <<  x << endl;
            cout << "v.size() = " << v.size() << endl;
            y=x-i; cout << "y = " << y << endl;
            z=x+i; cout << "z = " << z << endl;
            w=x-a[i]-a[i]; cout << "w = " << w << endl;
            if(!vis[y+base])q.pb(y);
            if(!vis[z+base])q.pb(z);
            if(!vis[w+base])q.pb(w);
            vis[y+base]=1;
            vis[w+base]=1;
            vis[z+base]=1;
            //debug
            cout << "q--> ";
            for(int i : q)  cout << i << ", ";
            cout << endl;
        }
        if(vis[k+base]) break;
        for(int j:q)
            v.pb(j);
        }
        if(vis[k+base])cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}