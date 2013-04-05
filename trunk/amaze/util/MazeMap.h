#ifndef UTIL_MAZEMAP_H
#define UTIL_MAZEMAP_H

#include "MazeNode.h"

namespace util {

    namespace {
        const int WIDTH = 60;
        const int HEIGHT = 60;
    }

    struct MazeMap {
        util::MazeNode node[WIDTH][HEIGHT];
    };
}

#endif // UTIL_MAZEMAP_H
