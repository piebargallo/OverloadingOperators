import pointer;
import spreadsheet_cell;
#include <iostream>

void testConst(const Pointer<int>& p)
{
	std::cout << *p;
	// *p = 7;
}

void TestConstTwo(const Pointer<SpreadsheetCell>& /*p*/)
{
	// p->set(5);
}

int main()
{
	Pointer<int> smartInt{ new int };
	*smartInt = 5; // Dereference the smart pointer.
	std::cout << *smartInt << std::endl;

	Pointer<SpreadsheetCell> smartCell{ new SpreadsheetCell };
	smartCell->set(5); // Dereference and member select the set() method.
	std::cout << smartCell->getValue() << std::endl;

	return 0;
}
