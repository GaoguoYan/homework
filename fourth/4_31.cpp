#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> ivec{1,3,5,7,9};
    vector<int> ::size_type cnt = ivec.size();
    //for(vector<int> ::size_type ix = 0; ix != ivec.size(); ++ix,--cnt)
    for(vector<int> ::size_type ix = 0; ix != ivec.size(); ix++,cnt--)
        ivec[ix]=cnt;
    for(auto i : ivec)
        cout << i << endl;
    system("pause");
    return 0;
}