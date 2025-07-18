cmake_minimum_required(VERSION 3.10) # минимальная версия cmake

# Название проекта
project(MyProgram)



# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(HEADERS
    some.h
)
set(SOURCES
    Untitled1.cpp
    some.cpp
)

# Добавляем исполняемый файл и исходники
add_executable(my_program ${SOURCES} ${HEADERS})


# Если очень большой проект то лучше структурировать так файлы
# file(GLOB_RECURSE HEADERS "include/*.h")
# file(GLOB_RECURSE SOURCES "src/*.cpp")

# add_executable(my_program ${SOURCES} ${HEADERS})
