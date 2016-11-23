#include<iostream>
using namespace std;
int build_ziggurat(int n, int ** z ) {
	int t;
	for(int i=0;i<(n+1)/2;i++){
		for(int j=0;j<(n+1)/2;j++)
			if(j<=i)	t=z[i][j]=z[n-i-1][j]=z[i][n-j-1]=z[n-i-1][n-j-1]=j+1;
			else   	z[i][j]=z[n-i-1][j]=z[i][n-j-1]=z[n-i-1][n-j-1]=t;
		t=0;
	}


	return 0;
}

int main(void){
	int N;
	cin >> N;

	int **ziggurat = new int* [N];
	for (int count = 0; count < N; count++)
		ziggurat[count] = new int [N];


	build_ziggurat(N,ziggurat);

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << ziggurat[i][j]<<" ";
		}cout << endl;
	}

	return 0;
}
