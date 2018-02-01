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
	string s;
	vector<char> res;

	cin >> s;
	for (int i = 0; i < s.length(); ++i)
		if (res.empty())
			res.push_back(s[i]);
		else if (res.back() == s[i])
			res.pop_back();
		else
			res.push_back(s[i]);

	if (res.size() == 0)
		cout << "Empty String" << endl;
	else
	{
		for (int i = 0; i < res.size(); ++i)
			cout << res[i];
		cout << endl;
	}

	return 0;
}
