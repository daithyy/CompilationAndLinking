#include <iostream>
#include <cassert>

#include "../StaticLib/foo.h"

#include "foo.h"

using namespace std;

int main() 
{

	cout << "2+3 = " << add(2, 3) << endl;

	cout << "Hello, C++" << endl;
	getchar();

	return 0;
}
