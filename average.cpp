#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Please input numbers to find average.\n";
        return 0;
    }

    std::vector<double> numbers;
    double sum = 0.0;

    for (int i = 1; i < argc; ++i) {
        double num = std::atof(argv[i]);
        numbers.push_back(num);
        sum += num;
    }

    double average = sum / numbers.size();

    std::cout << "---------------------------------\n";
    std::cout << "Average of " << numbers.size() << " numbers = ";
    
    if (average == static_cast<int>(average)) {
        std::cout << static_cast<int>(average) << "\n";
    } else {
        std::cout << std::fixed << std::setprecision(3) << average << "\n";
    }
    std::cout << "---------------------------------\n";

    return 0;
}

