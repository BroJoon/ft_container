#include "tests.hpp"

void stack_test()
{
	ft::stack<int> ft_stack;
	std::stack<int> std_stack;

	ft_stack.push(100);
	std_stack.push(100);

	std::cout << "ft_stack top: " << ft_stack.top() << std::endl;
	std::cout << "std_stack top: " << std_stack.top() << std::endl;

	ft_stack.push(1001);
	std_stack.push(1001);
	
	std::cout << "ft_stack size: " << ft_stack.size() << std::endl;
	std::cout << "std_stack size: " << std_stack.size() << std::endl;

	ft_stack.pop();
	std_stack.pop();

	std::cout << "ft_stack size: " << ft_stack.size() << std::endl;
	std::cout << "std_stack size: " << std_stack.size() << std::endl;

	std::cout << "ft_stack top: " << ft_stack.top() << std::endl;
	std::cout << "std_stack top: " << std_stack.top() << std::endl;

	std::cout << "ft_stack empty: " << ft_stack.empty() << std::endl;
	std::cout << "std_stack empty: " << std_stack.empty() << std::endl;

	ft_stack.pop();
	std_stack.pop();

	std::cout << "ft_stack empty: " << ft_stack.empty() << std::endl;
	std::cout << "std_stack empty: " << std_stack.empty() << std::endl;
}
