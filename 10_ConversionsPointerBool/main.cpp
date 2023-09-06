import pointer;
import spreadsheet_cell;
#include <iostream>

void process(Pointer<SpreadsheetCell>& p)
{
	// if (p != nullptr) { cout << "not nullptr" << endl; }	// Error
	if (p != NULL) { std::cout << "not NULL" << std::endl; }
	if (p) { std::cout << "not nullptr" << std::endl; }
	if (!p) { std::cout << "nullptr" << std::endl; }
}

int main()
{
	Pointer<SpreadsheetCell> smartCell{ nullptr };
	process(smartCell);
	std::cout << std::endl;

	Pointer<SpreadsheetCell> anotherSmartCell{ new SpreadsheetCell{ 5.0 } };
	process(anotherSmartCell);

	int i{ anotherSmartCell }; // Converts Pointer to bool to int.
	std::cout << i << std::endl;

	return 0;
}
