#include <iostream>
#include "Phone.h"
#include "SmartPhone.h"

using namespace std;

int main() {
    SmartPhone *iPhone = new SmartPhone("Apple", "Iphone 6", 256, "IOS");
    iPhone->add(new Call(10));
    iPhone->add(new Call(20));
    puts(iPhone->toString().c_str());
    puts(iPhone->printCallHistory().c_str());
}
