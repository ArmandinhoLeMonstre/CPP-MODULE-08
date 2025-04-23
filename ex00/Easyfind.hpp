#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int	easyfind(T const &container, int nbr) {

	typename T::const_iterator it = std::find(container.begin(), container.end(), nbr); 
	if (it != container.end())
		return (1);

	return (0);
}