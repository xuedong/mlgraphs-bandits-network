#ifndef MLGRAPHS_BANDITS_NETWORK_MONTECARLO_H
#define MLGRAPHS_BANDITS_NETWORK_MONTECARLO_H

#include "../policy/IPolicy.h"

class MonteCarlo {
    unsigned long N;
    unsigned long horizon;

public:
    MonteCarlo(unsigned long N, unsigned long horizon): N(N), horizon(horizon) {}

    void simulate(IPolicy *policy, const std::string &file_name, const int seed = time(NULL));

    static void writeResults(std::vector<double> rewards, std::vector<unsigned long> best_actions, double maximumRewardPerRound, double actionsPerRound, const std::string &fileName);
};

#endif //MLGRAPHS_BANDITS_NETWORK_MONTECARLO_H
