### README.md

```markdown
# ShortestPathFinder

**ShortestPathFinder** is a console application that implements Dijkstra's algorithm to find the shortest paths in a graph. The algorithm calculates the minimum distances from a given starting vertex to all other vertices in the graph.

## Description

Dijkstra's algorithm is widely used in graph theory to solve the shortest path problem in graphs with non-negative edge weights. This project implements this algorithm using a priority queue (heap) for optimization.

## Project Structure

```
ShortestPathFinder/
├── main.cpp
├── dijkstra.h
├── dijkstra.cpp
├── io.h
├── io.cpp
├── input.txt
└── output.txt
```

- `main.cpp` - The main file containing the `main` function, which runs the program.
- `dijkstra.h` - Header file with declarations of structures and the `dijkstra` function.
- `dijkstra.cpp` - Implementation file for the `dijkstra` function.
- `io.h` - Header file with declarations of input/output functions.
- `io.cpp` - Implementation file for input/output functions.
- `input.txt` - File containing the graph description and the starting vertex.
- `output.txt` - File containing the results of the program.

## Installation

1. Ensure you have a C++ compiler installed, such as **g++**.
2. Clone the repository or download the project files.

## Compilation

To compile the project, use the following command:

```sh
g++ -o ShortestPathFinder main.cpp dijkstra.cpp io.cpp
```

## Usage

After compiling, run the program:

```sh
./ShortestPathFinder
```

## Input Format

Input data should be saved in the `input.txt` file. The format is as follows:

1. The first line contains two integers: the number of vertices `n` and the number of edges `m`.
2. The next `m` lines contain three integers each: the starting vertex `u`, the ending vertex `v`, and the weight of the edge `weight`.
3. The last line contains the starting vertex `start`.

**Example:**

```
5 6
0 1 10
0 2 3
1 2 1
1 3 2
2 1 4
2 3 8
0
```

## Output Format

The results of the program are saved in the `output.txt` file. Each line of the file corresponds to the distance from the starting vertex to the respective vertex in the graph. If a vertex is unreachable, the file will contain "error".

**Example:**

```
0
7
3
9
error
```

## Additional Features

- **Input Validation:** The program checks that the number of vertices and edges is non-negative and that the vertices are within the valid range.
- **Console Output:** The results are also printed to the console for convenience.

## Author

- **Name:** [YALOKGAR]
- **Contact:** [discord yalokgar]
