#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>   // ← set_intersection
#include <iterator>    // ← back_inserter
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    

    set<string> a;
    set<string> b;

    int n, m;
    string tmp;

    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> tmp;        
        a.insert(tmp);
    }

    for (int j = 0; j < m; j++) {
        cin >> tmp;        
        b.insert(tmp);
    }

    vector<string> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));

    cout << result.size() << "\n";
    for (auto &name : result) {
        cout << name << "\n";
    }

    return 0;
}