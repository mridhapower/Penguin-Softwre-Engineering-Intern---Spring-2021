#include<bits/stdc++.h>
using namespace std;
/** template**/
#define ll long long
#define sci(n) scanf("%lld",&n)
#define MEM(a,x) memset(a,x,sizeof(a))
#define FOR(i,N) FORR(i, 0, N)
#define FORR(i,a,b) FOTR(i, a, b, 1)
#define FOTR(i,a,b,c) for(int i=(a);i<(b);i+=(c))
#define space << " " <<
#define pb push_back
#define ff first
#define ss second
#define BUFFSIZE 30000
#define INF 1000000000
#define MOD 1000000009
#define MAX 200000
/** template**/

int main()
{
    ll n,i,t=0,l=0;
    sci(n);
    double w[n],m;
    FOR(i,n)cin>>w[i];
    sort(w,w+n);
    m=3.0-w[0];
    for(i=n-1;i>=0;i--){
        if(w[i]>m)t++;
        else if(w[i]<=m){
            if(w[i]+w[l]<=3.0){
                l++;
            }
            t++;
        }
        if(i<=l)break;
    }
    cout<<t<<endl;

}

