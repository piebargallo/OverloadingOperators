export module source;

export class Source
{
public:
	Source() = default;
	Source(double initialValue);

	void set(double value);
	inline double getValue() const { return m_value; }

	/* Operator+=
	   Shorthand aritmetic operator assignments
	   Method recommended
	   When to overloaded? Whenever you overload the binary arithmetic operators 
	   and your class is not designed to be immutable.
	   Sample prototypes:
	   T& operator*=(const T&); */
	Source& operator+=(const Source& rhs);

private:
	double m_value{ 0 };
};

/* Operator+
   Binary arithmetic
   Global function recommended
   When to overload? Whenever you want to provide these operations for you class.
   Sample prototype, T operator+(const T&, const T&); */
export Source operator+(const Source& lhs, const Source& rhs);