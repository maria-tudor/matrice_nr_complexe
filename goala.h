#include <exception>

class goala : public std::exception
{
public:
    goala() noexcept {}
    goala(const goala&) noexcept = default;
    goala &operator=(const goala &) noexcept = default;
    virtual ~goala() noexcept = default;
    virtual const char *what() const noexcept
    {
        return "Matrice goala";
    }
};
