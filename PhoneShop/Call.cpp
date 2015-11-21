#include "Call.h"

Call::Call(int callDuration) {
    this->callStart = time_t(0);
    this->callDuration = callDuration;
}

int Call::getCallDuration() {
    return this->callDuration;
}

time_t Call::getCallStart() {
    return this->callStart;
}

Call::~Call() {
    delete &this->callStart;
    delete &this->callDuration;
}
