#include <bits/stdc++.h>
#define F(i,p,n) for(LL i=p; i<n; i++)
#define loop(i, n) for(LL i=0; i<n; i++)
#define fast   ios_base::sync_with_stdio(0); cin.tie(0)
#define dd double
#define mem(a, v) memset(a, v, sizeof(a))
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;
int wrongSolver(LL *a)
{
	int n = sizeof(a);
	vector<LL> prefSum(n), sufSum(n);
	prefSum[0] = a[0];
	for (int i = 1; i < n; i++) {
		prefSum[i] = prefSum[i - 1] + a[i];
	}
	sufSum[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		sufSum[i] = sufSum[i + 1] + a[i];
	}
	LL mn = prefSum[0] + sufSum[0];
	int where = 1;
	for (int i = 1; i < n; i++) {
		LL val = prefSum[i] + sufSum[i];
		cout<<val<<" ";
		if (val < mn) {
			mn = val;
			where = i + 1;
		}
	}
	return where;
}

int main()
{
    LL b[7]={4294967396, 4294967195, 4294967398, 4294967193, 4294967400, 4294967191, 4294967402};
    cout<<wrongSolver(b);
	return 0;
}
