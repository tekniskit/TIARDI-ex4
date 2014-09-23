#include "CprNumber.h"

CprNumber::CprNumber(string cprNumber)
{
	cprNumberRegex_ = regex("^[0-9]{6}-[0-9]{4}");

	setCprNumber(cprNumber);
}

void CprNumber::setCprNumber(string cprNumber) {
	if (regex_match(cprNumber, cprNumberRegex_))
		cprNumber_ = cprNumber;
}

string CprNumber::getCprNumber() {
	return cprNumber_;
}