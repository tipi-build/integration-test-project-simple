#include <string>

namespace tipi::integration_tests::project_simple {

    using namespace std::string_literals;

    inline std::string library_call() {
        return "tipi-build/integration_test_project_simple@main::library_call()"s; 
    }
}