#include "../inc/Prettier.h"

#include <fmt/core.h>

std::string Prettier::makePrettier(const std::string& str) const
{
   return fmt::format("--- {} ---", str);
}
