#ifndef HASH_FUNCTIONS_H
#define HASH_FUNCTIONS_H

class Hash {
public:
    Hash(int count_val);

    int mode_hash(int val);

private:
    int count;

};

#endif