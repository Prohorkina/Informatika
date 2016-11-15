#include <iostream>

using namespace std;

void Resheto_Eratosfena(int n) {
    bool a[n+1];
    for (int i = 0; i<n; i++){
        a[i]=1;}
        a[0]=0;
        a[1]=0;
       for (int i=2; i*i<n; i++) {
       if (a[i]==1) {
        for (int j=i*2; j<=n;j=j+i){
            a[j]=0;
        }
       }
       }
       for (int i=2;i<=n; i++){
        if (a[i]==1){
            cout << i << " ";
        }
       }
    }

int main() {
	int n;
	cin >> n;
	Resheto_Eratosfena(n);

	return 0;
}
