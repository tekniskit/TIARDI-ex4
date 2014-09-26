#include "Patient.h"


Patient::Patient(CprNumber cprNumber, string name, string address)
{
	cprNumber_ = cprNumber;
	name_ = name;
	address_ = address;
}

ostream& operator<<(ostream& stream, const Patient& patient)
{
	stream << patient.name_ << "\t\t" << patient.address_;
	return stream;
}