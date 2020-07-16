#include<iostream>
#include<stddef.h>
#include<vector>

using namespace std;

int main()
{
    //compare two arr
    /*int arr1[10]={0,1,2,3,4,5,6,7,8,9};
    int arr2[10]={0,1,2,3,4,5,6,7,8,9};
    for(size_t i = 0;i<10;i++)
    {
        if(arr1[i] == arr2[i])
            cout << "the "<< i << "th element is equal" << endl;
        else
        {
            cout << "the "<< i << "th element in not equal" << endl;
        }
    }*/
    //compare two vector 
    vector<int> v1={0,1,2,3,4,5,6,7,8,9};
    vector<int> v2={0,1,2,3,4,5,6,7,8,9};
    if(v1 == v2)
    {
        cout <<"v1 and v2  are equal"<< endl;
    }   
    else
    {
        cout << "v1 and v2  are not equal" << endl;
    } 
    system("pause");
    return 0;
}