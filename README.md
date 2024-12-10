# Advent of Code 2024 (C++) Solutions

## Disclaimer

These solutions are part of my learning journey. They may not always represent the most optimal or professional approach.

## Overview

This repository contains my solutions for Advent of Code 2024, implemented in C++. As someone learning competitive programming, I'm using this challenge to improve my C++ skills and explore different approaches to problem-solving.

## Repository Structure

- Each day's solution is contained in its own file
- Multiple implementations may be provided for each challenge
- Code ranges from quick solutions to more refined, clean implementations

## Getting Started

### Local Compilation

To compile and run the solutions locally, use the following command:

```bash
g++ -std=c++11 -O2 -Wall {nameoffile}.cpp -o {nameoffile}
```

Make sure you have the GNU c++ compiler installed

### Docker Setup

Alternatively, you can use Docker to compile and run the solutions:

```bash
docker build -t advent_of_code .

docker run --rm -v $(pwd):/app advent_of_code g++ -std=c++11 -O2 -Wall {nameoffile}.cpp -o {nameoffile} && ./{day}
```

## Contributions

Contributions are welcomed! If you have:

- A more efficient solution
- Improved code practices
- Optimizations

Please:

- Open a pull request, or
- Submit an issue

I'm always eager to learn and improve my C++ skills!

## Learning Goals

- Improve C++ programming skills
- Practice problem-solving techniques
- Explore different implementation strategies
- Learn from community feedback
