@echo off

set SOURCE_FILE=main.cpp
set OUTPUT_FILE=main.exe

echo Compiling %SOURCE_FILE%...

:: Adjust the path to your C++ compiler (e.g., g++, clang++, or cl)
g++ %SOURCE_FILE% -o %OUTPUT_FILE%

if %errorlevel% neq 0 (
    echo Compilation failed.
    exit /b %errorlevel%
)

echo Compilation successful. Running %OUTPUT_FILE%...

%OUTPUT_FILE%

echo Done.
