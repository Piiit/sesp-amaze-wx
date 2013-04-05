#ifndef ALG_KISSALGORITHM_H
#define ALG_KISSALGORITHM_H

#include "../util/PathAlgorithm.h"
#include "../util/MazeMap.h"

namespace alg {

    class KissAlgorithm : public util::PathAlgorithm {

    public:
        KissAlgorithm();
        virtual ~KissAlgorithm();
        virtual bool hasNext();
        virtual util::MazeMap next() const;
    };
}

#endif // ALG_KISSALGORITHM_H
