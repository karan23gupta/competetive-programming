#include <bits/stdc++.h>
#define F(i,p,n) for(LL i=p; i<n; i++)
#define loop(i, n) for(LL i=0; i<n; i++)
#define fast   ios_base::sync_with_stdio(0); cin.tie(0)
#define dd double
#define mem(a, v) memset(a, v, sizeof(a))
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;
LL brush(LL *arr, LL i, LL n, LL b1, LL b2)
{
    F(j,i,n)
    {
        if(arr[j]==b1) return 1;
        if(arr[j]==b2) return 2;
    }
    return 2;
}
int main()
{
    LL t; cin>>t;
    while(t--)
    {
        LL n; cin>>n;
        LL a[n];
        F(i,0,n) cin>>a[i];
        LL b1=-1,b2=-1;
        LL count=0;
        F(i,0,n)
        {
            if(b1==a[i]||b2==a[i])
                continue;
            if(brush(a,i+1,n,b1,b2)==2)
            {
                b1=a[i];
                count++;
            }
            else
            {
                b2=a[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
