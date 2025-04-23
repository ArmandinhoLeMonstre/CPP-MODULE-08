#include "Span.hpp"

Span::Span(unsigned int N) : _size(N) {

	std::cout << "Default constructor called" << std::endl;
}

Span::Span(Span const &copy) {

	if (this != &copy)
		*this = copy;
}

Span &Span::operator=(Span const &assign) {

	if (this != &assign)
		_size = assign._size;
	
	return (*this);
}

Span::~Span() {

	std::cout << "Destructor called" << std::endl;
}