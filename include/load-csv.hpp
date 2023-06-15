#include <iostream>
#include <fstream>
#include <set>
#include <string>

std::set<std::string> loadCSV(const std::string &filename) {
    std::set<std::string> lines;
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            lines.insert(line);
        }
        file.close();
    } else {
        std::cerr << "Unable to open file: " << filename << '\n';
    }
    return lines;
}


std::set<std::string> findUniqueLines(const std::set<std::string> &a, const std::set<std::string> &b) {
    std::set<std::string> unique;
    for (const auto &line : a) {
        if (b.find(line) == b.end()) {
            unique.insert(line);
        }
    }
    for (const auto &line : b) {
        if (a.find(line) == a.end()) {
            unique.insert(line);
        }
    }
    return unique;
}

void writeToFile(const std::set<std::string>& lines, const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& line : lines) {
            outFile << line << "\n";
        }
        outFile.close();
    } else {
        std::cerr << "Unable to open file: " << filename << '\n';
    }
}

