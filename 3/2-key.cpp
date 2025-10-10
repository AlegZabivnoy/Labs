#include <iostream>
#include <string>
#include <random>

std::string generateKey (int length, const std::string& characters) {
    std::random_device rd;
    std::mt19937 gen (rd()); 
    std::uniform_int_distribution<> dis(0, characters.size() - 1);
    std::string key;
    for (int i = 0; i < length; ++i) {
        key += characters[dis(gen)];
}
    return key;
}

int main () {
    int length = 16;
    std::string characters = "abcdefghijklmnopqrstuvwxyz0123456789";
    std::string key = generateKey(length, characters);
    std::cout << "Generated key: " << key << std::endl;
    
}