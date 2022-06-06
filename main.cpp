#include <iostream>
#include <string>
#include <iterator>
#include <fstream>
#include "io.h"
#include "matrix.h"



int main() {
    //Request matrix size
    int matrixSize {getMatrixSize()};
    std::cout << "Matrix size: " << matrixSize << "\n";
    //Build the matrix
    std::vector<int> cityMap(matrixSize); //Initialize matrix to matrixSize
    //fillMatrix
    fillMatrix(cityMap);

    //printMatrix(cityMap); //Print out matrix
    //Save matrix to a file
    saveMatrixToFile(cityMap);
}



