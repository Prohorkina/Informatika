#include <iostream>

using namespace std;

void Resheto_Eratosfena(int n) {
    bool flag = 1;
    for (int i = 1; i < n + 1; i++){
        for (int j = 2; j < n; j ++){
            if (i%j == 0 & i != j){
                flag = 0;
            }
        }
    if (flag == 1){
        cout << i << " ";
    }
    flag = 1;
 }
}

int main() {
	int n;
	cin >> n;
	Resheto_Eratosfena(n);

	return 0;
}
