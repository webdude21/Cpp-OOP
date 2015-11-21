#ifndef PHONE_H
#define PHONE_H

#include <string>

using namespace std;

class Phone {
public:
    Phone(string brand, string model, int colorDepth);

    virtual ~Phone();

    string GetModel();

    void SetModel(string val);

    int GetColorDepth();

    void SetColorDepth(int val);

    string GetBrand();

    void SetBrand(string val);

protected:
private:
    string model;
    int colorDepth;
    string brand;
};

#endif
