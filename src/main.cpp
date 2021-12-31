#include <string>
#include <iostream>

#include "day1/day1.h"

int main() {
  const std::string &filename = "../input.txt";
  std::cout << aoc2021::day1::Part2(filename) << '\n';
}
