#pragma once
#include <iostream>

class Span {

	private :

		int _size;
	
	public :
	
		Span(unsigned int N);
		Span(Span const &copy);
		Span &operator=(Span const &copy);

		~Span();
};