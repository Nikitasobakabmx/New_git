#include "stdafx.h"
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
		printf("%ib6 i\t", list[0]);
	}
	catch (std::out_of_range) {

	}
	std::cin >> out;
    return 0;
}

