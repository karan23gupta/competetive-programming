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
        string s; cin>>s;
        LL x,y; cin>>x>>y;
        LL n=s.length();
        F(i,0,n)
        {
            if(s[i]=='a') a++;
            else b++;
        }
        LL nsa=a/x, nsb=b/y, ra=nsa%x, rb=nsb%y;
        string c,d;
        F(i,0,x) c.append("a");
        F(i,0,y) d.append("b");
        LL d=nsa-nsb;
        if(d>0)
        {
            if(d>rb)
            {
                LL p=d-rb;
                LL o=(p/b)+1;
                LL u=nsb-o;
                if(u<0)
                {

                }
                else
                {
                    nsb=u;
                    F(i,0,nsb) cout<<c<<d;
                    F(i,0,d) cout<<c<<'b';
                    F(i,0,ra) cout<<'a';
                }
            }
            else
            {
                rb-=d;
                F(i,0,nsb) cout<<c<<d;
                F(i,0,d) cout<<c<<'b';
                F(i,0,ra) cout<<'a';
                F(i,0,rb) cout<<'b';

            }
        }
        else if(d==0)
        {

        }
        else
        {

        }
	}
	return 0;
}
