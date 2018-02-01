#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    long long int arr[1000000];
    long long int ans=0;
    while(t--)
    {
        char str[1000005];
        cin>>str;
        long long int j=0;
        long long int len=strlen(str);
        ans=0;
        j=0;
        for(int i=0;i<len;i++)
        {

            if(str[i]=='a' || str[i]=='z')
            {
                arr[j]=i;
                j++;
            }

        }
        if(j!=0)
        {
            long long int k=0;
        for(int i=0;i<len;i++)
        {
                if(i>arr[k])
                k++;
                if(arr[k]>=i)
                 ans+=len-arr[k];
         }
        }
        cout<<ans<<endl;
    }
    return 0;
}
