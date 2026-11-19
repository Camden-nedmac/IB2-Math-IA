#pragma once
#include <string>
#include <utility>
#include <vector>

void exportToCSV(const std::string &fileName, const std::vector<std::pair<int, double>> &results);