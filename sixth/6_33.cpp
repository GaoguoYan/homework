#include<iostream>
#include<vector>

using namespace std;

int print(vector<int> val)
{
    for(auto &i : val)
    {
        cout<<i<<endl;
    }
}
int main()
{
    vector<int> v{1,2,3,4,5,6};
    print(v);
    system("pause");
    return 0;
}