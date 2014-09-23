#pragma once

#include <string>
#include <vector>
#include "Patient.h"

using namespace std;

class PatientService
{
public:
	Patient getPatient(string cprNumber);

private:
	vector<Patient> search(string cprNumber);
};