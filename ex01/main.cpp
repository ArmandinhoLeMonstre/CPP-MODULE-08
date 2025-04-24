#include "Span.hpp"

int main() {
    std::cout << "------------- Empty Span -------------" << std::endl;
    try {
        Span empty(0);
        std::cout << "Trying shortestSpan on empty:" << std::endl;
        std::cout << empty.shortestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "------------- Small Span -------------" << std::endl;
    Span small(6);
    small.addNumber(6);
    small.addNumber(3);
    small.addNumber(17);
    small.addNumber(9);
    small.addNumber(11);

    std::cout << "Shortest Span: " << small.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << small.longestSpan() << std::endl;

    std::cout << "------------- Copy constructor -------------" << std::endl;
    Span copy = small;
    copy.addNumber(100);
    std::cout << "Copied span longest span: " << copy.longestSpan() << std::endl;

    std::cout << "------------- Exception -------------" << std::endl;
    try {
        copy.addNumber(42);
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "------------- Big Span (100000) -------------" << std::endl;
    try {
        Span big(100000);
        for (int i = 0; i < 100000; ++i)
            big.addNumber(i);

        std::cout << "Shortest Span: " << big.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << big.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
