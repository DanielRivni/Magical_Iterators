#include "MagicalContainer.hpp"

namespace ariel
{

    MagicalContainer::SideCrossIterator::SideCrossIterator(const MagicalContainer &container)
        : container(container), leftIndex(0), rightIndex(container.size() - 1), leftToRight(true) {}

    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other)
        : container(other.container), leftIndex(other.leftIndex), rightIndex(other.rightIndex), leftToRight(other.leftToRight) {}

    MagicalContainer::SideCrossIterator::~SideCrossIterator() {}

    // for tidy

    MagicalContainer::SideCrossIterator::SideCrossIterator(SideCrossIterator &&other) noexcept
        : container(other.container), leftIndex(other.leftIndex), rightIndex(other.rightIndex), leftToRight(other.leftToRight)
    {
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(SideCrossIterator &&other) noexcept
    {
        return *this;
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other)
    {
        return *this;
    }

    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
    {
        return false;
    }

    int MagicalContainer::SideCrossIterator::operator*() const
    {
        return 1;
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++()
    {

        return *this;
    }
    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin(const MagicalContainer &container)
    {
        return SideCrossIterator(container);
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end(const MagicalContainer &container)
    {
        return SideCrossIterator(container);
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::begin()
    {
        return *this;
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::end()
    {
        return *this;
    }
}
