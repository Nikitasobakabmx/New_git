#include <iostream>
#include "LinkedList.h"


int main()
{
	int out = 14;
	LinkedList<int> list(out);
	try {
		for (int i = 0; i < 10; i++) {
			list[i] = i;
			printf("%i \t", list[i]);
		}
		std::cout << std::endl;
		LinkedList<int> a(list);
		for (int i = 0; i < 10; i++) {
			printf("%i \t", list[i]);
		}
		std::cout << std::endl;
		a[3] = 6;
		printf("%i \t", list[3]);
		std::cout << "Size is " << a.GetSize() << std::endl;
		list[0] = 3;
	}
	catch (std::out_of_range) {

	}
	catch (std::invalid_argument) {

	}
	std::cin >> out;

	return 0;
}
