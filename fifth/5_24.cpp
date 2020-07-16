#include<iostream>

using namespace std;

int main()
{
    double i,j;
    cin >>i>>j;
    try
    {
        if(j==0)
            throw runtime_error("denominator is zero");
        else
            cout<<i/j<<endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    system("pause");
    return 0;
}