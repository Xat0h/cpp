#include <iostream>
#include <vector>

using std::cout;
using data = std::vector<int>;
using std::find_if;
using size = std::size_t;
using std::array;

template<size_t size>

void better_f(array<int, size>& arr) {}

void using_c_array() {
    const int n = 256;
    array<int, n> arr{};

    better_f(arr);
}

int main() {
    cout << "Hello world!" << "\n";

    return 0;
}