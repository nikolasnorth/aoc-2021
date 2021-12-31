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

}
