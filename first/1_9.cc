#include<iostream>
int main()
{
	int sum = 0, i=50;
	while(i<=100){
		sum+=i;
		i++;
	}
	std::cout << "the sum of 50 to 100 is " << sum << std::endl;
	return 0;
}