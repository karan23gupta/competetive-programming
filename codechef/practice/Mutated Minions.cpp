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
        LL n,k; cin>>n>>k;
        LL a[n],ans=0;
        F(i,0,n)
        {
            cin>>a[i];
            a[i]+=k;
            if(a[i]%7==0) ans++;
        }
        cout<<ans<<endl;
	}
	return 0;
}
