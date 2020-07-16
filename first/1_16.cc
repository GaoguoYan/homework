#include<iostream>
int main()
{
	std::cout << "enter a group of number" << std::endl;
	int sum = 0,value =0;
	while(std::cin >> value)
		sum+=value;
	std::cout << "sum is: " << sum << std::endl;
	return 0;
}
