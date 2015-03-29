#include "Phone.h"

Phone::Phone(std::string brand, std::string model, int colorDepth)
{
    this->SetBrand(brand);
    this->SetModel(model);
    this->SetColorDepth(colorDepth);
}

Phone::~Phone()
{
    delete &this->brand;
    delete &this->model;
    delete &this->colorDepth;
}
