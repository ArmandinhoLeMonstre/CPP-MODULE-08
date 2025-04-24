#include "MutantStack.hpp"

int main() {
    std::cout << "------------- Default MutantStack -------------" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "Size after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
	mstack.push(4234);
	mstack.push(689);
	mstack.push(123);
	mstack.push(44);
    mstack.push(0);

    std::cout << "------------- Forward iteration -------------" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    while (it != ite) {
        std::cout << "Value: " << *it << std::endl;
        ++it;
    }

    std::cout << "------------- Reverse iteration -------------" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();

    while (rit != rite) {
        std::cout << "Value: " << *rit << std::endl;
        ++rit;
    }

    std::cout << "------------- Copy & Assignment -------------" << std::endl;
    MutantStack<int> copy(mstack);
    std::cout << "Copy top: " << copy.top() << std::endl;

    MutantStack<int> assign;
    assign = mstack;
    std::cout << "Assigned top: " << assign.top() << std::endl;

    return 0;
}
