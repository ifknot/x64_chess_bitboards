#include <iostream>
#include <intrin.h>

int main() {
    std::cout << "Bitboards.\n"; 

    __int64 i{ -1 };
    do {
        std::cout << _mm_popcnt_u64(i) << '\n';
        std::cin >> i;
    } while (i);
}
