#include "vector"
#include "SmartPhone.h"

SmartPhone::SmartPhone(std::string brand, std::string model, int colorDepth, std::string operatingSystem)
	:Phone(brand, model, colorDepth)
{
	this->callHistory = new std::vector<Call*>();
	this->SetOperatingSystem(operatingSystem);
}

void SmartPhone::Add(Call* call)
{
	this->callHistory->push_back(call);
}

std::string SmartPhone::GetOperatingSystem()
{
	return this->operatingSystem;
}

void SmartPhone::SetOperatingSystem(std::string val)
{
	this->operatingSystem = val;
}

std::vector<Call*>* SmartPhone::GetCallHistory()
{
	return this->callHistory;
}

std::string SmartPhone::PrintCallHistory()
{
	std::vector<Call*>* calls = this->GetCallHistory();
	std::string bufferString;
	std::vector<Call*>::iterator iter;

	for (auto call : *calls){
		bufferString = bufferString + "\nCall duration: " + std::to_string(call->GetCallDuration());
	}

	return bufferString;
}

std::string SmartPhone::ToString()
{
	return this->GetBrand() + " " + this->GetModel() + " " + this->GetOperatingSystem() + " ";
}

SmartPhone::~SmartPhone()
{
	delete &this->operatingSystem;
}
