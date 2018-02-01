#include <iostream>
#include<map>
using namespace std;
const int mx = 1001;
int a[mx][mx];
int main()
{
    int n;
    cin >> n;
    map< string, int> m;
    string x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        m[x] = i;
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int p;
    cin >> p;
    int i = 0, j;
    long long int ans = 0;
    while(p--) {
        cin >> x;
        j = m[x];
        //cout << j << " ";
        ans += (long long int)a[i][j];
        i = j;
    }
    cout << ans;
    return 0;
}
