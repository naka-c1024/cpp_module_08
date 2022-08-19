#include "Span.hpp"
#include <iostream>

int main(void)
{
	std::cout << "---- subject tests ----" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n----  throw an exception tests ----" << std::endl;
	try
	{
		Span hoge = Span(1);
		hoge.addNumber(42);
		hoge.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span hoge = Span(1);
		hoge.addNumber(42000);
		std::cout << hoge.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span hoge = Span(42);
		std::cout << hoge.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n----  iterators tests ----" << std::endl;
	try
	{
		std::vector<int> vec;
		vec.push_back(10);
		vec.push_back(100);
		vec.push_back(1000);
		Span hoge = Span(5);
		hoge.addNumber(1);
		hoge.addNumber(vec);
		hoge.addNumber(1001);
		std::cout << "shortSpan: 1000&1001 = " << hoge.shortestSpan() << std::endl;
		std::cout << "longSpan: 1001-1 = " << hoge.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::vector<int> vec;
		vec.push_back(10);
		vec.push_back(100);
		vec.push_back(1000);
		Span hoge = Span(3);
		hoge.addNumber(1);
		hoge.addNumber(vec);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
