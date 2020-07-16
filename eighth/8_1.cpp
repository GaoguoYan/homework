#include<iostream>

using namespace std;

istream& func(istream& is)
{
    string s;
    while( is >> s)
        cout << s <<endl;
    
    is.clear();
    return is;
}

int main()
{
    istream& is2 = func(cin); 
    system("pause");
    return 0;  
}