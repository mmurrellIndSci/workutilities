#include <iostream>
#include <fstream>
#include <set>
#include <string>

#include "load-csv.hpp"


int main(){
    auto datalake = loadCSV("../../data/datalakedata.csv");
    auto sisense = loadCSV("../../data/sisensedata.csv");
    writeToFile(findUniqueLines(datalake, sisense), "../../data/unique_data.csv");

}