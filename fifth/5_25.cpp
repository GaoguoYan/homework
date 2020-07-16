#include<iostream>
#include<stdexcept>
#include<string>

using namespace std;

int main()
{
    double i,j;
    cin >>i >>j;
    try
    {
        if(j==0)
            throw runtime_error("denominator is zero");
        else
            cout<<i/j<<endl;
    }
    catch(runtime_error &e)
    {
        cerr <<e.what()<<endl;
    }
    system("pause");
    return 0;
}