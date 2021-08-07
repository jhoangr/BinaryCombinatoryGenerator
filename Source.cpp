
#include <iostream>
#include <vector>
using namespace std;

void binGenerator(int &n,vector<vector <bool>> &Solutions,vector<bool> &Solution)
{
	if (n == 0)
	{
		Solutions.push_back(Solution);
	}
	else
	{
		Solution.push_back(0);
		n--;
		binGenerator(n, Solutions, Solution);

		Solution.push_back(1);
		n--;
		binGenerator(n, Solutions, Solution);
	}

	if (!Solution.empty())
	{
		Solution.pop_back();
		n++;
	}
}



int main()
{
	int n = 12;
	vector<vector <bool>> Solutions;
	vector<bool> Solution;
	int i = 0;

	binGenerator(n, Solutions, Solution);
	for (vector<bool> v : Solutions)
	{
		i++;
		cout << "i-th combination->" <<i<<endl;
		for (bool value : v )
		{
			cout << value;
		}
		cout << endl;
	}
}