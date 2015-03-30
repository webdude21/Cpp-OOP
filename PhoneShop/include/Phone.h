#ifndef PHONE_H
#define PHONE_H
#include <string>

class Phone
{
public:
    Phone(std::string brand, std::string model, int colorDepth);
    virtual ~Phone();
    std::string GetModel();
    void SetModel(std::string val);
    int GetColorDepth();
    void SetColorDepth(int val);
    std::string GetBrand();
    void SetBrand(std::string val);
protected:
private:
    std::string model;
    int colorDepth;
    std::string brand;
};

#endif
