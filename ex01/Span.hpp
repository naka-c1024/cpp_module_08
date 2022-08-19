#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <limits.h>

class Span
{
public:
	Span();
	~Span();
	Span(Span const &other);
	Span &operator=(Span const &other);

	Span(unsigned int N);
	void	addNumber(int num);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	void			addNumber(std::vector<int> vec);
private:
	unsigned int		N_;
	std::vector<int>	stored_;
};

#endif /* SPAN_HPP */
