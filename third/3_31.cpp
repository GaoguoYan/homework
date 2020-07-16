#include<iostream>
#include<stddef.h>

using namespace std;

int main()
{
    int a[10];
    int b[10];
    for(size_t i =0; i<10;i++)
    {
        a[i]=i;
        b[i]=a[i];
    }
    for(auto i : a)
        cout << i <<endl;
    for(auto i : b)
        cout << i << endl;
    system("pause");
    return 0;
}