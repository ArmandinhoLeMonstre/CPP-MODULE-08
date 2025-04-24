#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Span {

	private :

		unsigned int _size;
		std::vector<int> _MyVector;
	
	public :
	
		Span(unsigned int N);
		Span(Span const &copy);
		Span &operator=(Span const &copy);

		~Span();

		void	addNumber(int nbr);
		void	addMultipleNumbers(std::vector<int> Vec);
		int		shortestSpan();
		int		longestSpan();
		int &operator[](unsigned int index);
};