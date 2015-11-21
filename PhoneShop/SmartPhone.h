#ifndef SMARTPHONE_H

#include "Phone.h"
#include "Call.h"
#include <vector>

#define SMARTPHONE_H

class SmartPhone : public Phone {
public:
    SmartPhone(std::string brand, std::string model, int colorDepth, std::string operatingSystem);

    virtual ~SmartPhone();

    std::string getOperatingSystem();

    std::vector<Call *> *getCallHistory();

    void add(Call *call);

    void setOperatingSystem(std::string val);

    std::string printCallHistory();

    std::string toString();

protected:
private:
    std::string operatingSystem;
    std::vector<Call *> *callHistory;
};

#endif // SMARTPHONE_H
