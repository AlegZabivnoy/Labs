#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main () {
    std::string ip = "127.0.0.1";
    std::stringstream ss(ip);
    std::string segment;
    std::vector<int> bytes;

    while (std::getline(ss, segment, '.')) {
        bytes.push_back(std::stoi(segment));
    }

    int result = (bytes[0] << 24) | (bytes[1] << 16) | (bytes[2] << 8) | bytes[3];
    std::cout << "IP Address: " << ip << std::endl;
    std::cout << "Result: " << result << std::endl;
    return 0;
}


