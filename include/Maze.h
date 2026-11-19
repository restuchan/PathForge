#ifndef PATHFORGE_MAZE_H
#define PATHFORGE_MAZE_H

#include <vector>
#include <cstddef>

enum class Cell {
    Empty,
    Wall,
    Start,
    End
};

class Maze {
private:
    std::size_t rows;
    std::size_t cols;

    
    std::vector<std::vector<Cell>> grid;


public:
    Maze(std::size_t rows, std::size_t cols);

    std::size_t getRows() const;
    std::size_t getCols() const;

    void setCell(std::size_t row, std::size_t col, Cell value);

    Cell getCell(std::size_t row, std::size_t col) const;

    void display() const;
};

#endif
