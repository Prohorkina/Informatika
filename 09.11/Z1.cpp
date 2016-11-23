#include<iostream>

using namespace std;

int delete_duplicates(int n, int* A){
    int tmp=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++)
            if (A[i]==A[j])
                tmp++;
        if (!tmp){
        cout << A[i] << " ";
        }
        else
        tmp=0;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    int *Array = new int [n];
    for(int i=0;i<n;i++) {
            cin >> Array[i];
    }
    delete_duplicates(n,Array);
    return 0;
}
