#include <iostream>

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t, x, y, k;
  std::cin >> t;

  for(int i = 0; i < t; ++i)
  {
    std::cin >> x >> y >> k;

    x = ((x+k-1)/k << 1) - 1;
    y =  (y+k-1)/k << 1;

    std::cout << (x > y ? x : y) << '\n';
  }
}
