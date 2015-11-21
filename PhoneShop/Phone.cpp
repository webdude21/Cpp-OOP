#include "Phone.h"

using namespace std;

Phone::Phone(string brand, string model, int colorDepth) {
    this->SetBrand(brand);
    this->SetModel(model);
    this->SetColorDepth(colorDepth);
}

string Phone::GetModel() {
    return this->model;
}

void Phone::SetModel(string val) {
    this->model = val;
}

int Phone::GetColorDepth() {
    return this->colorDepth;
}

void Phone::SetColorDepth(int val) {
    this->colorDepth = val;
}

string Phone::GetBrand() {
    return this->brand;
}

void Phone::SetBrand(string val) {
    this->brand = val;
}

Phone::~Phone() {
    delete &this->brand;
    delete &this->model;
    delete &this->colorDepth;
}
