import source;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	Source s1{ 4.4 };
	Source s2{ 4.4 };
	Source compare{ 4.4 < 4.4 };
	cout << compare.getValue() << endl;
	return 0;
}