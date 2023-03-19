#include <iostream>
#define ll long long
using namespace std;
ll a,b,p;
ll qpow(ll a,ll b,ll p){
    ll n=1;
    ll q=a;
    while(b!=0){
        if (b&1)
            n=(n*q)%p;
        q=(q*q)%p;
        b=b>>1;
    }
    return n%p;
}
int main(){
    cin>>a>>b>>p;
    cout<<qpow(a,b,p);
    return 0;
}
