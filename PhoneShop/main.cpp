#include <iostream>
#include <Phone.h>

using namespace std;

int main()
{
    Phone* iPhone = new Phone("Apple", "Iphone 6", 256);
    cout<<iPhone->Getbrand()<<" " + iPhone->Getmodel() + " "<<iPhone->GetcolorDepth();
}
