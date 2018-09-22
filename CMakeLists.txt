# CMakeLists.txt
cmake_minimum_required(VERSION 3.0)
project(vcpkg-librabbitmq)

find_package(librabbitmq REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main librabbitmq)



# To find and use catch
find_path(CATCH_INCLUDE_DIR catch.hpp)
include_directories(${CATCH_INCLUDE_DIR})

# To find and use azure-storage-cpp
find_path(WASTORAGE_INCLUDE_DIR was/blob.h)
find_library(WASTORAGE_LIBRARY wastorage)
include_directories(${WASTORAGE_INCLUDE_DIR})
link_libraries(${WASTORAGE_LIBRARY})