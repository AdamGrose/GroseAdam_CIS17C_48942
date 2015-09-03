#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Matrix.h"
using namespace std;

Matrix::Matrix(int ncol){
    
    srand(static_cast<unsigned int>(time(0)));
    
    col=ncol;
    
    d1array = new int[col];
    for(int i = 0; i < col; i++){
        d1array[i]=i+1;
    }
    
    d2array = new int*[col];
    for(int j = 0; j < col; j++){
        d2array[j] = new int[d1array[j]];
    }
    
    for(int row = 0; row < col; row++){
        for(int cols = 0; cols < d1array[row]; cols++){
            d2array[row][cols]=rand()%90+10;
        }
    }
    
}

void Matrix::prntarrays(){
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

Matrix::~Matrix(){
    delete []d1array;
    for(int i=0;i<col;i++){
        delete []d2array[i];
    }
    delete []d2array;
}

