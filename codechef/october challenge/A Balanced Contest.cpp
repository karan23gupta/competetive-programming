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
        LL n,p; cin>>n>>p;
        LL a[n],c1=0,c2=0;
        F(i,0,n)
        {
            cin>>a[i];
            if(p/2<=a[i]){ a[i]=1; c1++;}
            else if(p/10>=a[i]){ a[i]=2; c2++;}
            else a[i]=3;
        }
        if((c1==1)&&(c2==2)) cout<<"yes\n";
        else cout<<"no\n";
	}
	return 0;
}
