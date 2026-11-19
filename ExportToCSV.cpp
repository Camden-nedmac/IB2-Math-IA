#include "ExportToCSV.h"
#include <fstream>
#include <iomanip>
#include <iostream>

void exportResultsToCSV(const std::string &filename, const std::vector<std::pair<int, double>>& results){
    std::ofstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Error: Could not create " << filename << std::endl;
        return;
    }


    //Apple numbers automatically formats row one as a header
    file << "Array Size, Time (milli)\n";

    file << std::fixed << std::setprecision(4);

    //write the actual data values (each run get it's own row)
    for(const auto& values : results){
        file << values.first << "," << values.second << "\n";
    }

    file.close();

}

