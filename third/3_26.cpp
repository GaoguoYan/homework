#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v={1,3,5,7,9};
    int sought = 0;
    auto beg = v.begin(),end = v.end();
    auto mid = v.begin()+(end - beg)/2;
    cout << *mid << endl;
    while(mid != end && *mid !=sought)
    {
        if (sought < *mid)
            end = mid;
        else
        {
            beg=mid+1;
        }
        mid = beg +(end-beg)/2;
        //mid = ( beg + end)/2;
        cout << *mid << endl;

    }
    //cout << *mid << endl;
    system("pause");
    return 0;
}