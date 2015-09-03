/* 
 * File:   Matrix.h
 * Author: rcc
 *
 * Created on September 3, 2015, 11:08 AM
 */

#ifndef MATRIX_H
#define	MATRIX_H

class Matrix{
private:
    int col;
    int *d1array;
    int **d2array;
public:
    Matrix(int ncol);
    void prntarrays();
    ~Matrix();
};



#endif	/* MATRIX_H */

