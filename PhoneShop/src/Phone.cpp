#include "Phone.h"

Phone::Phone(std::string brand, std::string model, int colorDepth)
{
    //ctor
    this->Setbrand(brand);
    this->Setmodel(model);
    this->SetcolorDepth(colorDepth);
}

Phone::~Phone()
{
    delete &this->brand;
    delete &this->model;
    delete &this->colorDepth;
}
