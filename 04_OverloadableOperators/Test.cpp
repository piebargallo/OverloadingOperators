import source;

#include <iostream>
#include <format>
using std::cout;
using std::endl;
using std::format;

int main()
{
	try {
		Source s1{ 4.1 };
		Source s2{ 0 };
		Source result{ s1 / s2 };
		cout << result.getValue() << endl;
	}
	catch (const std::invalid_argument& e) {
		cout << format("Exception caught: {}", e.what()) << endl;
	}
	return 0;
}