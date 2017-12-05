#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <fstream>
#include <sstream>

int diff(const std::vector<int>& numbers) {
  for (auto i = std::begin(numbers); i != std::end(numbers); i += 1) {
    for (auto j = i + 1; j != std::end(numbers); j += 1) {
      if (*i % *j == 0) { return *i / *j; }
      if (*j % *i == 0) { return *j / *i; }
    }
  }

  return 0;
}

int main(int argc, char* argv[]) {
  std::ifstream sheet("input_day2");
  std::string line;
  int total = 0;

  while (std::getline(sheet, line)) {
    std::istringstream ss(line);
    std::istream_iterator<std::string> begin(ss), end;

    std::vector<std::string> tokens(begin, end);
    std::vector<int> row;

    std::transform(std::begin(tokens), std::end(tokens), std::back_inserter(row),
        [](std::string col) {
          return std::stoi(col);
        });

    total += diff(row);
  }

  std::cout << total << std::endl;
}
