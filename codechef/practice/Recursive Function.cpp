#include <iostream>
#include <iomanip>
using namespace std;
int f(int x,int y)
{
if(x==0)
return (y+1)%1000;
if(x>0&&y==0)
return f(x-1,1)%1000;
else//if(x>0&&y>0)
return f(x-1,f(x,y-1));
}
int main()
{
int x,y;
cin>>x>>y;
cout<<setw(3)<<setfill('0')<<f(x,y);
return 0;
}
