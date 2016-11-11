#include <iostream>
#include <math.h>

using namespace std;

void NOK (int a, int b) {
	int max;
	for (int i = b; i <= a * b; i = i + b) {
		if (i%b == 0 & i%a == 0) {
			cout << i;
			break;
		}
	}

}

int main() {
	int a, b = 0;
	cin >> a;
	cin >> b;
	NOK (a, b);

	return 0;
}
