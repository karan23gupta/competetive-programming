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
	//yfast;
	//char ch;
	ULL t; cin>>t;
	while(t--)
	{
        string a,b;
        cin>>a;
        cin>>b;
        LL l1=a.length();
        LL l2=b.length();
        LL m[26],n[26],x=0,z=0,flag=0,flag2=0;
        mem(m,0); mem(n,0);
        F(i,0,l1)
        {
            m[int(a[i])-97]++;
        }
        F(i,0,l2)
        {
            n[int(b[i])-97]++;
        }
        F(i,0,26)
        {
            if(m[i]==0) z++;
            if(n[i]==0) x++;
            if((m[i]>=2)&&(n[i]==0))
            {
                flag2=1;
                //cout<<"here2";
                break;
            }
        }
        if(flag2==0)
        F(i,0,26)
        {

            if(n[i]>0)
            {
                 if(m[i]>0)
                 {
                     flag=1;
                     //cout<<"here1";
                 }
                 else
                 {
                     flag=0;
                     //cout<<"here3";
                     break;
                 }
            }
        }
        if(((flag==1)&&(x>z))||(flag2==1))
        {
            cout<<"A\n";
        }
        else cout<<"B\n";
        //cout<<"y/n : ";
       // cin>>ch;
	}
	return 0;
}
