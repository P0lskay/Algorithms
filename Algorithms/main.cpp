#include "Sort.h"
#include <iostream>

int main() 
{

	int *arr = new int[5];

	arr[0] = 3;
	arr[1] = 2;
	arr[2] = 1;
	arr[3] = 5;
	arr[4] = 4;
	Sort sort(5, arr);
	sort.shaker_sort();
	sort.getArray();

	return 0;
}