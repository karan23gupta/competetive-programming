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
    double c,h,o;
    cin>>c>>h>>o;
    double y = ((2*o)-h)/4;
    double x = (h-2*c+2*y)/2;
    double z = (c-y)/6;
    if(x<0||y<0||z<0||x!=abs(x)||y!=abs(y)||z!=abs(z)||LL(x)!=x||LL(y)!=y||LL(z)!=z)
        cout<<"Error";
    else cout<<LL(x)<<" "<<LL(y)<<" "<<LL(z);
	return 0;
}
