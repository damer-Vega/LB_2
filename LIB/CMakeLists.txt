# CMakeLists.txt для библиотеки

cmake_minimum_required(VERSION 3.10)
project(operations_library)

# создание динамической библиотеки
add_library(operations SHARED operations.cpp)

# указываем путь для установки библиотеки и заголовочных файлов
install(TARGETS operations LIBRARY DESTINATION lib)
install(FILES operations.h DESTINATION include)