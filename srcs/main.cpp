#include "tests.hpp"
#include <string>
#include <cstring>

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		std::cout << "usage : " << argv[0] << " container_name" << std::endl;
		return 1;
	}

	for (int i = 1; i < argc; ++i)
	{
		if (strcmp(argv[i], "stack") == 0)
			stack_test();
		else if (strcmp(argv[i], "vector") == 0)
			vector_test();
		else if (strcmp(argv[i], "map") == 0)
			map_test();
		else
		{
			std::cout << "Wrong container_name : " << argv[i] << std::endl;
			return 1;
		}
	}

	return 0;
}