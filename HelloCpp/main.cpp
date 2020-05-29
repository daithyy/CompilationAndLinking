#include <iostream>
#include <cassert>

#include "foo.h"

#if _DEBUG
void foo() {}
#endif

#define MUL(a,b) a*b

int main() 
{
	int x = 1;
	int result = add1(x);

	assert(MUL(2, 2+2) == 8);

	foo();

	std::cout << "Hello, C++" << std::endl;
	getchar();

	return 0;
}
