#include <bits/stdc++.h>
#define F(i,p,n) for(LL i=p; i<n; i++)
#define loop(i, n) for(LL i=0; i<n; i++)
#define fast   ios_base::sync_with_stdio(0); cin.tie(0)
#define dd double
#define mem(a, v) memset(a, v, sizeof(a))
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;
class stre
{

public:
    string s,d;
    void geti()
    {
        cin>>s;
        cin>>d;
    }
    void puti()
    {
        cout<<s<<"-"<<d<<" ";
    }
};
int main()
{
	//fast;
	ULL t; cin>>t;
	while(t--)
	{
        LL n; cin>>n;
        stre a[n];
        F(i,0,n)
        {
            a[i].geti();
        }
        int x[n];
        mem(x,0);
        string k;
        int pos=0;
        F(i,0,n-1)
        {
            int flag=0;
            F(j,i+1,n)
            {
                if(a[i].s.compare(a[j].d)==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                pos=i;
                break;
            }
        }
        a[pos].puti();
        F(i,0,n)
        {
            //cout<<"sda  ";
            if(a[pos].d.compare(a[i].s)==0)
            {
                a[i].puti();
                //cout<<" ";
                pos=i;
                i=-1;
                //break;
            }
        }
        cout<<endl;
	}
	return 0;
}
