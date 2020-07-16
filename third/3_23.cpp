#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v(10,1);
    for(auto it =v.begin(); it != v.end();++it)
    {
        *it = (*it)*2;
        cout << *it <<endl;
    }    
    system("pause");
    return 0;
}