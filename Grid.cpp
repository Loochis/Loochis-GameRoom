//
// Created by loochis on 18/01/23.
//

#include <cstdlib>
#include <iostream>
#include "Grid.h"

namespace GridChis {

    Grid::Grid(int x, int y, int8_t fill) {
        xRes = x;
        yRes = y;
        stateArr = static_cast<int8_t *>(calloc(x * x, sizeof(int8_t))); // States are 8 bit ints
        FillState(fill);
    }

    Grid::Grid(int x, int y) {
        xRes = x;
        yRes = y;
        stateArr = static_cast<int8_t *>(calloc(x * x, sizeof(int8_t))); // States are 8 bit ints
        FillState(defaultFill);
    }

    Grid::Grid(int x) {
        xRes = x;
        yRes = x;
        stateArr = static_cast<int8_t *>(calloc(x * x, sizeof(int8_t))); // States are 8 bit ints
        FillState(defaultFill);
    }

    int8_t Grid::PullState(int x, int y) {
        return *ComputeIndex(x, y);
    }

    void Grid::PushState(int8_t state, int x, int y) {
        *ComputeIndex(x, y) = state;
    }

    void Grid::FillState(int8_t state) {
        for (int i = 0; i < xRes*yRes; i++) {
            *(stateArr + i) = state;
        }
    }

    int8_t * Grid::ComputeIndex(int x, int y) {
        return reinterpret_cast<int8_t *>(stateArr + y * xRes + x);
    }

} // GridChis