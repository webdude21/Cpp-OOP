#include <iostream>
#include <Phone.h>
#include <SmartPhone.h>
#include <Call.h>

using namespace std;

int main()
{
    SmartPhone* iPhone = new SmartPhone("Apple", "Iphone 6", 256, "IOS");
    iPhone->Add(new Call(10));
    cout<<iPhone->ToString();
}
