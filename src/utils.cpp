#include "utils.hpp"

namespace graphee
{

void print_log(std::string message)
{
  std::time_t t = std::time(nullptr);
  std::tm tm = *std::localtime(&t);

  std::cout << "\033[1m [" << std::put_time(&tm, "%T") << "] [GRAPHEE] -\033[0m " << message << std::endl;
}

void print_strong_log(std::string message)
{
  std::time_t t = std::time(nullptr);
  std::tm tm = *std::localtime(&t);

  std::cout << "\033[1;32m [" << std::put_time(&tm, "%T") << "] [GRAPHEE] -\033[0m \033[92m" << message << "\033[0m" << std::endl;
}

void print_warning(std::string message)
{
  std::time_t t = std::time(nullptr);
  std::tm tm = *std::localtime(&t);

  std::cout << "\033[1;33m [" << std::put_time(&tm, "%T") << "] [GRAPHEE] -\033[0m \033[93m" << message << "\033[0m" << std::endl;
}

void print_error(std::string message)
{
  std::time_t t = std::time(nullptr);
  std::tm tm = *std::localtime(&t);

  std::cout << "\033[1;31m [" << std::put_time(&tm, "%T") << "] [GRAPHEE] -\033[0m \033[91m" << message << "\033[0m" << std::endl;
}

} // namespace graphee
