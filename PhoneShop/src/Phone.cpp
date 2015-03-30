#include "Phone.h"

Phone::Phone(std::string brand, std::string model, int colorDepth)
{
    this->SetBrand(brand);
    this->SetModel(model);
    this->SetColorDepth(colorDepth);
}

std::string Phone::GetModel()
{
    return this->model;
}
void Phone::SetModel(std::string val)
{
    this->model = val;
}
int Phone::GetColorDepth()
{
    return this->colorDepth;
}
void Phone::SetColorDepth(int val)
{
    this->colorDepth = val;
}
std::string Phone::GetBrand()
{
    return this->brand;
}
void Phone::SetBrand(std::string val)
{
    this->brand = val;
}

Phone::~Phone()
{
    delete &this->brand;
    delete &this->model;
    delete &this->colorDepth;
}
