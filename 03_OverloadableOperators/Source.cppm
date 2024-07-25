export module source;

export class Source
{
public:
	Source() = default;
	Source(double initialValue);

	void set(double value);
	inline double getValue() const { return m_value; }

	Source& operator+=(const Source& rhs);

private:
	double m_value{ 0 };
};

export Source operator+(const Source& lhs, const Source& rhs);