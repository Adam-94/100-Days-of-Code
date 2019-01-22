#include <iostream>
#include <vector>

int main()
{
	int input;
	std::vector<int> output;

	int temp = 0;

	while (std::cin >> input)
	{
		if (input == 42)
		{
			std::cout << '\n';
			for (const auto i : output)
			{
				std::cout << i << " \n";
			}
		}

		else if (input != 42)
		{
			temp = input;
			output.push_back(temp);
		}
	}

	return 0;
}