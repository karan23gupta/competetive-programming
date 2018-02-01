#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t,b1,b2,m1,m2,l,r;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d%d%d%d",&b1,&b2,&m1,&m2);
        r= max ( min(b1,b2),min(m1,m2 ));
        l = min ( max(b1,b2),max(m1,m2 ));

        if((l>r)) printf("Nothing\n");
        else if(l==r) printf("Point\n");
        else printf("Line\n");
        t--;
    }
    return 0;
}
