#include <vector>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <fmt/color.h>

int main() {
  fmt::print("Hello, world!\n");
  std::string s = fmt::format("The answer is {}.\n", 42);
  fmt::print(s);
  fmt::print("Don't {}\n", "panic");
  fmt::print("I'd rather be {1} than {0}.\n", "right", "happy");
  fmt::print("Hello, {name}! The answer is {number}. Goodbye, {name}.\n",
    fmt::arg("name", "World"), fmt::arg("number", 42));
  fmt::print("{}\n", std::numeric_limits<double>::infinity());
  std::vector<int> v = {1, 2, 3};
  fmt::print("{}\n", v);
  fmt::print(fmt::emphasis::bold | fg(fmt::color::red),
             "Elapsed time: {0:.2f} seconds\n", 1.23);
}

