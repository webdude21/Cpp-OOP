#ifndef CALL_H
#define CALL_H

#include <ctime>

class Call {
public:
    Call(int callDuration);

    virtual ~Call();

    time_t getCallStart();

    int getCallDuration();

protected:
private:
    time_t callStart;
    int callDuration;
};

#endif // CALL_H
