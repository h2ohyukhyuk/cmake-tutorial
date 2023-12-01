#include <cmath>
#include <iostream>
#include <string>

#include "MathFunctions.h"
#include "TutorialConfig.h"

int main(int argc, char* argv[]){

    if (argc < 2) {
        std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }

    std::cout <<"argc: " << argc << std::endl;
    std::cout <<"argv[0]: " << argv[0] << std::endl;
    std::cout <<"argv[1]: " << argv[1] << std::endl;

    // convert input to double
    // TODO 4: Replace atof(argv[1]) with std::stod(argv[1])
    const double inputValue = atof(argv[1]);

    // calculate square root
    const double outputValue = mathfunctions::sqrt(inputValue);


    std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
    return 0;
}