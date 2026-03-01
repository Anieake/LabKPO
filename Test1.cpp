#include <iostream>

int main() {
    int64_t n, m, a;
    std::cin >> n >> m >> a;

    int64_t tiles_n = (n + a - 1) / a;  
    int64_t tiles_m = (m + a - 1) / a;  

    std::cout << tiles_n * tiles_m << std::endl;

    return 0;}