#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int S = 0;
    int t;
    cin >> t;

    string s;
    int x;

    for(int i = 0; i < t; i++)
    {
        cin >> s;

        if(s == "add")
        {
            cin >> x;

            S |= (1 << (x - 1));
        }
        else if(s == "remove")
        {
            cin >> x;

            S &= ~(1 << (x - 1));
        }

        else if(s == "toggle")
        {
            cin >> x;

            S ^= (1 << (x - 1));
        }
        else if(s == "all")
        {
            S = (1 << 20) - 1;
        }
        else if(s == "check")
        {
            cin >> x;

            if((S & (1 << (x - 1))))
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if(s == "empty")
        {
            S = 0;
        }
         
    }
    return 0;
}