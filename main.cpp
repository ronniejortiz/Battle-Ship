#include <iostream>

// Create the grid with ships
bool ships[5][5] = {
  {0, 1, 0, 0, 1},
  {0, 0, 0, 0, 0},
  {1, 0, 1, 0, 0},
  {0, 0, 0, 0, 0},
  {0, 1, 0, 0, 0}
};

// Track how many hits the player has
int hits = 0;
int numberOfTurns = 0;

int main() {
// Allow the player to guess a coordinate
  while (hits < 5) {
    int row, column;
    // Ask for coordinates
    std::cout << "Enter a coordinates.\n";

    // Ask for row
    std::cout << "Row (Pick 1-5): ";
    std::cin >> row;
    row--;

    // Ask for column
    std::cout << "Column (Pick 1-5): ";
    std::cin >> column;
    column--;

    // Check if the coordinates are valid
    if (ships[row][column] == 1) {
      // If ship is hit
      hits++;
      std::cout << "\nShip Hit! " << (5 - hits) << " ships left.\n\n";
      ships[row][column] = 0;
    } else {
      // If ship is not hit, print miss
      std::cout << "\nMiss!\n\n";
    }
    numberOfTurns++;
  }
  // Print game over
  std::cout << "Victory!!\n";
  std::cout << "You sunk all the ships in " << numberOfTurns << " turns.\n";
  return 0;
};

