template <class T>
MutantStack<T>::MutantStack() : std::stack<T, std::deque<T> >() {
    std::cout << "MutantStack default constructor called" << std::endl;
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T>&copy) : std::stack<T, std::deque<T> >(copy) {
    std::cout << "MutantStack copy constructor called" << std::endl;
}

template <class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>&assign) {
    if (this != &assign)
        std::stack<T, std::deque<T> >::operator=(assign);
    return *this;
}

template <class T>
MutantStack<T>::~MutantStack() {
    std::cout << "MutantStack destructor called" << std::endl;
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return this->c.begin();
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return this->c.end();
}

template <class T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
    return this->c.begin();
}

template <class T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
    return this->c.end();
}

template <class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {
    return this->c.rbegin();
}

template <class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {
    return this->c.rend();
}

template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const {
    return this->c.rbegin();
}

template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const {
    return this->c.rend();
}

