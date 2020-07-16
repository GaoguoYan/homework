#include<iostream>
#include<iterator>

using namespace std;

int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    for(int *beg=begin(arr);beg != end(arr);beg++)
        *beg=0;
    /*int *beg=begin(arr);
    int *last=end(arr);
    while(beg != last)
    {
        *beg=0;
        ++beg;
    }*/
    for(auto i : arr )
        cout << i <<endl;
    system("pause");
    return 0;
}