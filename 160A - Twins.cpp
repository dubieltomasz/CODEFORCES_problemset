#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int n, coin, answer = 0, sum1 = 0, sum2 = 0;
  std::vector<int> v;

  std::cin >> n;

  v.reserve(n);

  for(int i = 0; i < n; ++i)
  {
    std::cin >> coin;

    sum1 += coin;

    v.push_back(coin);
  }

  std::sort(v.begin(), v.end());

  while(sum1 >= sum2)
  {
    sum1 -= v.back();
    sum2 += v.back();
    v.pop_back();

    ++answer;
  }

  std::cout << answer;
}
