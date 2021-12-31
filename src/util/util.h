#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <utility>

namespace aoc2021::util {

  // Splits the lines of a file into a vector of strings.
  auto ReadLines(const std::string &filename) -> std::vector<std::string>;

  // Splits each line into a pair of strings. Returns a vector of pairs.
  auto ParsePairs(const std::string &filename) -> std::vector<std::pair<std::string, std::string>>;

}
