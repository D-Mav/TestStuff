#include <iostream>
#include <array>

using namespace std;
int main()
{
	int statues[] = { 6, 2, 3, 8 };
	int size = sizeof(statues) / sizeof(statues[0]);
	int missing = 0;
	int total = 0;
	sort(statues, statues + size); // {2,3,6,8}

	for (int i = 0; i < size; i++) {
		if (statues[i + 1] - statues[i] > 1) {
			missing = (statues[i + 1] - statues[i]) - 1;
			total = total + missing;
		}
	}
	cout << total;

	return 0;
}