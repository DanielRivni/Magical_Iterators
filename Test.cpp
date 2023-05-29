#include "doctest.h"
#include "MagicalContainer.hpp"
using namespace ariel;

TEST_SUITE("MagicalContainer Tests")
{

    TEST_CASE("Test empty container")
    {
        MagicalContainer container;
        CHECK(container.size() == 0);
    }

    TEST_CASE("Test adding elements")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        container.addElement(3);
        container.addElement(4);
        CHECK(container.size() == 4);
    }

    TEST_CASE("Test removing elements")
    {
        MagicalContainer container;
        container.addElement(5);
        container.addElement(6);
        container.addElement(7);
        container.addElement(8);
        container.removeElement(7);
        CHECK(container.size() == 3);
        container.removeElement(8);
        container.removeElement(5);
        container.removeElement(6);
        CHECK(container.size() == 0);
    }

    TEST_CASE("Test removing non-existent element")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        container.addElement(3);

        CHECK_THROWS(container.removeElement(4)); // Try to remove a non-existent element
        CHECK(container.size() == 3);
    }

    TEST_CASE("Test accessing elements with iterators in an empty container")
    {
        MagicalContainer container;

        MagicalContainer::AscendingIterator ascIter(container);
        CHECK(ascIter.begin() == ascIter.end());

        MagicalContainer::SideCrossIterator crossIter(container);
        CHECK(crossIter.begin() == crossIter.end());

        MagicalContainer::PrimeIterator primeIter(container);
        CHECK(primeIter.begin() == primeIter.end());
    }

    TEST_CASE("Test AscendingIterator")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        container.addElement(3);
        container.addElement(4);
        container.addElement(5);

        MagicalContainer::AscendingIterator ascIter(container);
        auto it = ascIter.begin();

        CHECK(*it == 1);
        ++it;
        CHECK(*it == 2);
        // Advancing iterator by 2 positions
        ++it;
        ++it;
        CHECK(*it == 4);
        ++it;
        CHECK(it == ascIter.end());
    }

    TEST_CASE("Test SideCrossIterator")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        container.addElement(3);
        container.addElement(4);
        container.addElement(5);

        MagicalContainer::SideCrossIterator crossIter(container);
        auto it = crossIter.begin();

        CHECK(*it == 1);
        ++it;
        CHECK_FALSE(*it == 1);
        CHECK(*it == 2);
        // Advancing iterator by 2 positions
        ++it;
        ++it;
        CHECK(*it == 4);
        ++it;
        CHECK(it == crossIter.end());
    }

    TEST_CASE("Test prime numbers in the container")
    {
        MagicalContainer container;
        container.addElement(2);
        container.addElement(3);
        container.addElement(4);
        container.addElement(5);
        container.addElement(6);

        MagicalContainer::PrimeIterator primeIter(container);
        auto it = primeIter.begin();

        CHECK(*it == 2);
        ++it;
        CHECK(*it == 3);
        ++it;
        CHECK(*it == 5);
        ++it;
        CHECK(it == primeIter.end());
    }

    TEST_CASE("Test adding and removing large number of elements")
    {
        MagicalContainer container;

        for (int i = 1; i <= 500; ++i)
        {
            container.addElement(i);
        }
        CHECK(container.size() == 500);

        // Removing the even elements
        for (int i = 2; i <= 500; i += 2)
        {
            container.removeElement(i);
        }
        CHECK(container.size() == 250);
    }
}