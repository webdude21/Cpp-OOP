#ifndef PHONE_H
#define PHONE_H
#include <string>

class Phone
{
public:
    Phone(std::string brand, std::string model, int colorDepth);
    virtual ~Phone();
    std::string GetModel()
    {
        return model;
    }
    void SetModel(std::string val)
    {
        model = val;
    }
    int GetColorDepth()
    {
        return colorDepth;
    }
    void SetColorDepth(int val)
    {
        colorDepth = val;
    }
    std::string GetBrand()
    {
        return brand;
    }
    void SetBrand(std::string val)
    {
        brand = val;
    }
protected:
private:
    std::string model;
    int colorDepth;
    std::string brand;
};

#endif
