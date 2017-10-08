#include <iostream>

using namespace std;

int main()
{
    int osn, step, res;
    cin >> osn;
    cin >> step;
    res=1;
    for (int i=0; i<step; i++)
        res=res * osn;
    cout << res;
    return 0;
}
