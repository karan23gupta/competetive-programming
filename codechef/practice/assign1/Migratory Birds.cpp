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
	 int n;
    cin>>n;
    int mem[6]={0};
    for(int i = 0;i<n;i++)
    {
        int x;
        cin>>x;
        mem[x]++;
    }
    int ans = 0, maxim = 0;
    for(int i = 0;i<6;i++)
    {
        if(maxim < mem[i])
        ans = i,maxim = mem[i];
    }
    cout<<ans<<endl;
	return 0;
}
