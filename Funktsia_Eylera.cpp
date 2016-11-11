#include <iostream>

using namespace std;

int main () {
    long long n, s;
    cin >> n;
    s = n;
    for (long long i = 2; i*i <= n; i++)
        if (n % i == 0) {
            while (n % i == 0) n/= i;
            s=s-s/i;
        }
    if (n > 1) s=s-s/n;
    cout << s;
    return 0;
}
