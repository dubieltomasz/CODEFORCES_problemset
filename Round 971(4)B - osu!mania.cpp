#pragma GCC optimize("Ofast,unroll-loops")

#include <iostream>
#include <vector>
#include <stack>

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t, n;
  std::string s;
  std::stack<int> st;
  std::vector<std::stack<int>> v;

  std::cin >> t;

  for(int i = 0; i < t; ++i)
  {
    std::cin >> n;
    
    for(int j = 0; j < n; ++j)
    {
      std::cin >> s;

      for(int i = 0; i < 4; ++i)
        if(s[i] == '#')
        {
          st.push(i+1);
          break;
        }
    }

    v.push_back(st);

    while(!st.empty())
      st.pop();
  }

  for(std::stack<int>& st : v)
  {
    while(!st.empty())
    {
      std::cout << st.top() << " ";
      st.pop();
    }

    std::cout << "\n";
  }
}
