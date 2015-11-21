#include "vector"
#include "SmartPhone.h"

using namespace std;

SmartPhone::SmartPhone(string brand, string model, int colorDepth, string operatingSystem)
        : Phone(brand, model, colorDepth) {
    this->callHistory = new vector<Call *>();
    this->setOperatingSystem(operatingSystem);
}

void SmartPhone::add(Call *call) {
    this->callHistory->push_back(call);
}

string SmartPhone::getOperatingSystem() {
    return this->operatingSystem;
}

void SmartPhone::setOperatingSystem(string val) {
    this->operatingSystem = val;
}

vector<Call *> *SmartPhone::getCallHistory() {
    return this->callHistory;
}

string SmartPhone::printCallHistory() {
    vector<Call *> *calls = this->getCallHistory();
    string bufferString;
    vector<Call *>::iterator iterator;

    for (auto call : *calls) {
        bufferString = bufferString + "\nCall duration: " + to_string(call->getCallDuration());
    }

    return bufferString;
}

string SmartPhone::toString() {
    return this->getBrand() + " " + this->getModel() + " " + this->getOperatingSystem() + " ";
}

SmartPhone::~SmartPhone() {
    delete &this->operatingSystem;
}
