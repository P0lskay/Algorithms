#pragma once
#include <iostream>
class Sort
{
private:
	int size;
	int *array;

public:
	Sort(int s, int *arr) {
		size = s;
		array = arr;
	}

	void bubbleSort() {
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

	void getArray() {
		for (int i = 0; i < size; i++) {
			std::cout << array[i] << std::endl;
		}
	}

};

