#include "SmartPhone.h"

    SmartPhone::SmartPhone(std::string brand, std::string model, int colorDepth, std::string operatingSystem): Phone(brand, model, colorDepth)
    {
        this->SetOperatingSystem(operatingSystem);
    }

SmartPhone::~SmartPhone()
{
    delete &this->operatingSystem;
}
