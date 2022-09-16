#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {

    std::fstream file;
    file.open(argv[1]);
    
    if(argc > 2 || argc < 2) {
        std::cout << "Invalid arguments!" << std::endl;
        return 0;

    } else {
        if(file.is_open()) {
            std::cout << "File exists!" << std::endl;
            return 1;
        } else {
            std::cout << "File doesnt exist or is unreadable!" << std::endl;
            return 0;
        }
    }

}
