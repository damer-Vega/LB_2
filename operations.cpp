/**
 * @file operations.cpp
 * @brief Реализация функций для операций над массивом чисел.
 *
 * Этот файл содержит реализацию функций для сортировки, реверса и перестановки элементов массива.
 */

#include "operations.h"
#include <algorithm>

 /**
  * @brief Сортирует массив чисел по возрастанию.
  *
  * @param data Вектор целых чисел для сортировки.
  */
extern "C" void sort(vector<int>& data) {
    std::sort(data.begin(), data.end());
}

/**
 * @brief Разворачивает массив чисел.
 *
 * @param data Вектор целых чисел для реверса.
 */
extern "C" void reverse(vector<int>& data) {
    std::reverse(data.begin(), data.end());
}

/**
 * @brief Переставляет чётные и нечётные элементы массива.
 *
 * @param data Вектор целых чисел для перестановки.
 */
extern "C" void swap_even_odd(vector<int>& data) {
    for (size_t i = 0; i + 1 < data.size(); i += 2) {
        std::swap(data[i], data[i + 1]);
    }
}
