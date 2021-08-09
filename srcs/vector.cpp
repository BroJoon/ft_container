#include "tests.hpp"

void vector_test()
{
	ft::vector<int> ft_vector;
	std::vector<int> std_vector;

	std::cout << "========== TEST1 Capacity ==========" << std::endl;
	std::cout << "ft_vector empty: " << ft_vector.empty() << std::endl;
	std::cout << "std_vector empty: " << std_vector.empty() << std::endl;
	ft_vector.push_back(42);
	std_vector.push_back(42);
	std::cout << "ft_vector : " << ft_vector[0] <<  std::endl;
	std::cout << "std_vector : " << std_vector[0] << std::endl;
	std::cout << "ft_vector size: " << ft_vector.size() <<  std::endl;
	std::cout << "std_vector size: " << std_vector.size() << std::endl;
	std::cout << "ft_vector max_size: " << ft_vector.max_size() <<  std::endl;
	std::cout << "std_vector max_size: " << std_vector.max_size() << std::endl;
	std::cout << "ft_vector capacity: " << ft_vector.capacity() << std::endl;
	std::cout << "std_vector capacity: " << std_vector.capacity() << std::endl;
	std::cout << "ft_vector empty: " << ft_vector.empty() << std::endl;
	std::cout << "std_vector empty: " << std_vector.empty() << std::endl;
	ft_vector.resize(5);
	std_vector.resize(5);
	ft_vector.push_back(99);
	std_vector.push_back(99);
	std::cout << "ft_vector size: " << ft_vector.size() <<  std::endl;
	std::cout << "std_vector size: " << std_vector.size() << std::endl;
	std::cout << "ft_vector capacity: " << ft_vector.capacity() << std::endl;
	std::cout << "std_vector capacity: " << std_vector.capacity() << std::endl;
	for (int i = 0; i < 5; i++)
	{
		ft_vector.push_back(111);
		std_vector.push_back(111);
	}
	std::cout << "ft_vector capacity: " << ft_vector.capacity() << std::endl;
	std::cout << "std_vector capacity: " << std_vector.capacity() << std::endl;
	ft_vector.reserve(30);
	std_vector.reserve(30);
	std::cout << "ft_vector capacity: " << ft_vector.capacity() << std::endl;
	std::cout << "std_vector capacity: " << std_vector.capacity() << std::endl;
	std::cout << "ft_vector size: " << ft_vector.size() <<  std::endl;
	std::cout << "std_vector size: " << std_vector.size() << std::endl;

	std::cout << "========== TEST2 Element acess ==========" << std::endl;
	ft_vector[3] = 10;
	std_vector[3] = 10;
	std::cout << "ft_vector[3]: " << ft_vector[3] <<  std::endl;
	std::cout << "std_vector[3]: " << std_vector[3] << std::endl;
	std::cout << "ft_vector at(10): " << ft_vector.at(10) <<  std::endl;
	std::cout << "std_vector at(10): " << std_vector.at(10) << std::endl;
	// std::cout << "ft_vector at(100): " << ft_vector.at(100) <<  std::endl;
	// std::cout << "std_vector at(100): " << std_vector.at(100) << std::endl;
	std::cout << "ft_vector front: " << ft_vector.front() <<  std::endl;
	std::cout << "std_vector front: " << std_vector.front() << std::endl;
	std::cout << "ft_vector back: " << ft_vector.back() <<  std::endl;
	std::cout << "std_vector back: " << std_vector.back() << std::endl;

	std::cout << "========== TEST3 Modefiers ==========" << std::endl;
	ft_vector.clear();
	std_vector.clear();
	std::cout << "ft_vector capacity: " << ft_vector.capacity() << std::endl;
	std::cout << "std_vector capacity: " << std_vector.capacity() << std::endl;
	std::cout << "ft_vector size: " << ft_vector.size() <<  std::endl;
	std::cout << "std_vector size: " << std_vector.size() << std::endl;
	ft_vector.push_back(12);
	std_vector.push_back(12);
	ft_vector.push_back(15);
	std_vector.push_back(15);
	ft_vector.pop_back();
	std_vector.pop_back();
	std::cout << "ft_vector size: " << ft_vector.back() <<  std::endl;
	std::cout << "std_vector size: " << std_vector.back() << std::endl;
	std::cout << "ft_vector size: " << ft_vector.size() <<  std::endl;
	std::cout << "std_vector size: " << std_vector.size() << std::endl;
	ft_vector.assign(7, 42);
	std_vector.assign(7, 100);
	std::cout << "ft_vector size: " << ft_vector.size() <<  std::endl;
	std::cout << "std_vector size: " << std_vector.size() << std::endl;
	std::cout << "ft_vector capacity: " << ft_vector.capacity() << std::endl;
	std::cout << "std_vector capacity: " << std_vector.capacity() << std::endl;
	ft::vector<int>::iterator ft_it;
	std::vector<int>::iterator std_it;
	ft_it = ft_vector.begin();
	std_it = std_vector.begin();
	ft::vector<int>::iterator ft_ite;
	std::vector<int>::iterator std_ite;
	ft_ite = ft_vector.end();
	std_ite = std_vector.end();
	std::cout << "'ft_vector it: " << *ft_it << std::endl;
	std::cout << "'std_vector it: " << *std_it << std::endl;
	std::cout << "'ft_vector ite: " << *ft_ite << std::endl;
	std::cout << "'std_vector ite: " << *std_ite << std::endl;
	int ft_idx = 0;
	int std_idx = 0;
	while (ft_it != ft_ite)
	{
		std::cout << "ft_it : " << *ft_it << std::endl;
		ft_it++;
		ft_idx++;
	}
	while (std_it != std_ite)
	{
		std::cout << "std_it : " << *std_it << std::endl;
		std_it++;
		std_idx++;
	}
	std::cout << ft_idx << " " << std_idx << std::endl;
	std_it = std_vector.begin();
	std_ite = std_vector.end();
	ft_vector.assign(std_it, std_ite);
	ft_it = ft_vector.begin();
	ft_ite = ft_vector.end();
	while (ft_it != ft_ite)
	{
		std::cout << "ft_it : " << *ft_it << std::endl;
		ft_it++;
	}
	ft_it = ft_vector.begin();
	ft_ite = ft_vector.end();
	std::cout << "ft_vector size: " << ft_vector.size() <<  std::endl;
	std::cout << "std_vector size: " << std_vector.size() << std::endl;
	ft_vector.insert (ft_it + 3, 444);
	std_vector.insert (std_it + 3, 444);
	std::cout << "ft_vector size: " << ft_vector.size() <<  std::endl;
	std::cout << "std_vector size: " << std_vector.size() << std::endl;
	std::cout << "ft_vector [3] : " << ft_vector[3] << std::endl;
	std::cout << "std_vector [3] : " << std_vector[3] << std::endl;
	int myarray [] = {501, 502, 503};
	ft_vector.insert(ft_vector.begin(), myarray, myarray + 3);
	std_vector.insert(std_vector.begin(), myarray, myarray + 3);
	for (size_t i = 0; i < ft_vector.size() && i < std_vector.size(); i++)
	{
		std::cout << 
		"ft_vector [" << i << "]: " << ft_vector[i] << " " << 
		"std_vector ["<< i << "]: " << std_vector[i] << std::endl;
	}
	ft::vector<int> tmp(5, 88);
	ft_vector.swap(tmp);
	for (size_t i = 0; i < ft_vector.size(); i++)
	{
		std::cout << "ft_vector [" << i << "]: " << ft_vector[i] << " " << std::endl;
	}
	for (size_t i = 0; i < tmp.size(); i++)
	{
		std::cout << "tmp [" << i << "]: " << tmp[i] << " " << std::endl;
	}
	tmp.erase(tmp.begin() + 6);
	std::cout << "========== tmp[5] erase ==========" << std::endl;
	for (size_t i = 0; i < tmp.size(); i++)
	{
		std::cout << "tmp [" << i << "]: " << tmp[i] << " " << std::endl;
	}
	tmp.erase(tmp.begin() + 5, tmp.end());
	std::cout << "========== tmp[5] ~ tmp.end() erase ==========" << std::endl;
	for (size_t i = 0; i < tmp.size(); i++)
	{
		std::cout << "tmp [" << i << "]: " << tmp[i] << " " << std::endl;
	}
	std::cout << "==========TEST4 reverse iterator ==========" << std::endl;
	ft::vector<int> ft_vector2;
	std::vector<int> std_vector2;

	for (int i = 0; i < 5; i++)
	{
		ft_vector2.push_back(i + 1);
		std_vector2.push_back(5 - i);
	}

	ft::vector<int>::reverse_iterator ft_rit = ft_vector2.rbegin();
	ft::vector<int>::reverse_iterator ft_rite = ft_vector2.rend();
	std::vector<int>::reverse_iterator std_rit = std_vector2.rbegin();
	std::vector<int>::reverse_iterator std_rite = std_vector2.rend();
	while (ft_rit != ft_rite && std_rit != std_rite)
	{
		std::cout << "ft_rit : " << *ft_rit << " std_rit : " << *std_rit << std::endl;
		++ft_rit;
		++std_rit;
	}
	std_vector2.insert(std_vector2.begin(), std_vector2.begin(), std_vector2.end());
	ft_vector2.insert(ft_vector2.begin(), ft_vector2.begin(), ft_vector2.end());
	size_t i = 0;
	while (i < std_vector2.size() && i < ft_vector2.size())
	{
		std::cout << 
		"ft_vector2[" << i << "] : " << ft_vector2[i] << 
		" std_vector2[" << i << "] : " << std_vector2[i] << 
		std::endl;
		i++;
	}
}