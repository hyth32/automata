#include <iostream>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage:" << argv[0] << "program input output";
        return 1;
    }

    std::string program = argv[1];
    std::string inputFile = argv[2];
    std::string outputFile = argv[3];

    std::cout << "Программа: " << program;
    std::cout << "Входной файл: " << inputFile;
    std::cout << "Выходной файл: " << outputFile;

    return 0;
}