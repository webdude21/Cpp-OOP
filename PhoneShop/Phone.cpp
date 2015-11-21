#include "Phone.h"

using namespace std;

Phone::Phone(string brand, string model, int colorDepth) {
    this->setBrand(brand);
    this->setModel(model);
    this->setColorDepth(colorDepth);
}

string Phone::getModel() {
    return this->model;
}

void Phone::setModel(string val) {
    this->model = val;
}

int Phone::getColorDepth() {
    return this->colorDepth;
}

void Phone::setColorDepth(int val) {
    this->colorDepth = val;
}

string Phone::getBrand() {
    return this->brand;
}

void Phone::setBrand(string val) {
    this->brand = val;
}

Phone::~Phone() {
    delete &this->brand;
    delete &this->model;
    delete &this->colorDepth;
}
