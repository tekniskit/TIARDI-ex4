// client.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>

#include "stdafx.h"
#include "CprNumber.h"
#include "PatientService.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	PatientService patientService;
	
	for (;;) {
		cout << "Enter CPR-number: ";

		string input;
		cin >> input;

		try {
			CprNumber cpr(input);
			cout << patientService.getPatient(cpr) << endl;
		}
		catch (exception e) {
			cout << e.what() << endl;
		}
	}
		
	return 0;
}