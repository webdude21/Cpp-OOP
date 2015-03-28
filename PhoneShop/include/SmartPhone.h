#ifndef SMARTPHONE_H
#include <Phone.h>
#define SMARTPHONE_H


class SmartPhone: public Phone
{
    public:
        SmartPhone(std::string brand, std::string model, int colorDepth, std::string operatingSystem);
        virtual ~SmartPhone();
        std::string GetOperatingSystem() { return operatingSystem; }
        void SetOperatingSystem(std::string val) { operatingSystem = val; }
    protected:
    private:
        std::string operatingSystem;
};

#endif // SMARTPHONE_H
