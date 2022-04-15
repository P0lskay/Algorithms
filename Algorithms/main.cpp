#include "Algorithm.h"
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	vector<int> vec = { 1, 2, 3, 4, 5 };

	Algorithm al;

	cout << *(al.binary_search(2, vec.begin(), vec.end()));

	return 0;
}