/**
 * @file operations.h
 * @brief Заголовочный файл с определением функций для операций над массивом чисел.
 *
 * Этот файл содержит объявления функций для сортировки, реверса и перестановки элементов массива.
 */

#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <vector>

using namespace std;

/**
 * @brief Сортирует массив чисел по возрастанию.
 *
 * @param data Вектор целых чисел для сортировки.
 */
extern "C" void sort(vector<int>& data);

/**
 * @brief Разворачивает массив чисел.
 *
 * @param data Вектор целых чисел для реверса.
 */
extern "C" void reverse(vector<int>& data);

/**
 * @brief Переставляет чётные и нечётные элементы массива.
 *
 * @param data Вектор целых чисел для перестановки.
 */
extern "C" void swap_even_odd(vector<int>& data);

#endif // OPERATIONS_H
