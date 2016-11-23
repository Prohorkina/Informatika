#include<iostream>
using namespace std;
int dig_trench(int n, int ** z ) {
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (i>= j) z[i][j]= (i-j);
			if (j>= i) z[i][j]= (j-i);
	}
	}
	return 0;
}

int main(void){
	int N;
	cin >> N;
	int **Trench = new int* [N];
	for (int count = 0; count < N; count++)
		Trench[count] = new int [N];

	dig_trench(N,Trench);

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++) cout << Trench[i][j]<<" ";
		cout << endl;
	}
	return 0;
}
