module spreadsheet_cell;

SpreadsheetCell::SpreadsheetCell(double initialValue)
	: m_value{ initialValue }
{
}

SpreadsheetCell::SpreadsheetCell(std::string_view initialValue)
	: m_value{ stringToDouble(initialValue) }
{
}

void SpreadsheetCell::set(double value)
{
	m_value = value;
}

void SpreadsheetCell::set(std::string_view value)
{
	m_value = stringToDouble(value);
}

std::string SpreadsheetCell::doubleToString(double value)
{
	return std::to_string(value);
}

double SpreadsheetCell::stringToDouble(std::string_view value)
{
	double number{ 0 };
	std::from_chars(value.data(), value.data() + value.size(), number);
	return number;
}

SpreadsheetCell operator+(const SpreadsheetCell& lhs, const SpreadsheetCell& rhs)
{
	auto result{ lhs };  // Local copy
	result += rhs;       // Forward to +=()
	return result;
}

SpreadsheetCell operator-(const SpreadsheetCell& lhs, const SpreadsheetCell& rhs)
{
	auto result{ lhs };  // Local copy
	result -= rhs;       // Forward to -=()
	return result;
}

SpreadsheetCell operator*(const SpreadsheetCell& lhs, const SpreadsheetCell& rhs)
{
	auto result{ lhs };  // Local copy
	result *= rhs;       // Forward to *=()
	return result;
}

SpreadsheetCell operator/(const SpreadsheetCell& lhs, const SpreadsheetCell& rhs)
{
	auto result{ lhs };  // Local copy
	result /= rhs;       // Forward to /=()
	return result;
}

SpreadsheetCell& SpreadsheetCell::operator+=(const SpreadsheetCell& rhs)
{
	set(getValue() + rhs.getValue());
	return *this;
}

SpreadsheetCell& SpreadsheetCell::operator-=(const SpreadsheetCell& rhs)
{
	set(getValue() - rhs.getValue());
	return *this;
}

SpreadsheetCell& SpreadsheetCell::operator*=(const SpreadsheetCell& rhs)
{
	set(getValue() * rhs.getValue());
	return *this;
}

SpreadsheetCell& SpreadsheetCell::operator/=(const SpreadsheetCell& rhs)
{
	if (rhs.getValue() == 0) {
		throw std::invalid_argument{ "Divide by zero." };
	}
	set(getValue() / rhs.getValue());
	return *this;
}

SpreadsheetCell SpreadsheetCell::operator-() const
{
	return SpreadsheetCell{ -getValue() };
}

SpreadsheetCell& SpreadsheetCell::operator++()
{
	set(getValue() + 1);
	return *this;
}

SpreadsheetCell SpreadsheetCell::operator++(int)
{
	auto oldCell{ *this }; // Save current value
	++(*this);           // Increment using prefix ++
	return oldCell;      // Return the old value
}

SpreadsheetCell& SpreadsheetCell::operator--()
{
	set(getValue() - 1);
	return *this;
}

SpreadsheetCell SpreadsheetCell::operator--(int)
{
	auto oldCell{ *this }; // Save current value
	--(*this);           // Decrement using prefix --
	return oldCell;      // Return the old value
}

SpreadsheetCell::operator std::string() const
{
	return doubleToString(getValue());
}
