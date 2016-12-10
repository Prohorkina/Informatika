#include <iostream>
using namespace std;
int a[100];
void QS(int l, int r)
{
    int x = a[l + (r - l) / 2];
    int i = l;
    int j = r;
    while(i <= j)
    {
        while(a[i] < x) i++;
        while(a[j] > x) j--;
        if(i <= j)
        {
            int temp =a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }
    if (i<r)
                QS(i, r);

    if (l<j)
        QS(l, j);
}
int main()
{
    int n;
    int k;
    cin >> n;
    cin >> k;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    QS(0, n-1);
        cout<<a[k-1]<<" ";

    return 0;
}
