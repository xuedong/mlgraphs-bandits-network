#ifndef MLGRAPHS_BANDITS_NETWORK_IARM_H
#define MLGRAPHS_BANDITS_NETWORK_IARM_H


#include <random>

class IArm {
protected:
    double mean;
public:
    double getMean() const {
        return mean;
    }

    virtual double sample(std::default_random_engine &generator) = 0;
};

#endif //MLGRAPHS_BANDITS_NETWORK_IARM_H
