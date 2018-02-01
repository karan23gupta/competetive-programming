#include <bits/stdc++.h>
#define F(i,p,n) for(LL i=p; i<n; i++)
#define loop(i, n) for(LL i=0; i<n; i++)
#define fast   ios_base::sync_with_stdio(0); cin.tie(0)
#define dd double
#define mem(a, v) memset(a, v, sizeof(a))
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;
LL sop  (int n)
{
    LL ans=0;
	if (n%2 == 0)
	{
		printf("%d ", 2);
		n = n/2;
		ans+=2;
	}
	for (int i = 3; i <= sqrt(n); i = i+2)
	{
        if (n%i == 0)
		{
            ans+=i;
            n = n/i;
		}
	}
	return ans;
}
int main()
{
	fast;
	ULL t; cin>>t;
	while(t--)
	{
        LL n; cin>>n;
        cout<<sop(n)<<" ";
	}
	return 0;
}
