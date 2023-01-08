#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string str) {
  stack<char> s;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
		
      s.push(str[i]);
    } else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {
      if (s.empty()) {
        return false;
      }
      char top = s.top();
      s.pop();
      if (str[i] == ')' && top != '(') {
        return false;
      }
      if (str[i] == '}' && top != '{') {
        return false;
      }
      if (str[i] == ']' && top != '[') {
        return false;
      }
    }
  }

  return s.empty();
}

int main() {
  string str;
  cin>>str;
  cout << isBalanced(str) << endl;
  return 0;
}
