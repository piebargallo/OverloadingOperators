/* Add a string conversion operator to your solution of exercise 15-2. The operator simply returns a string constructed
   from the first and last name of the person. */

import person;
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
	Person person{ "John", "Doe" };

	string str{ person };
	cout << str << endl;
}

