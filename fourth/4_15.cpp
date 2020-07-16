#include<iostream>

using namespace std;

int main()
{
    double dval;
    int ival;
    int *pi;
    pi = &(ival = dval = 0);
    cout << dval << endl;
    cout << ival << endl;
    cout << *pi << endl;

    system("pause");
    return 0;
}