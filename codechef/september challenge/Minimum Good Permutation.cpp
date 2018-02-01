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
	    LL n; cin>>n;
	    LL a[n];
	    F(i,0,n) a[i]=i+1;
	    F(i,0,n)
	    {
	        if((a[i]==i+1)&&(i<n-1))
            {
                swap(a[i],a[i+1]);
                i++;
            }
            else
            {
                swap(a[i],a[i-1]);
            }
	    }
	    F(i,0,n) cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
