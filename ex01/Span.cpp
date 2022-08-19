#include "Span.hpp"

Span::Span():N_(0)
{
}
Span::~Span()
{
}
Span::Span(const Span &other)
{
	*this = other;
}
Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->N_ = other.N_;
		this->stored_ = other.stored_;
	}
	return *this;
}

Span::Span(unsigned int N):N_(N)
{
}

void	Span::addNumber(int num)
{
	if (this->stored_.size() >= this->N_)
		throw std::out_of_range("There are already N elements stored.");
	this->stored_.push_back(num);
}

unsigned int	Span::shortestSpan()
{
	if (this->stored_.size() < 2)
		throw std::out_of_range("There are no numbers stored, or only one, no span can be found.");
	std::vector<int> diffs(this->stored_.size());
	std::adjacent_difference(this->stored_.begin(), this->stored_.end(), diffs.begin());
	unsigned int shortest_span = INT_MAX;
	for (size_t i = 1; i < diffs.size(); i++)
		if ((unsigned int)std::abs(diffs[i]) < shortest_span)
			shortest_span = std::abs(diffs[i]);
	return shortest_span;
}

unsigned int	Span::longestSpan()
{
	if (this->stored_.size() < 2)
		throw std::out_of_range("There are no numbers stored, or only one, no span can be found.");
	int	min_num = *std::min_element(this->stored_.begin(), this->stored_.end());
	int	max_num = *std::max_element(this->stored_.begin(), this->stored_.end());
	return max_num - min_num;
}

void	Span::addNumber(std::vector<int> vec)
{
	if (vec.size() + this->stored_.size() > this->N_)
		throw std::out_of_range("cat't addNumber because over N elements");
	for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++)
		this->stored_.push_back(*itr);
}
