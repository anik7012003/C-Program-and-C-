#include <iostream>
#include <stdexcept>

class Dog {
private:
    int excitementLevel;

public:
    Dog(int initialLevel = 50) : excitementLevel(initialLevel) {}

    void operator++() {
        if (excitementLevel >= 100) {
            throw std::runtime_error("Max is already too excited!");
        }
        excitementLevel++;
    }

    void operator--() {
        if (excitementLevel <= 0) {
            throw std::runtime_error("Max is already too calm!");
        }
        excitementLevel--;
    }

    int getExcitementLevel() const {
        return excitementLevel;
    }
};

int main() {
    Dog max;

    try {
        std::cout << "Max's initial excitement level: " << max.getExcitementLevel() << std::endl;

        ++max;
        std::cout << "Max's excitement level after ++: " << max.getExcitementLevel() << std::endl;

        --max;
        std::cout << "Max's excitement level after --: " << max.getExcitementLevel() << std::endl;

        for (int i = 0; i < 70; i++) {
            ++max; 
        }

        std::cout << "Max's final excitement level: " << max.getExcitementLevel() << std::endl;
    }
    catch (const std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
