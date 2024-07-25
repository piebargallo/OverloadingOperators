import source;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	Source s1{ 4.4 };
	Source s2{ 4.4 };
	Source result{ s1 + s2 };
	cout << result.getValue() << endl;
	return 0;
}