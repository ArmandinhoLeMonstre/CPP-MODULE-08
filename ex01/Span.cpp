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
	{
		_size = assign._size;
		_MyVector = assign._MyVector;
	}
	
	return (*this);
}

Span::~Span() {

	std::cout << "Destructor called" << std::endl;
}

int	&Span::operator[](unsigned int index) {

	if (index >= _size) {
		
		throw std::out_of_range("Index out of bounds");
	}
	return _MyVector[index];
}

void	Span::addNumber(int nbr) {

	if (_MyVector.size() == _size)
		throw std::out_of_range("Span is full");
	_MyVector.insert(_MyVector.end(), nbr);
}

void	Span::addMultipleNumbers(std::vector<int> Vec) {

	if (Vec.size() > (_size - _MyVector.size()))
		throw std::out_of_range("Span is full");
	_MyVector.insert(_MyVector.end(), Vec.begin(), Vec.end());
}

int		Span::shortestSpan() {

	std::vector<int>::iterator it;
	
	if (_MyVector.size() < 2)
		throw std::out_of_range("Vector size is too low");
	std::vector<int> tmp = _MyVector;
	std::vector<int> res(tmp.size());
	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), res.begin());

	it = std::min_element(res.begin() + 1, res.end());
	return (*it);
}

int		Span::longestSpan() {

	std::vector<int>::iterator min;
	std::vector<int>::iterator max;

	if (_MyVector.size() < 2)
		throw std::out_of_range("Vector size is too low");
	min = std::min_element(_MyVector.begin(), _MyVector.end());
	max = std::max_element(_MyVector.begin(), _MyVector.end());
	
	return (*max - *min);
}