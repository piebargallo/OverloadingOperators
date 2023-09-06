import spreadsheet_cell;
#include <iostream>

int main()
{
	SpreadsheetCell cell{ 1.23 };

	double d1{ cell };
	std::cout << d1 << std::endl;

	std::string str1 = cell;
	std::cout << str1 << std::endl;

	std::string str2{ static_cast<std::string>(cell) };
	std::cout << str2 << std::endl;

	return 0;
}