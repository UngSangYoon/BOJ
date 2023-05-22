#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main ()
{
	string str;
	stack<int> s;
	int result = 0;

	cin >> str;

	for (int i=0; i<str.size(); i++)
	{
		if (str[i] == '(')
		{
			if (str[i + 1] == ')') {

				result += s.size();
				i++;
			}
			else
				s.push(i);
		}
		else if (str[i] == ')')
		{
			result += 1;
			s.pop();
		}
	}
	cout << result;
}