#include "MagicalContainer.hpp"

namespace ariel
{
    MagicalContainer::AscendingIterator::AscendingIterator(const MagicalContainer &container, int index) : container(container), index(index) {}
    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) : container(other.container), index(other.index) {}
    MagicalContainer::AscendingIterator::~AscendingIterator() {}

    // for tidy
    MagicalContainer::AscendingIterator::AscendingIterator(AscendingIterator &&other) noexcept
        : container(other.container), index(other.index)
    {
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(AscendingIterator &&other) noexcept
    {

        return *this;
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
    {
        return *this;
    }

    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const
    {
        return false;
    }

    int MagicalContainer::AscendingIterator::operator*() const
    {
        return 1;
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++()
    {

        return *this;
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin(const MagicalContainer &container)
    {
        return AscendingIterator(container, 0);
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end(const MagicalContainer &container)
    {
        return AscendingIterator(container, 0);
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::begin()
    {
        return *this;
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::end()
    {
        return *this;
    }
}
