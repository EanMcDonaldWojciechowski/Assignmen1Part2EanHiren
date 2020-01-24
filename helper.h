#pragma once
#include <iostream>
#include <stdio.h>
#include "object.h"
#include <string.h>

// prints the value c on a new line
void print(char const *c) {
    std::cout << c << "\n";
}

// prints the value c on a new line
void print(int const *i) {
    std::cout << i << "\n";
}

// tests if object pointer is nullptr
bool isNullptr(Object *o) {
    return o == nullptr;
}

