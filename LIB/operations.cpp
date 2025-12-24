#include "operations.h"
#include <algorithm>

void sort(vector<int>& data) {
    sort(data.begin(), data.end());
}

void reverse(vector<int>& data) {
    reverse(data.begin(), data.end());
}

void swap_even_odd(vector<int>& data) {
    for (size_t i = 0; i + 1 < data.size(); i += 2) {
        swap(data[i], data[i + 1]);
    }
}
