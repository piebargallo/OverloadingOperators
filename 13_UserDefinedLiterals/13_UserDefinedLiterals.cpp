#include <cstddef>
#include <complex>
#include <iostream>

// Cooked _i literal operator
std::complex<long double> operator"" _i(long double d)
{
	return std::complex<long double>{ 0, d };
}

// Raw _i literal operator
//complex<long double> operator"" _i(const char* p)
//{
//	// Implementation omitted; it requires parsing the C-style
//	// string and converting it to a complex number.
//}


// Cooked _s literal operator
std::string operator"" _s(const char* str, size_t len)
{
	return std::string(str, len);
}

int main()
{
	// Cooked _i literal operator
	std::complex<long double> c1{ 9.634_i };
	auto c2{ 1.23_i };         // c2 has as type complex<long double>

	// Cooked _s literal operator
	std::string str1{ "Hello World"_s };
	auto str2{ "Hello World"_s };   // str2 has as type string
	auto str3{ "Hello World" };     // str3 has as type const char*

	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;
	std::cout << str3 << std::endl;
}
