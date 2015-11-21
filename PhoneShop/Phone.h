#ifndef PHONE_H
#define PHONE_H

#include <string>

using namespace std;

class Phone {
public:
    Phone(string brand, string model, int colorDepth);

    virtual ~Phone();

    string getModel();

    void setModel(string val);

    int getColorDepth();

    void setColorDepth(int val);

    string getBrand();

    void setBrand(string val);

protected:
private:
    string model;
    int colorDepth;
    string brand;
};

#endif
