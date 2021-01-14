#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron
{
public:
    double ileMaki(unsigned P) const { return P; } 

};

// tutaj definicja metody gotujMakaron

inline Makaron* Makaron::gotujMakaron(const std::string& name)
{
    if (name.front() == name.back())
    {
        return new Tagliatelle(3.14, 0.42, 0.1);
    }
    else
    {
        return new Penne();
    }
}
