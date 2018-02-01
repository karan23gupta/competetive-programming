#include <bits/stdc++.h>
#define F(i,p,n) for(LL i=p; i<n; i++)
#define loop(i, n) for(LL i=0; i<n; i++)
#define fast   ios_base::sync_with_stdio(0); cin.tie(0)
#define dd double
#define mem(a, v) memset(a, v, sizeof(a))
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;
int main()
{
    fast;
    ULL t; cin>>t;
    do while(t--)
    {
        LL n,flag=0,max=0; cin>>n;
        LL a[n];
        F(i,0,n)
        {
            cin>>a[i];
            if(a[i]>max) max=a[i];
        }
        if((a[0]==1)&&(max==7))
        {
            F(i,0,n/2)
            {
                if((a[i]==a[n-1-i])&&(a[i+1]-a[i]<=1)&&(a[i+1]-a[i]>=0))
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1) cout<<"yes\n";
            else cout<<"no\n";
        }
        else cout<<"no\n";
    }
    return 0;
}
