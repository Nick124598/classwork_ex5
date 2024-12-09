#include <iostream>

int main()
{
	int size = 0;

	int t1 = 0, t2 = 1;

	std::cout << "what is the size of the series? ";
	std::cin >> size;
	size++; 
	while (--size >= 0) //size cannot go under 0, and because in the before-last iteration it went under 0, the while didnt recognize it as a stop-point. so I added to size 1 and removed 1 before the check of the condition
	{
		std::cout << t1 << ", ";

		int nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}

	return 0;
}