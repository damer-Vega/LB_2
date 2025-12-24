#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <vector>

using namespace std;

extern "C" void sort(vector<int>& data);
extern "C" void reverse(vector<int>& data);
extern "C" void swap_even_odd(vector<int>& data);

#endif