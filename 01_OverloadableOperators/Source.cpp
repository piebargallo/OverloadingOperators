module source;

using namespace std;

Source::Source(double initialValue) : m_value{ initialValue } {}

void Source::set(double value) { m_value = value; }

Source& Source::operator+=(const Source& rhs)
{
	set(getValue() + rhs.getValue());
	return *this;
}

Source operator+(const Source& lhs, const Source& rhs)
{
	auto result{ lhs };  // Local copy
	result += rhs;       // Forward to +=()
	return result;
}