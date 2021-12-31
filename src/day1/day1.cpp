#include "day1.h"
#include "../util/util.h"

namespace aoc2021::day1 {

  auto Part1(const std::string &filename) -> unsigned int {
    auto lines = util::ReadLines(filename);
    unsigned int count = 0;
    for (auto line = lines.begin() + 1; line != lines.end(); ++line) {
      auto prev = std::stoi(*(line - 1));
      auto current = std::stoi(*line);
      if (prev < current) {
        ++count;
      }
    }
    return count;
  }

  auto Part2(const std::string &filename) -> unsigned int {
    auto lines = util::ReadLines(filename);
    unsigned int count = 0;
    int prev = INT_MAX;
    for (auto line = lines.begin() + 2; line != lines.end(); ++line) {
      auto a = std::stoi(*(line - 2));
      auto b = std::stoi(*(line - 1));
      auto c = std::stoi(*line);
      auto sum = a + b + c;
      if (prev < sum) {
        ++count;
      }
      prev = sum;
    }
    return count;
  }

}
