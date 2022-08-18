#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int		main(void)
{
	std::vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	std::vector<int>::iterator it = easyfind(v, 2);
	if (it == v.end())
		std::cout << "not found." << std::endl;
	else
		std::cout << *it << std::endl;

	std::list<int> li;
	li.push_back(0);
	li.push_back(1);
	li.push_back(2);
	std::list<int>::iterator itr = easyfind(li, 3);
	if (itr == li.end())
		std::cout << "not found." << std::endl;
	else
		std::cout << *itr << std::endl;

	return 0;
}
