/* 
 * File:   Matrix.h
 * Author: rcc
 *
 * Created on September 3, 2015, 11:32 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;

#ifndef MATRIX_H
#define	MATRIX_H

template <class T> 
class Matrix{
private:
    int col;
    T *d1array;
    T **d2array;
public:
    Matrix(int);
    void prntarrays();
    ~Matrix();
};

template<class T>
Matrix<T>::Matrix(int col){
    
    srand(static_cast<unsigned int>(time(0)));
    
    this->col=col;
    
    d1array = new T[this->col];
    for(int i = 0; i < this->col; i++){
        d1array[i]=i+1;
    }
    
    d2array = new T*[this->col];
    for(int j = 0; j < this->col; j++){
        d2array[j] = new T[static_cast<unsigned int>(d1array[j])];
    }
    
    for(int row = 0; row < this->col; row++){
        for(int cols = 0; cols < d1array[row]; cols++){
            d2array[row][cols]=rand()%60+25;
        }
    }
    
}

template <class T>
void Matrix<T>::prntarrays(){
    for(int i = 0; i < col; i++){
        cout<<static_cast<unsigned int>(d1array[i])<<" ";
    }
    cout<<endl<<endl;
    
    for(int row = 0; row < col; row++){
        for(int cols = 0; cols < d1array[row]; cols++){
            cout<<d2array[row][cols]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

template <class T>
Matrix<T>::~Matrix(){
    delete []d1array;
    for(int i=0;i<col;i++){
        delete []d2array[i];
    }
    delete []d2array;
}




#endif	/* MATRIX_H */

