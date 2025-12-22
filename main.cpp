#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "operations.h"

void print_help() {
    cout << "Использование: app [ОПЦИИ]\n\n"
        << "Опции:\n"
        << "  --input <файл>          Входной файл, содержащий массив чисел (не более 100)\n"
        << "  --output <файл>         Выходной файл, в который запишется результат\n"
        << "  --operation <операция>  Операция, которую необходимо выполнить: 'sort', 'reverse', 'swap'\n"
        << "  --help                  Показать это сообщение\n";
}

int main(int argc, char* argv[]) {

    string input_file;
    string output_file;
    string operation;
    bool help = false;

    // Обрабатываем аргументы
    for (int i = 1; i < argc; ++i) {
        string arg = argv[i];
        if (arg == "--input" && i + 1 < argc) {
            input_file = argv[++i];
        }
        else if (arg == "--output" && i + 1 < argc) {
            output_file = argv[++i];
        }
        else if (arg == "--operation" && i + 1 < argc) {
            operation = argv[++i];
        }
        else if (arg == "--help") {
            help = true;
        }
        else {
            print_help();
            return 1;
        }
    }
    
    if (help) {
        print_help();
        return 0;
    }
    
            // Проверка на наличие всех необходимых параметров
    if (input_file.empty() || output_file.empty() || operation.empty()) {
        cerr << "Не хватает обязательных аргументов. Используйте --help для справки.\n";
        return 1;
    }

    ifstream infile(input_file);
    if (!infile) {
        cerr << "Ошибка: Ошибка открытия входного файла.\n";
        return 1;
    }

    vector<int> data;
    int number;
    while (infile >> number) {
        data.push_back(number);
    }

    if (data.size() > 100) {
        cerr << "Ошибка: Слишком много чисел в входном файле. Максимум 100.\n.\n";
        return 1;
    }

    if (operation == "sort") {
        sort(data);
    }
    else if (operation == "reverse") {
        reverse(data);
    }
    else if (operation == "swap") {
        swap_even_odd(data);
    }
    else {
        cerr << "Ошибка: Неизвестная операция.\n";
        return 1;
    }

    ofstream outfile(output_file);
    if (!outfile) {
        cerr << "Ошибка: Ошибка открытия выходного файла.\n";
        return 1;
    }

    for (const int& num : data) {
        outfile << num << " ";
    }

    cout << "Операция выполнена успешно.\n";
    return 0;
}

