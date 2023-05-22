#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N);
	vector<int> NGE(N);
	
	for (int i = 0; i < N; i++)
		cin >> A[i];

	stack<int> s;
	s.push(0);
	for (int i = 1; i < N; i++)
	{
		if (s.empty())
		{
			s.push(i);
		}

		while (!s.empty() && A[s.top()] < A[i]) 
		{
			NGE[s.top()] = A[i];
			s.pop();
		}
		s.push(i); 
	}
	while (!s.empty())
	{
		NGE[s.top()] = -1;
		s.pop();
	}
	for (int i = 0; i < N; i++)
	{
		cout << NGE[i] << ' ';
	}
	
	return 0;
}