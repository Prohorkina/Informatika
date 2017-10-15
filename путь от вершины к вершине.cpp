#include <iostream>

using namespace std;

const int MAXN = 1000;


int n,k,m, a[MAXN][MAXN];
int visited[MAXN];


void dfs(int v) {
    for (int i = 0; i < n; i++){
        if ((a[v][i] == 1) && ((visited[i]==0) || (visited[i]>(visited[v]+1)))){
                visited [i]=visited[v]+1;
                dfs(i);
        }
    }
}

int main() {

    cin >> n; //количество вершин

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j]; // матрица смежности

    for (int i = 0; i < n; ++i)
        visited[i] = 0;

    cin >> k;
    visited[k]=1;
    dfs(k);

    cin >> m;

    cout << visited[m]-1 << endl;
    return 0;
}
