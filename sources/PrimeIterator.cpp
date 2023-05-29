#include "MagicalContainer.hpp"
using namespace std;
namespace ariel
{
    // basic Prime function
    bool MagicalContainer::PrimeIterator::isPrime(int n) const
    {
        if (n <= 1)
        {
            return false;
        }
        int limit = sqrt(n);
        for (int i = 2; i <= limit; ++i)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer &container, int index) : container(container), index(index) {}

    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other)
        : container(other.container), index(other.index) {}

    MagicalContainer::PrimeIterator::~PrimeIterator() {}

    // for tidy

    MagicalContainer::PrimeIterator::PrimeIterator(PrimeIterator &&other) noexcept
        : container(other.container), index(other.index)
    {
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(PrimeIterator &&other) noexcept
    {

        return *this;
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other)
    {

        return *this;
    }

    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const
    {
        return false;
    }

    int MagicalContainer::PrimeIterator::operator*() const
    {
        return 1;
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++()
    {

        return *this;
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin(const MagicalContainer &container)
    {
        return PrimeIterator(container, 0);
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end(const MagicalContainer &container)
    {
        return PrimeIterator(container, 0);
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::begin()
    {
        return *this;
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::end()
    {
        return *this;
    }
}
