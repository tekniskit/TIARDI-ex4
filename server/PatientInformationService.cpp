#include "PatientInformationService.h"
#include <fstream>

Patient PatientInformationService::getPatient(CprNumber cprNumber) {
	ifstream infile("patiens.csv");

	string line;
	while (getline(infile, line))
	{
		/*if (line.find() == string::npos) continue;

			cprNumber_ = cprNumber;*/
	}

	return Patient();
}