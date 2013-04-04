#ifndef PATHALGORITHM_H
#define PATHALGORITHM_H

#include "MazeMap.h"

class PathAlgorithm
{
public:
    PathAlgorithm() {}
    virtual bool hasNext() = 0;
    virtual MazeMap next() = 0;
    virtual ~PathAlgorithm() {}
};

#endif // PATHALGORITHM_H
