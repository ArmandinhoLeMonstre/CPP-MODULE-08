#include "Easyfind.hpp"

int	main(void)
{
	std::vector<int> myvector;
 	 for (int i = 1; i<=5; i++) 
	 	myvector.push_back(i);
	int check = 0;
	check = easyfind(myvector, 7);
	if (check == 1)
		std::cout << "Found number" << std::endl;
	else
		std::cout << "Couldn't find the number" << std::endl;

	return (0);
}