#include <iostream>

int main() {
    std::cout << "Bitboards.\n"; 
    int32_t n{ 0 };
    __asm {
        mov     eax, -1
        popcnt  ecx, eax
        mov     n, ecx
    }
    std::cout << n;
}
