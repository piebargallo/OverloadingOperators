module source;

using namespace std;

Source::Source(double initialValue) : m_value{ initialValue } {}

void Source::set(double value) { m_value = value; }