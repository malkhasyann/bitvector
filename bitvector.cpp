#include "bitvector.h"
#include <stdexcept>

using namespace std;

#define SIZE (sizeof(int) * 8)

BitVector::BitVector(int size)
{
    this->_size = size;
    this->_array_size = (size + SIZE - 1) / SIZE;
    this->_array = new int[this->_array_size]();
}

BitVector::~BitVector()
{
    delete[] this->_array;
}

void BitVector::set(int index)
{
    if (index >= this->_size)
        throw std::invalid_argument("Index out of range.");

    int arr_index = index / SIZE;
    int bit_index = index % SIZE;

    this->_array[this->_array_size - arr_index - 1] |= (1 << bit_index);
}

void BitVector::reset(int index)
{
    if (index >= this->_size)
        throw std::invalid_argument("Index out of range.");

    int arr_index = index / SIZE;
    int bit_index = index % SIZE;

    this->set(index);

    this->_array[this->_array_size - arr_index - 1] ^= (1 << bit_index);
}