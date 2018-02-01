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
	while(t--)
	{
        LL n,ans=0; cin>>n;
        LL a[n],s=0;
        F(i,0,n)
        {
            cin>>a[i];
            s+=a[i];
        }
        ans=(s-n)*n;
        cout<<ans<<"\n";

	}
	return 0;
}
