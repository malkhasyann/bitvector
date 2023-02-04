#ifndef BITVECTOR_H
#define BITVECTOR_H

class BitVector
{
    private:
        int _size;
        int* _array;
        int _array_size;
    public:
        BitVector(int size);
        ~BitVector();
        void set(int index);
        void reset(int index);
};

#endif