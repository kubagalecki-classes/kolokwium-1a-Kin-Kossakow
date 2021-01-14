#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake

double obliczMake(std::vector<Tagliatelle> vector)
{
    double M = 0;
    unsigned multiplier = 1;
    for (size_t i = vector.size() - 1; i >= 0; --i)
    {
        M += vector[i].ileMaki(multiplier);
        multiplier++;
    }

    if (M > 100)
    {
        throw int(10);
    }

    if (M > 50 && M <= 100)
    {
        throw double(234);
    }

    return M;
}
