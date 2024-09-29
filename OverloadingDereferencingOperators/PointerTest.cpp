import pointer;
#include <iostream>

using namespace std;

void testConst(const Pointer<int>& p)
{
	cout << *p;
	// *p = 7;
}

int main()
{
	Pointer<int> smartInt{ new int };
	// Dereference the smart pointer.
	*smartInt = 5; 
	cout << *smartInt << endl;
	return 0;
}