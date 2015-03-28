#include <iostream>
#include <Phone.h>
#include <SmartPhone.h>

using namespace std;

int main()
{
    SmartPhone* iPhone = new SmartPhone("Apple", "Iphone 6", 256, "IOS");
    cout<<iPhone->GetBrand()<<" " + iPhone->GetModel() + " "<<iPhone->GetColorDepth()<< + " " + iPhone->GetOperatingSystem();
}
