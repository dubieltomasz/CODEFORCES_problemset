#include <iostream>
#include <vector>

int main()
{
  int n, a, b;
  std::vector<int> v;

  std::cin >> n;

  v.reserve(n);

  for(int i = 0; i < n; ++i)
  {
    std::cin >> a >> b;

    v.push_back(b-a);
  }

  for(const int& i : v)
    std::cout << i << "\n";
}
