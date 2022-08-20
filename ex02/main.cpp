#include "MutantStack.hpp"
#include <list>

void	list_test(void)
{
	std::cout << "\n---- compare MutantStack and std::list  ----" << std::endl;
	MutantStack<int>	mu;
	std::list<int>		li;
	for (size_t i = 0; i < 10; i++)
		mu.push(i);
	for (size_t i = 0; i < 10; i++)
		li.push_back(i);
	MutantStack<int>::iterator	mit = mu.begin();
	std::list<int>::iterator	lit = li.begin();
	mit++;
	lit++;
	mit--;
	lit--;
	MutantStack<int>::iterator	m_end_it = mu.end();
	std::list<int>::iterator	l_end_it = li.end();
	std::cout << "MutantStack" << std::endl;
	while (mit != m_end_it)
	{
		std::cout << *mit << " ";
		mit++;
	}
	std::cout << "\nstd::list" << std::endl;
	while (lit != l_end_it)
	{
		std::cout << *lit << " ";
		lit++;
	}
	std::cout << std::endl;
}

int	main()
{
	std::cout << "---- subject tests ----" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	list_test();
	return 0;
}
