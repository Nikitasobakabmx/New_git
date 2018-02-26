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
		list.Erase(0);
		printf("%i \t", list[0]);
	}
	catch (std::out_of_range) {

	}
	LinkedList<int> a(list);
	a[0] = 10;
	printf("\n%i\t", a[0]);
	printf("\n%i\t", list[0]);
	std::cin >> out;
	return 0;
}
