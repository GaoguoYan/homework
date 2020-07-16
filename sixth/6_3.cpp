#include<iostream>
#include"chapter6.h"

using namespace std;

int main()
{
    cout << "please input a number" <<endl;
    int input;
    cin >> input;
    int result = fact(input);
    cout << result <<endl;
    system("pause");
    return 0;
}