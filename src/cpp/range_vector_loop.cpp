#include <map>
#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<int> v = {0, 1, 2, 3, 4, 5};
	for (auto i : v) {
		cout << i << " ";
	}

	cout << endl;

	map <int, int> nums(
		{
			{1, 1},
			{2, 2},
			{3, 3}
		}
	);

	for (auto i : nums) {
		cout << "{ " << i.first << " : " << i.second << " }" << endl;
	}

	return 0;
}
