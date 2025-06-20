#include <iostream>

class Superhero {
private:
    int strength;
    int speed;
    int intelligence;

public:
    Superhero(int strength, int speed, int intelligence)
        : strength(strength), speed(speed), intelligence(intelligence) {}

    int getStrength() const { return strength; }
    int getSpeed() const { return speed; }
    int getIntelligence() const { return intelligence; }

    int getTotalAttributes() const { return strength + speed + intelligence; }

    bool operator>(const Superhero& other) const {
        return this->getTotalAttributes() > other.getTotalAttributes();
    }

    bool operator<(const Superhero& other) const {
        return this->getTotalAttributes() < other.getTotalAttributes();
    }

    bool operator==(const Superhero& other) const {
        return this->getTotalAttributes() == other.getTotalAttributes();
    }
};

int main() {
    Superhero hero1(83, 87, 90);
    Superhero hero2(90, 85, 85);

    std::cout << "Superhero 1 - Strength: " << hero1.getStrength() << ", Speed: " << hero1.getSpeed()
              << ", Intelligence: " << hero1.getIntelligence() << std::endl;
    std::cout << "Superhero 2 - Strength: " << hero2.getStrength() << ", Speed: " << hero2.getSpeed()
              << ", Intelligence: " << hero2.getIntelligence() << std::endl;

    if (hero1 > hero2) {
        std::cout << "Superhero 1 wins the battle!" << std::endl;
    } else if (hero1 < hero2) {
        std::cout << "Superhero 2 wins the battle!" << std::endl;
    } else {
        std::cout << "It's a tie! Both superheroes have the same combined attributes." << std::endl;
    }

    return 0;
}
