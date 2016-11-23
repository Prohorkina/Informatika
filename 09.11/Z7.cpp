#include<iostream>
using namespace std;

int strange_multiply(int a, int b)  {
    if (b == 1)
        return a;
    return a + strange_multiply(a, b - 1);

}

int main(void){
    int N,M;
    cin >> N>>M;
    cout << strange_multiply(N,M);
    return 0;
}
