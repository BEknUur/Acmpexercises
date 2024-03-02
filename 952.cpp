#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
    if(n == 0 &&  m == 0)
        cout << n << " " << m;
    else
        if(n == 0 && m != n)
            cout << "Impossible";
    else
        if(m == 0)
            cout << n << " " << n;
    else
        if(n == 1)
            cout << m << " " << m;
 
    else
        if(n < m)
           cout << m << " " << m + n - 1;
    else
        if(n==m)
            cout << n << " " << m + n - 1;
    else
            cout << n << " " << m + n - 1;
    return 0;
}