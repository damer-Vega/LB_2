# CMakeLists.txt для основной программы

cmake_minimum_required(VERSION 3.10)
project(Lb_1.4)

# Указываем путь к заголовочным файлам библиотеки
include_directories("${CMAKE_SOURCE_DIR}/LIB")

# Добавляем исходный файл для основного приложения
add_executable(Lb_1.4 main.cpp)

# Линковка с библиотекой, созданной в подпроекте LIB
target_link_libraries(Lb_1.4 operations)

# Указываем путь для установки исполняемого файла
install(TARGETS Lb_1.4 DESTINATION bin)

# Установка man-страницы
set(CMAKE_INSTALL_PREFIX "/usr/temp")
set(MAN_DIR "${CMAKE_INSTALL_PREFIX}/share/man/man1")
install(FILES ../Lb_1.4.1 DESTINATION ${MAN_DIR})