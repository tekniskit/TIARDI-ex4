// server.cpp : Defines the entry point for the console application.
//

#include <iostream>

#include "stdafx.h"
#include "CprNumber.h"
#include "PatientInformationService.h"

int _tmain(int argc, _TCHAR* argv[])
{
	PatientInformationService service;

	CprNumber cpr = CprNumber("123456-7890");
	cout << service.getPatient(cpr) << endl;

	cpr.setCprNumber("234567-8901");
	cout << service.getPatient(cpr) << endl;

	cpr.setCprNumber("345678-9012");
	cout << service.getPatient(cpr) << endl;

	cpr.setCprNumber("456789-0123");
	cout << service.getPatient(cpr) << endl;
	
	getchar();

	return 0;
}