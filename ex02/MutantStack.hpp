#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() {}
	~MutantStack() {}
	MutantStack(MutantStack const &other) : std::stack<T>(other)
	{
		*this = other;
	}
	MutantStack &operator=(MutantStack const &other)
	{
		if (this != &other)
		{
			std::stack<T>::operator=(other);
		}
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin()
	{
		return this->c.begin();
	}
	iterator	end()
	{
		return this->c.end();
	}
};

#endif /* MUTANTSTACK_HPP */
