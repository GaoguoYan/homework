#include<iostream>
#include<vector>

using namespace std;

int main()
{
    cout<< "put in a number" <<endl;
    vector<int> v1;
    int i;
    while(cin >> i)
    {
        v1.push_back(i);
    }
    system("pause");
    return 0;
}