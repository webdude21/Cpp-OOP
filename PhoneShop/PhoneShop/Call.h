#ifndef CALL_H
#define CALL_H
#include <ctime>

class Call
{
public:
	Call(int callDuration);
	virtual ~Call();
	time_t GetCallStart();
	int GetCallDuration();
protected:
private:
	time_t callStart;
	int callDuration;
};

#endif // CALL_H
