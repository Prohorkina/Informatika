#include<iostream>
 using namespace std;
int proper_fraction(int a)  {
    if(a<0)a=-a;
    if (a == 1)
        return 0;
    return proper_fraction(a-1)+1;
}

int main(void){
    int N=0;
    cin >> N;
    cout << proper_fraction(N) ;
    return 0;
}
