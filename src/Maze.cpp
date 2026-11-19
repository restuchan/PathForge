#include "Maze.h"

#include <iostream>
#include <stdexcept>

// Constructor
Maze::Maze(std::size_t rows, std::size_t cols)
    : rows(rows), cols(cols),
      grid(rows, std::vector<Cell>(cols, Cell::Empty)) {

    if (rows == 0 || cols == 0) {
        throw std::invalid_argument("Maze dimensions cannot be zero.");
    }
}

// Get total rows
std::size_t Maze::getRows() const {
    return rows;
}

// Get total columns
std::size_t Maze::getCols() const {
    return cols;
}

// Change cell value
void Maze::setCell(std::size_t row, std::size_t col, Cell value) {
    if (row >= rows || col >= cols) {
        throw std::out_of_range("Cell position is out of bounds.");
    }

    grid[row][col] = value;
}

// Read cell value
Cell Maze::getCell(std::size_t row, std::size_t col) const {
    if (row >= rows || col >= cols) {
        throw std::out_of_range("Cell position is out of bounds.");
    }

    return grid[row][col];
}

// Display maze
void Maze::display() const {
    for (std::size_t row = 0; row < rows; row++) {
        for (std::size_t col = 0; col < cols; col++) {

            switch (grid[row][col]) {
                case Cell::Empty:
                    std::cout << ". ";
                    break;

                case Cell::Wall:
                    std::cout << "# ";
                    break;

                case Cell::Start:
                    std::cout << "S ";
                    break;

                case Cell::End:
                    std::cout << "E ";
                    break;
            }
        }

        std::cout << '\n';
    }
}
