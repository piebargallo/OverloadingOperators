export module source;

import <compare>;

export class Source
{
public:
	Source() = default;
	Source(double initialValue);

	void set(double value);
	inline double getValue() const { return m_value; }
	
	/* Operator <=>
	   Three-way comparison operator
	   Method recommended 
	   When to overload? Whenever you want to provide comparison support for
	   your class.
	   Sample prototypes:
	   auto operator<=>(const T&) const;*/
	[[nodiscard]] auto operator<=>(const Source&) const = default;

private:
	double m_value{ 0 };
};