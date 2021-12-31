#pragma once

#include <string>
#include <vector>
#include <fstream>

namespace aoc2021::util {

  // Split lines of a file into a vector of strings.
  auto ReadLines(const std::string &filename) -> std::vector<std::string>;

}
