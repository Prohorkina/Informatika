#include <iostream>
#include <math.h>

using namespace std;

void NOK (int a, int b) {
	int max;
	for (int i = b; i <= a * b; i = i + b) {
		if (i%b == 0 & i%a == 0) {
			cout << "��� " << a << " � " << b << ": " << i << endl;
		}
	}

}

int main() {
	setlocale(0, "Russian");
	int a, b = 0;
	cout << "������� ������ �����" << endl;
	cin >> a;
	cout << "������� ������ �����" << endl;
	cin >> b;
	NOK (a, b);

	return 0;
}
