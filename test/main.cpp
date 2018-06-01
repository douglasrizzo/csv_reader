#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <array>
#include "../CSVReader.hpp"

using namespace std;

int main() {
    CSVReader::csvToStringVecVec("datasets/books.csv");
    CSVReader::csvToStringVecVec("datasets/alpswater.csv");
    CSVReader::csvToStringVecVec("datasets/hald.csv");
    CSVReader::csvToStringVecVec("datasets/iris.csv");
    CSVReader::csvToStringVecVec("datasets/us-census.csv");
    CSVReader::csvToStringVecVec("datasets/wine-red.csv");
    CSVReader::csvToStringVecVec("datasets/wine-white.csv");
    CSVReader::csvToNumericVecVec("datasets/alpswater.csv");
    CSVReader::csvToNumericVecVec("datasets/books.csv");
    CSVReader::csvToNumericVecVec("datasets/hald.csv");
    CSVReader::csvToNumericVecVec("datasets/iris.csv");
    CSVReader::csvToNumericVecVec("datasets/us-census.csv");
    CSVReader::csvToNumericVecVec("datasets/wine-red.csv");
    CSVReader::csvToNumericVecVec("datasets/wine-white.csv");
    return 0;
}

