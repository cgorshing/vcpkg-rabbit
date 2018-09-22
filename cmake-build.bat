@echo off

IF EXIST build ( rmdir /q/s build || EXIT /B 1 )
cmake -DCMAKE_TOOLCHAIN_FILE="C:\\tools\\vcpkgb\\scripts\\buildsystems\\vcpkg.cmake" . -Bbuild || EXIT /B 1
