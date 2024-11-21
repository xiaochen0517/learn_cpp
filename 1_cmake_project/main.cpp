#include "iostream"
#include "thread"

void hello() {
    std::cout << "Hello World!" << std::endl;
}

int main() {
    std::thread t1(hello);
    t1.join();
    std::cout << "" << std::endl;
    return 0;
}
