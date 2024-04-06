/* Implement an AssociativeArray class. The class should store a number of elements in a vector. where each element
   consists of a key and a value. The key is always a string, while the type of the value can be specified using a 
   template type parameter. Provide overloaded subscripting operators so that elements can be retrieved based on their
   ket. Test your implementation in your main() function. Note: this exercise is just to practice implementing 
   subscripting operators using non-integral indices. In practice, you should just use the std::map class template
   provided by the Standard Library and discussed in Chapter 18 for such an associative array. */

import associative_array;
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	AssociativeArray<int> myArray;
	myArray["Key 1"] = 11;
	myArray["Key 2"] = 22;
	myArray["Key 3"] = 33;

	try {
		cout << myArray["Key 1"] << endl;
		cout << myArray["Key 2"] << endl;

		// Test const operator[]
		const AssociativeArray<int>& c{ myArray };
		cout << c["Key 3"] << endl;
		cout << c["Key 4"] << endl;
	}
	catch (const std::invalid_argument& ex) {
		cout << "Caught exception: " << ex.what() << endl;
	}
}
