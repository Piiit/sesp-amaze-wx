#ifndef KISSALGORITHM_H
#define KISSALGORITHM_H

#include "PathAlgorithm.h"

class KissAlgorithm: protected PathAlgorithm
{
public:
    KissAlgorithm();
    virtual bool hasNext();
    virtual MazeMap next();
};

#endif // KISSALGORITHM_H
