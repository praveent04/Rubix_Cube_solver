# Rubik's Cube Solver

This project provides an implementation to solve the Rubik's Cube using Depth-First Search (DFS) and Breadth-First Search (BFS) algorithms. The cube is represented in three different formats: 1D array, 3D array, and bitboard, each solvable using either DFS or BFS.

################### two files yet to upload ################

## Features
- **Multiple Representations:** Solve the Rubik's Cube using three different representations: 1D array, 3D array, and bitboard.
- **Algorithms:** Implementations of both DFS and BFS for solving the cube.
- **Efficient Storage:** Use of bitboard representation for fast operations and efficient storage.

## Prerequisites
- C++ Compiler (C++11 or higher)
- CMake
- Git

## Steps to Run

1. **Clone the Repository:**
   ```bash
   git clone <repository-url>
   cd rubiks_cube_solver
   ```

2. **Compile the Project:**
   ```bash
   cmake -S . -B build/
   ```

3. **Build the Project:**
   ```bash
   cd build
   make all
   ```

4. **Run the Solver:**
   ```bash
   ./rubiks_cube_solver
   ```

Replace `<repository-url>` with the URL of your Git repository.

## Usage
To run the solver, execute the `rubiks_cube_solver` binary. The program allows you to choose the representation and the solving algorithm to use.

## License
This project is licensed under the MIT License - see the LICENSE file for details.
