// Brandon Quinones
// bquino2259@csu.fullerton.edu
// @bquino167
// Partners: @lawrencium2, @breidwon

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  // Check if there is at least one command line argument.
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  // Sum up the values, skipping the command name.
  double sum = 0.0;
  for (size_t i = 1; i < arguments.size(); ++i) {
    sum += std::stod(arguments[i]);
  }

  // Calculate the average of the values.
  // Explicitly cast the size to double to avoid narrowing conversion warnings.
  double average = sum / static_cast<double>(arguments.size() - 1);

  // Print the calculated average.
  std::cout << "average = " << average << "\n";

  return 0;
}