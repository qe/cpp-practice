#include <iostream>

int main() {
    int numBeans;
    int numJars;
    int totalBeans;

    numBeans = 500;
    numJars = 3;

    std::cout << "Hello, World!" << std::endl;
    std::cout << numBeans << " beans in ";
    std::cout << numJars << " jars yields ";
    totalBeans = numBeans * numJars;
    std::cout << totalBeans << " total" << std::endl;
    return 0;
}
