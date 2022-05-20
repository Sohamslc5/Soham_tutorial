#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int s;
        cin >> s;
        if((s % 4 != 0 && s % 6 != 0) || (s < 6 && s!= 4))
        {
            cout << -1 << endl;
        }
        if (s < 6 && s == 4)
        {
            cout << 1 << " " << 1 << endl;
        }
        if(s >= 6 && s % 4 == 0 && s % 6 == )
        
    }
}