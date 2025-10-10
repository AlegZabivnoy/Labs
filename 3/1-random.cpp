#include <iostream>
#include <random>

int random (int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

int main() {
    int min = 0;
    int max = 100;
    std::cout << "Random number between " << min << " and " << max << ": " << random(min, max) << std::endl;
    return 0;
}