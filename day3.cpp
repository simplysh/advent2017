#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <fstream>
#include <sstream>

std::string emp(const std::string& text) {
  return "\e[1m\e[4m" + text + "\e[0m";
}

int main(int argc, char* argv[]) {
  std::cout << "ana " << emp("are") << " mere" << std::endl;
}
