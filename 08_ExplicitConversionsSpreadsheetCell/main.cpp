import spreadsheet_cell;
#include <iostream>

int main()
{
	SpreadsheetCell cell{ 6.6 };

	double d1{ cell + 3.3 };
	std::cout << d1 << std::endl;

	return 0;
}
