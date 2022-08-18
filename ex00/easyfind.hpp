#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &container, const int num)
{
	return std::find(container.begin(), container.end(), num);
}

#endif /* EASYFIND_HPP */
