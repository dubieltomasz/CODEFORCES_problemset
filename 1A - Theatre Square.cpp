#include <iostream>
#include <cmath>

int main()
{
  unsigned long long n, m, a;

  std::cin >> n >> m >> a;
  
  n = std::ceil((double)n/a);
  m = std::ceil((double)m/a);

  std::cout << n * m;
}
