#include <iostream>
using namespace std;
int rev(int n){
    int m=0;
    while(n>0){
        m=m*10+n%10;
        n=n/10;
    }
    return m;
}
int main()
{
    int t,n,m;
    cin>>t;
    while(t>0){
        cin>>n>>m;
        cout<<rev(rev(n)+rev(m))<<'\n';
        t--;
    }
    return 0;
}
