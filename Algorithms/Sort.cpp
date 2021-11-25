#include "Sort.h"

Sort::Sort(int s, int* arr) 
{
	size = s;
	array = arr;
}

void Sort::bubble_sort() 
{
	if (array) {
		for (int i = 1; i < size; i++) {
			for (int j = 0; j < size - i; j++) {
				if (array[j] > array[j + 1]) {
					int t = array[j];
					array[j] = array[j + 1];
					array[j + 1] = t;
				}
			}
		}
	}
	else
		std::cout << "Определите массив" << std::endl;
}

void Sort::shaker_sort()
{
	bool continue_sort = true;
	int begin = -1;
	int end = size;
	
	while (continue_sort)
	{
		continue_sort = false;
		begin++;
		for (int i = begin; i < end-1; i++)
		{
			if (this->array[i] > this->array[i + 1])
			{
				std::swap(this->array[i], this->array[i + 1]);
				continue_sort = true;
			}
		}
		if (!continue_sort)
			break;
		end--;
		for (int i = end; i > begin; i--)
		{
			if (this->array[i] < this->array[i - 1])
			{
				std::swap(this->array[i], this->array[i - 1]);
				continue_sort = true;
			}
		}
	}
}


void Sort::getArray() 
{
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << std::endl;
	}
}
