#ifndef BITVECTOR_H
#define BITVECTOR_H

class BitVector
{
    private:
        int _size;  // size of the bitvector
        int* _array;  // internal array of integers
        int _array_size;  // size of the array
    public:
        BitVector(int size);
        ~BitVector();
        void set(int index);
        void reset(int index);
};

#endif