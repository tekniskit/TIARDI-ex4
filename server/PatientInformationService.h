#pragma once

#include "Patient.h"
#include "CprNumber.h"

using namespace std;

class PatientInformationService
{
public:
	Patient getPatient(CprNumber cprNumber);
};