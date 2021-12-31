#include <string>
#include <iostream>

#include "day1/day1.h"

int main() {
  using namespace aoc2021;
  const std::string &filename = "../input.txt";
  std::cout << day1::Part1(filename) << '\n';
}
