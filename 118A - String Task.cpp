#include <iostream>

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string s, answer = "";
  std::cin >> s;

  for(const char& c : s)
  {
    switch(c)
    {
      case 'A':
        break;
      case 'O':
        break;
      case 'Y':
        break;
      case 'E':
        break;
      case 'U':
        break;
      case 'I':
        break;
      case 'a':
        break;
      case 'o':
        break;
      case 'y':
        break;
      case 'e':
        break;
      case 'u':
        break;
      case 'i':
        break;
      default:
        answer.push_back('.');
        answer.push_back('A' < c && c <= 'Z' ? c+32 : c);
        break;
    }
  }

  std::cout << answer;
}
