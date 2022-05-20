#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, q;
    cin >> N >> q;
    vector <int> v;
    while(N--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    long long int size = accumulate(v.begin(), v.end(), 0);
    while(q--)
    {
        int c;
        cin >> c;
        if(c == 2)
        {
            long long int k;
            cin >> k;
            size = N * k;
            cout << size << endl;
        }
        if(c == 1)
        {
            long long int a, b;
            cin >> a >> b;
            size = size - v[a - 1] + b; 
            v[a - 1] = b;
            cout << size << endl;
        }
         
        //cout << accumulate(v.begin(),v.end(), 0) << endl;
    }
}