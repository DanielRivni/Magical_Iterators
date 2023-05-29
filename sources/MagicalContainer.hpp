#ifndef MAGICALCONTAINER_H
#define MAGICALCONTAINER_H

#include <iostream>
#include <vector>
#include <cmath>

namespace ariel
{
    class MagicalContainer
    {
    private:
        std::vector<int> elements;

    public:
        void addElement(int element);
        void removeElement(int element);
        int size() const;

        class AscendingIterator;
        class SideCrossIterator;
        class PrimeIterator;
    };
    class MagicalContainer::AscendingIterator
    {
    private:
        const MagicalContainer &container;
        int index;

    public:
        AscendingIterator(const MagicalContainer &container, int index = 0);
        AscendingIterator(const AscendingIterator &other);
        ~AscendingIterator();

        // for tidy to pass
        AscendingIterator(AscendingIterator &&other) noexcept;
        AscendingIterator &operator=(AscendingIterator &&other) noexcept;

        AscendingIterator &operator=(const AscendingIterator &other);
        bool operator==(const AscendingIterator &other) const;
        bool operator!=(const AscendingIterator &other) const;
        bool operator>(const AscendingIterator &other) const;
        bool operator<(const AscendingIterator &other) const;
        int operator*() const;
        AscendingIterator &operator++();
        static AscendingIterator begin(const MagicalContainer &container);
        static AscendingIterator end(const MagicalContainer &container);
        AscendingIterator &begin();
        AscendingIterator &end();
    };

    class MagicalContainer::SideCrossIterator
    {
    private:
        const MagicalContainer &container;
        int leftIndex;
        int rightIndex;
        bool leftToRight;

    public:
        SideCrossIterator(const MagicalContainer &container);

        SideCrossIterator(const SideCrossIterator &other);
        ~SideCrossIterator();

        // for tidy to pass
        SideCrossIterator(SideCrossIterator &&other) noexcept;
        SideCrossIterator &operator=(SideCrossIterator &&other) noexcept;

        SideCrossIterator &operator=(const SideCrossIterator &other);
        bool operator==(const SideCrossIterator &other) const;
        bool operator!=(const SideCrossIterator &other) const;
        bool operator>(const SideCrossIterator &other) const;
        bool operator<(const SideCrossIterator &other) const;
        int operator*() const;
        SideCrossIterator &operator++();
        static SideCrossIterator begin(const MagicalContainer &container);
        static SideCrossIterator end(const MagicalContainer &container);
        SideCrossIterator &begin();
        SideCrossIterator &end();
    };

    class MagicalContainer::PrimeIterator
    {
    private:
        const MagicalContainer &container;
        int index;
        bool isPrime(int n) const;

    public:
        PrimeIterator(const MagicalContainer &container, int index = 0);
        PrimeIterator(const PrimeIterator &other);
        ~PrimeIterator();

        // for tidy to pass
        PrimeIterator(PrimeIterator &&other) noexcept;
        PrimeIterator &operator=(PrimeIterator &&other) noexcept;

        PrimeIterator &operator=(const PrimeIterator &other);
        bool operator==(const PrimeIterator &other) const;
        bool operator!=(const PrimeIterator &other) const;
        bool operator>(const PrimeIterator &other) const;
        bool operator<(const PrimeIterator &other) const;
        int operator*() const;
        PrimeIterator &operator++();
        static PrimeIterator begin(const MagicalContainer &container);
        static PrimeIterator end(const MagicalContainer &container);
        PrimeIterator &begin();
        PrimeIterator &end();
    };

}
#endif