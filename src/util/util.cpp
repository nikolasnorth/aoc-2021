#include "util.h"

namespace aoc2021::util {

  auto ReadLines(const std::string &filename) -> std::vector<std::string> {
    std::ifstream infile{ filename };
    if (!infile.is_open()) {
      return std::vector<std::string>{};
    }
    std::vector<std::string> lines{};
    std::string line{};
    while (std::getline(infile, line)) {
      lines.push_back(line);
    }
    return lines;
  }

  auto ParsePairs(const std::string &filename) -> std::vector<std::pair<std::string, std::string>> {
    std::ifstream infile{ filename };
    if (!infile.is_open()) {
      return std::vector<std::pair<std::string, std::string>>{};
    }
    std::vector<std::pair<std::string, std::string>> pairs{};
    std::string line{};
    while (std::getline(infile, line)) {
      auto pos = line.find(' ');
      pairs.emplace_back(std::make_pair(line.substr(0, pos), line.substr(pos + 1)));
    }
    return pairs;
  }

}
