//
// Created by Colby on 5/27/2022.
//
#include <iostream>
#include "matrix.h"
#include <fstream>
#include <random>
#include <algorithm>

//Generates a random number 1-100
auto dice() {
    static std::uniform_int_distribution<int> distr{1, 100};
    static std::random_device device;
    static std::mt19937 engine{device()};
    return distr(engine);
}

std::vector<int> fillMatrix(std::vector<int>& emptyMatrix)
{
    std::ranges::generate(emptyMatrix.begin(), emptyMatrix.end(), dice);
    emptyMatrix.shrink_to_fit(); // Frees up extra memory
    return emptyMatrix;
}

void printMatrix(std::vector<int> &matrix)
{
    std::cout <<" Printing matrix...\n";
    for (int n:matrix) {
        std::cout << n << "\t";
    }
}

void saveMatrixToFile(std::vector<int> &matrix)
{
    std::ofstream outputFile("matrixFile.txt");
    std::ostream_iterator<int> outputIterator(outputFile, "\t");
    std::copy(matrix.begin(), matrix.end(), outputIterator);
    outputFile.close();
}

std::vector<int> loadMatrixFromFile()
{

}
