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
    double x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if ((x2-x1)/(v1-v2) == int((x2-x1)/(v1-v2)) && (x2-x1)/(v1-v2) >=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
	return 0;
}
