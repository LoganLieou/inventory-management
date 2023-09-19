//
// Created by Logan  Jackson on 9/18/23.
//

#include "Utility.h"

namespace utility {
    uuid randomUUID() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<unsigned long long> dis(0, UINT64_MAX);

        unsigned long long part1 = dis(gen);
        unsigned long long part2 = dis(gen);

        char uuidStr[36];
        snprintf(uuidStr, sizeof(uuidStr), "%016llx-%016llx", part1, part2);

        return uuidStr;
    }
}
