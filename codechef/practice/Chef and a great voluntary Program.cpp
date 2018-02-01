#include <bits/stdc++.h>
#define F(i,p,n) for(LL i=p; i<n; i++)
#define loop(i, n) for(LL i=0; i<n; i++)
#define fast   ios_base::sync_with_stdio(0); cin.tie(0)
#define dd double
#define mem(a, v) memset(a, v, sizeof(a))
#define BADA 4294967294
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;
int main()
{
	fast;
	ULL t; cin>>t;
	while(t--)
	{
        LL n; cin>>n;
        LL a[n];
        LL m=BADA/(n+1);
        LL k=BADA%(n+1);
        a[0]=m+k+1;
        a[1]=m-1;
        F(i,2,n) a[i]=m;
        LL x=0;
        F(i,0,n)
        {
            cout<<a[i]<<" ";
            x+=a[i];
        }
        cout<<endl;
        F(i,0,n)
        {
            cout<<a[i]+x<<" ";
        }
        cout<<endl;
    }
	return 0;
}
