#include "vector"
#include "SmartPhone.h"

using namespace std;

SmartPhone::SmartPhone(string brand, string model, int colorDepth, string operatingSystem)
        : Phone(brand, model, colorDepth) {
    this->callHistory = new vector<Call *>();
    this->SetOperatingSystem(operatingSystem);
}

void SmartPhone::Add(Call *call) {
    this->callHistory->push_back(call);
}

string SmartPhone::GetOperatingSystem() {
    return this->operatingSystem;
}

void SmartPhone::SetOperatingSystem(string val) {
    this->operatingSystem = val;
}

vector<Call *> *SmartPhone::GetCallHistory() {
    return this->callHistory;
}

string SmartPhone::PrintCallHistory() {
    vector<Call *> *calls = this->GetCallHistory();
    string bufferString;
    vector<Call *>::iterator iterator;

    for (auto call : *calls) {
        bufferString = bufferString + "\nCall duration: " + to_string(call->GetCallDuration());
    }

    return bufferString;
}

string SmartPhone::ToString() {
    return this->GetBrand() + " " + this->GetModel() + " " + this->GetOperatingSystem() + " ";
}

SmartPhone::~SmartPhone() {
    delete &this->operatingSystem;
}
