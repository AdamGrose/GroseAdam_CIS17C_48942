/* 
 * File:   Matrix.h
 * Author: rcc
 *
 * Created on September 3, 2015, 11:32 AM
 */

#ifndef MATRIX_H
#define	MATRIX_H

template <class T> 
class Matrix{
private:
    int col;
    T *d1array;
    T **d2array;
public:
    Matrix();
    void prntarrays();
    ~Matrix();
};



#endif	/* MATRIX_H */

