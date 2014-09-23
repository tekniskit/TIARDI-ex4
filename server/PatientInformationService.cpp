#include "PatientInformationService.h"

Patient PatientService::getPatient(string cprNumber) {
	search(cprNumber);
	return Patient();
}

