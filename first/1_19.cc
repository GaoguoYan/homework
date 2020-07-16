#include<iostream>
int main()
{
	int v1 = 0,v2 = 0;
	std::cout << "enter two number:" << std::endl;
	std::cin >> v1 >> v2;
	if(v1<v2)
	{
		int v3 = 0;
		v3=v1;v1=v2;v2=v3;
	}
        while(v1>=v2){
        	std::cout << v1 << std::endl;
        	v1--;
        }
	return 0;
}
