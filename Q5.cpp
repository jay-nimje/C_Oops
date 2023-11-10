#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string playerName;

public:
    Cricketer(const std::string& name) : playerName(name) {}

    void displayPlayerName() {
        std::cout << "Player Name: " << playerName << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    Batsman(const std::string& name)
        : Cricketer(name), totalRuns(0), averageRuns(0.0), bestPerformance(0) {}

    void inputData() {
        std::cout << "Enter total runs scored by " << playerName << ": ";
        std::cin >> totalRuns;
        std::cout << "Enter best performance by " << playerName << ": ";
        std::cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        if (totalRuns > 0) {
            averageRuns = static_cast<double>(totalRuns) / 5.0; // Assuming 5 matches for average
        } else {
            averageRuns = 0.0;
        }
    }

    void displayData() {
        displayPlayerName();
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    std::string playerName;
    
    std::cout << "Enter the player's name: ";
    std::cin >> playerName;

    Batsman batsman(playerName);

    batsman.inputData();
    batsman.calculateAverageRuns();
    batsman.displayData();

    return 0;
}

