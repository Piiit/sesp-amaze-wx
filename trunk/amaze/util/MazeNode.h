#ifndef UTIL_MAZENODE_H
#define UTIL_MAZENODE_H

namespace util {

    struct MazeNode {
        bool startPoint;
        bool endPoint;
        bool current;
        bool discovered;
        char customState;
    };
}

#endif // UTIL_MAZENODE_H
