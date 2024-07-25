import source;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	Source s1{ 1.1 };
	Source s2{ 1.1 };
	// s1 += s2 is s1 = s1 + s2
	Source result{ s1 += s2 };
	// Output 2.2
	cout << result.getValue() << endl;
	return 0;
}