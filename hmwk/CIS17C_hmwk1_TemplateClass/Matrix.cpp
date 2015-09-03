#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Matrix.h"
using namespace std;

template<class T>
Matrix<T>::Matrix(){
    
    srand(static_cast<unsigned int>(time(0)));
    
    col=10;
    
    d1array = new T[col];
    for(int i = 0; i < col; i++){
        d1array[i]=i+1;
    }
    
    d2array = new T*[col];
    for(int j = 0; j < col; j++){
        d2array[j] = new T[d1array[j]];
    }
    
    for(int row = 0; row < col; row++){
        for(int cols = 0; cols < d1array[row]; cols++){
            d2array[row][cols]=rand()%90+10;
        }
    }
    
}

template <class T>
void Matrix<T>::prntarrays(){
    for(int i = 0; i < col; i++){
        cout<<d1array[i]<<" ";
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


