#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include "TutorialConfig.h"

int main(int argc, char* argv[]){

    std::cout <<"argc: " << argc << std::endl;
    std::cout <<"argv[0]: " << argv[0] << std::endl;
    std::cout <<"argv[1]: " << argv[1] << std::endl;

    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
  }

    // convert input to double
    // TODO 4: Replace atof(argv[1]) with std::stod(argv[1])
    const double inputValue = atof(argv[1]);

    // calculate square root
    const double outputValue = sqrt(inputValue);
    std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
    return 0;
}