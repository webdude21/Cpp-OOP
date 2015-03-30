#ifndef SMARTPHONE_H
#include <Phone.h>
#include <Call.h>
#include <vector>
#define SMARTPHONE_H

class SmartPhone: public Phone
{
public:
    SmartPhone(std::string brand, std::string model, int colorDepth, std::string operatingSystem);
    virtual ~SmartPhone();
    std::string GetOperatingSystem();
    std::vector<Call*>* GetCallHistory();
    void Add(Call* call);
    void SetOperatingSystem(std::string val);
    std::string PrintCallHistory();
    std::string ToString();
protected:
private:
    std::string operatingSystem;
    std::vector<Call*>* callHistory;
};

#endif // SMARTPHONE_H
