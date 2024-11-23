#include <iostream>
#include "fmt/core.h"
#include "include/config.h"

int main()
{
    fmt::println("Hello, fmt");
    fmt::println("Current version: {}", PROJECT_VERSION);
    fmt::println("Current Project Name: {}", PROJECT_NAME);
#ifdef HAVE_FEATURE_X
    fmt::println("Feature Support: {}", HAVE_FEATURE_X);
#else
        fmt::println("Feature Not Supported");
#endif
    return 0;
}
