#ifndef UTIL_PATHALGORITHM_H
#define UTIL_PATHALGORITHM_H

#include "MazeMap.h"

namespace util {

    class PathAlgorithm {

    public:
        virtual ~PathAlgorithm() {}
        virtual bool hasNext() = 0;
        virtual util::MazeMap next() const = 0;
    };
}

#endif // UTIL_PATHALGORITHM_H
