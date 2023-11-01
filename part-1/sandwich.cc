// Brandon Quinones
// bquino2259@csu.fullerton.edu
// @bquino167
// Partners: @lawrencium2, @breidwon

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // If not, print an error message and return a non-zero value.
  if (arguments.size() != 4) {
    std::cout << "Error: You must supply 3 arguments";
    return 1;
  }
  std::string protein = arguments.at(1);
  std::string bread = arguments.at(2);
  std::string condiment = arguments.at(3);
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << "." << std::endl;

  return 0;
}
