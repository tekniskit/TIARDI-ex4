#include "PatientInformationService.h"
#include <fstream>

void Tokenize(const string& str, vector<string>& tokens, const string& delimiters = " ") {
	string::size_type lastPos = str.find_first_not_of(delimiters, 0);
	string::size_type pos = str.find_first_of(delimiters, lastPos);
	
	while (string::npos != pos || string::npos != lastPos)
	{
		tokens.push_back(str.substr(lastPos, pos - lastPos));
		lastPos = str.find_first_not_of(delimiters, pos);
		pos = str.find_first_of(delimiters, lastPos);
	}
}

Patient PatientInformationService::getPatient(CprNumber cprNumber) {
	ifstream infile("patients.txt");

	string line;
	while (getline(infile, line))
	{
		if (line.find(cprNumber.getCprNumber()) == string::npos) continue;

		vector<string> raw;

		Tokenize(line, raw, ";");

		CprNumber cpr(raw[0]);
		string name = raw[1];
		string address = raw[2];
		
		return Patient(cpr, name, address);
	}
}