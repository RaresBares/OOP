#include <iostream>
#include "Enemy.h"

int main() {
    Enemy enemy{4,5};
    std::cout << enemy.getInfo() << std::endl;
    return 0;
}
