/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 3, 2015, 11:31 AM
 */

#include "Matrix.h"

int main(int argc, char** argv) {
    
    int col = 10;
    Matrix<int> a(col);
    a.prntarrays();
    
    Matrix<char> b(col);
    b.prntarrays();
    return 0;
}

