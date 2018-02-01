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
        float n,v1,v2; cin>>n>>v1>>v2;
        float tal=0,tst=0;
        tal=2*n/v2;
        tst=1.4142*n/v1;
        if(tal>tst) cout<<"Stairs\n";
        else cout<<"Elevator\n";
	}
	return 0;
}
