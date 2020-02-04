#include <iostream>
#include "foo.h"


int main(int, char**) {
    std::cout << "Hello, world!\n";
    Foo foo = Foo ("julius");
    auto str = foo.GetValue().c_str();
    std::cout << str;
    std::cout << "\n";
    std::string stri = foo.TestPlay();
    std::cout << foo.TestPlay().c_str();
}
