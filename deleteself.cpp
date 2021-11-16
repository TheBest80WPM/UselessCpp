#include <iostream>

struct selfdelclass
{
  selfdelclass() = default;
  ~selfdelclass(){ delete this; }
};

auto main() -> int
{
  selfdelclass ex;
}