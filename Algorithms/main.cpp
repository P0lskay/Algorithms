#include "Sort.h"
#include <iostream>

int main() {

	int *arr = new int[3];

	arr[0] = 3;
	arr[1] = 2;
	arr[2] = 1;
	Sort sort(3, arr);
	sort.bubbleSort();
	sort.getArray();

	return 0;
}