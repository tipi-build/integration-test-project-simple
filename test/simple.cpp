#include "integration_test_project_simple/simple.hpp"
#include <iostream>

int main() {
    std::cout << "Hello world from tipi - this is integration-test-project-simple/test/simple.cpp::main()" << std::endl;
    std::cout << "Calling project_simple::library_call() => " << tipi::integration_tests::project_simple::library_call() << std::endl;
    return 0;
}