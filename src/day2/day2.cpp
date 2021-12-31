#include "day2.h"
#include "../util/util.h"

namespace aoc2021::day2 {

  auto Part1(const std::string &filename) -> unsigned int {
    const auto commands = util::ParsePairs(filename);
    int horizontal = 0, depth = 0;
    for (const auto &command: commands) {
      const auto[direction, magnitude] = command;
      if (direction == "forward") {
        horizontal += std::stoi(magnitude);
      } else if (direction == "down") {
        depth += std::stoi(magnitude);
      } else {
        depth -= std::stoi(magnitude);
      }
    }
    return horizontal * depth;
  }

}
