#include <iostream>
#include "Maze.h"

int main() {

    std::cout << "============================\n";
    std::cout << "       PATHFORGE ENGINE     \n";
    std::cout << "============================\n\n";

    // Create maze with 5 rows and 5 columns
    Maze maze(5, 5);

    // Define starting point
    maze.setCell(0, 0, Cell::Start);

    // Define ending point
    maze.setCell(4, 4, Cell::End);

    // Create some walls
    maze.setCell(1, 0, Cell::Wall);
    maze.setCell(1, 1, Cell::Wall);
    maze.setCell(3, 1, Cell::Wall);
    maze.setCell(3, 2, Cell::Wall);
    maze.setCell(3, 3, Cell::Wall);

    std::cout << "Maze Visualization:\n\n";

    maze.display();

    std::cout << "\nMaze Dimensions: "
              << maze.getRows() << " x "
              << maze.getCols() << '\n';

    return 0;
}
