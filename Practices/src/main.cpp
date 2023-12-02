#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "Hello" << std::endl;

    #if defined(MY_MACRO)
    std::cout << "MY_MACRO is defined" << std::endl;
    #endif
    return 0;
}