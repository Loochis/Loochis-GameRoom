#include <ncurses.h>
#include <iostream>
#include "Grid.h"

using namespace GridChis;

int main() {
    Grid grid = Grid(10, 10, 0);
    // 0 1
    // 2 3

    std::cout << static_cast<int16_t>(grid.PullState(1, 1));
}