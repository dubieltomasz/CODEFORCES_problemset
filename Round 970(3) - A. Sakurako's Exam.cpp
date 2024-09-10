#include <iostream>
#include <vector>

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t, a, b;
  std::vector<bool> v;

  std::cin >> t;

  for(int i = 0; i < t; ++i)
  {
    std::cin >> a >> b;

    b %= 2;
    if(b && a > 1)
    {
      a -= 2;
      --b;
    }
    a %= 2;

    v.push_back((a == 0 && b == 0));
  }

  for(const int& i : v)
    std::cout << (i ? "YES\n" : "NO\n");
}
