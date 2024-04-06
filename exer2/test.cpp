/* Take your person class implementation from exercise 13-2, and add implementations of the insertion and extraction
   operators to it. Make sure that your extraction operator can read back what tour insertion operator writes out. */

import person;
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	Person person{ "John", "Doe" };

	// Write person to standard output console.
	cout << person << endl;

	// Write person to a string stream.
	ostringstream output;
	output << person;
	// Verify the contents of the string stream.
	cout << output.str() << endl;

	// Read the person back from the string stream.
	istringstream input{ output.str() };
	Person person2;
	input >> person2;

	// Verify the read-back person.
	cout << person2 << endl;
}
