/* Start from your solution of exercise 15-3, and add a user defined literal operator _p that constructs a Person from
   a string literal. it should support spaces in last names, but not in first names. For example, "Peter Van Weert" _p
   should result in a Person object with first name and last name Van Weert. */

import person;
#include <iostream>
#include <format>
using std::cout;
using std::format;
using std::endl;

int main()
{
	auto peter{ "Peter Van Weert"_p };

	cout << format("First name: {}", peter.getFirstName()) << endl;
	cout << format("Last name: {}", peter.getLastName()) << endl;
	cout << format("Initials: {}", peter.getInitials()) << endl;
}