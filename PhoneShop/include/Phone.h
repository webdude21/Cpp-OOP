#ifndef PHONE_H
#define PHONE_H
#include <string>

class Phone
{
    public:
        Phone(std::string brand, std::string model, int colorDepth);
        virtual ~Phone();
        std::string Getmodel() { return model; }
        void Setmodel(std::string val) { model = val; }
        int GetcolorDepth() { return colorDepth; }
        void SetcolorDepth(int val) { colorDepth = val; }
        std::string Getbrand() { return brand; }
        void Setbrand(std::string val) { brand = val; }
    protected:
    private:
        std::string model;
        int colorDepth;
        std::string brand;
};

#endif // PHONE_H
