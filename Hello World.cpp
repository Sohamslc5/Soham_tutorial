#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("inputf.txt","r",stdin);
	freopen("outputf.txt","w",stdout);
	#endif
    int n, m;
    cin >> n >> m;
    int k = 0;
    int y = n;
    int z = 1;
    while(y != 0)
    {
        z++;
        k++;
        if(z % m == 0)
        {
            y = y + m;
        }
        y--;
    }
    cout << k << endl;
	return 0;
}