#include <exception>

class NuFloat : public std::exception
{
public:
    NuFloat() noexcept {}
    NuFloat(const NuFloat &) noexcept = default;
    NuFloat &operator=(const NuFloat &) noexcept = default;
    virtual ~NuFloat() noexcept = default;
    virtual const char *what() const noexcept
    {
        return "Nu e float";
    }
};
