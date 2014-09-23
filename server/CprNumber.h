#pragma once

#include <string>
#include <regex>

using namespace std;

class CprNumber
{
public:
	CprNumber(string cprNumber);
	void setCprNumber(string cprNumber);
	string getCprNumber();

private:
	string cprNumber_;
	regex cprNumberRegex_;
};

