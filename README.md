
# File System Representation and Search Using BFS and DFS

## Aim
To represent a file system as a graph using an adjacency matrix and search for a specified file or directory using Breadth-First Search (BFS) and Depth-First Search (DFS).

## Description
This project implements BFS and DFS algorithms in C to traverse a graph representing a file system.

Each file or directory is represented as a node, and the connections between them are represented as edges using an adjacency matrix.

## Features
- Represents a graph using an adjacency matrix.
- Implements Breadth-First Search (BFS).
- Implements Depth-First Search (DFS).
- Searches for a specified node.
- Displays the traversal order.
- Reports whether the target node is found.

## Technologies Used
- Programming Language: C
- Data Structure: Graph
- Graph Representation: Adjacency Matrix
- Algorithms: BFS and DFS

## How to Run

1. Download or clone this repository.
2. Open a terminal in the project folder.
3. Compile the program using:

   gcc file_system_bfs_dfs.c -o file_system_bfs_dfs

4. Run the program:

   ./file_system_bfs_dfs

## Sample Input

    5
    0 1 1 0 0
    1 0 0 1 0
    1 0 0 0 1
    0 1 0 0 0
    0 0 1 0 0

Starting node: 0
Target node: 4

## Sample Output

    BFS Traversal: 0 1 2 3 4
    File found using BFS.

    DFS Traversal: 0 1 3 2 4
    File found using DFS.

## Conclusion
The project demonstrates graph representation using an adjacency matrix and the application of BFS and DFS algorithms to search and traverse a file system.

## Author
Data Structures and Algorithms Challenge
