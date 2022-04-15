#pragma once
#ifndef ALGORITHM_H_
#define ALGORITHM_H_
#include <iostream>
#include <iterator>

using namespace std;

class Algorithm
{
public:
	template<typename Iterator, typename Item>
	Iterator binary_search(Item searcher, Iterator begin_it, Iterator end_it)
	{
		auto not_result = end_it;
		while (distance(begin_it, end_it) > 1)
		{
			auto mid = next(begin_it, static_cast<int>(distance(begin_it, end_it)/2));
			if (*mid == searcher)
				return mid;
			if (*mid > searcher)
				end_it = mid;
			if (*mid < searcher)
				begin_it = next(mid, 1);
		}
		return not_result;
	}
};

#endif

