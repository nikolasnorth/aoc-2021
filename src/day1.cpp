#include "day1.h"

namespace day1 {
  auto Part1(const std::string &filename) -> unsigned int {
    std::ifstream infile{ filename };
    if (!infile.is_open()) {
      std::cerr << "Could not open file" << std::endl;
      return -1;
    }
    unsigned int prev = UINT_MAX;
    unsigned int count = 0;
    std::string line{};
    std::getline(infile, line);
    while (infile.good() && !line.empty()) {
      int current = std::stoi(line);
      if (prev < current) {
        ++count;
      }
      prev = current;
      std::getline(infile, line);
    }
    return count;
  }
}
