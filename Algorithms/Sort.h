#pragma once
#ifndef SORT_H_ 
#define SORT_H_
#include <iostream>
class Sort
{
private:
	int size;
	int *array;

public:
	Sort(int s, int* arr);

	void bubble_sort();

	void shaker_sort();

	void getArray();

};

#endif