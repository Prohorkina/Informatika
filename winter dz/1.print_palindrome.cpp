#include <iostream>
#include <math.h>
using namespace std;

bool is_palindrom(int pol){
    int a, b = 0;
    for ( a = pol; a>0; a /= 10 )
        b = b * 10 + a % 10;
    return b == pol;
}

void print_palindrom(int n){
    int Max= pow (10,n);
    if (n==2)
    cout<<99;
    int pol;
    if (n%2==0)
       pol= pow (10,n-1)+1+88*(pow (10,n/2-1));//������ ������ n-������� ���������
    else
       pol=pow (10,n-1)+1+7*(pow (10,n/2));//������ ������ n-������� ���������
    for (pol; pol<Max;pol+=9) //��������� � ���������� ����� �� 9 � ��������� ��������� �� ����� �����������
        if (is_palindrom(pol)==true)
        cout<<pol<<" ";
}

int main(){
   int n;
   cin>>n;
   print_palindrom (n);
   return 0;
}
