//
// Created by loochis on 18/01/23.
//

#ifndef LOOCHISGAMEROOM_GRID_H
#define LOOCHISGAMEROOM_GRID_H

namespace GridChis {

    class Grid {
    public:
        Grid(int x, int y, int8_t fill);
        Grid(int x, int y);
        explicit Grid(int x);
        int8_t PullState(int x, int y);
        void PushState(int8_t state, int x, int y);
        void FillState(int8_t state);

        int8_t defaultFill; // The default value to instantiate or resie the array with
    private:
        int8_t * ComputeIndex(int x, int y);

        int xRes;
        int yRes;
        int8_t *stateArr;
    };

} // GridChis

#endif //LOOCHISGAMEROOM_GRID_H
