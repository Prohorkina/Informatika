#include "iostream"

using namespace std;

bool M(int n) {
  int i, j,S, N,c = 0;
  bool *mas;
  S=n/2;
  N=S+1;
  mas= new bool [N];
  for(i=1; i<=S; i++) mas[i]=true;
  for(i=2; ((i*i)<=S); i++)
        if(mas[i])
                for(j=(i*i); j<=S; j+=i)
                        if(mas[j]) mas[j]=false;
  for(i=1; i<=S; i++)
        if(mas[i] && n%i==0) c++;
  if(c <= 3 && c>1) return 1;
  return 0;
}
int main() {
  int n, a, p = 1;
  cin >> n;
  for(int i = 0; i<n; i++){
    cin >> a;
    if(a != 0 && a!=1)
    if(M(a)) p*= a;
  }
  cout << p;
  return 0;
}
