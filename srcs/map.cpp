#include "tests.hpp"

void map_test()
{
	std::map<char, int> std_map1;
	std::map<char, int> std_map2;
	ft::map<char, int> ft_map1;
	ft::map<char, int> ft_map2;

	ft_map1['x'] = 8;
	ft_map1['y'] = 16;
	ft_map1['z'] = 32;
	ft_map2 = ft_map1;
	ft_map1 = ft::map<char, int>();

	std::cout << "========== Capacity TEST ==========" << std::endl; 
	std::cout << "Size of ft_map1 : " << ft_map1.size() << std::endl;
	std::cout << "Size of ft_map2 : " << ft_map2.size() << std::endl;
	std::cout << "ft_map1 empty: " << ft_map1.empty() << std::endl;
	std::cout << "ft_map2 empty: " << ft_map2.empty() << std::endl;
	std::cout << "ft_map1 max_size: " << ft_map1.max_size() << std::endl;
	std::cout << "ft_map2 max_size: " << ft_map2.max_size() << std::endl;
	std::cout << "std_map1 max_size:" << std_map1.max_size() << std::endl;
	
	std::cout << "========= Element access TEST ==========" << std::endl;
	std::cout << "ft_map2 ['x'] is " << ft_map2['x'] << std::endl;
	std::cout << "ft_map2 ['y'] is " << ft_map2['y'] << std::endl;
	std::cout << "ft_map2 ['z'] is " << ft_map2['z'] << std::endl;
	std::cout << "ft_map2 [10] is " << ft_map2[10] << std::endl;

	std::cout << "========== Observers TEST==========" << std::endl;
	ft::map<char,int>::reverse_iterator ft_it = ft_map2.rbegin();
	ft::map<char,int>::key_compare mycmp = ft_map2.key_comp();
	std::cout << "check : " << ft_it->first << std::endl;
	while (mycmp((*ft_it++).first, 'z'))
	{
		std::cout << ft_it->first << " => " << ft_it->second << std::endl;
	}
	std_map1['a'] = 10;
	std_map1['b'] = 11;
	std_map1['c'] = 112;
	ft::pair<char, int> highest = *ft_map2.rbegin();
	ft::map<char,int>::iterator ft_it2 = ft_map2.begin();
	ft_it2++;
	while (ft_map2.value_comp()(*ft_it2, highest))
	{
		std::cout << ft_it2->first << std::endl;
		++ft_it2;
	}
	std::cout << "========== Operations TEST==========" << std::endl;
	ft::map<char,int>::iterator ft_it3 = ft_map2.find('y');
	std::cout << "ft_it2 [y] : " << ft_map2['y'] << std::endl;
	if (ft_it3 != ft_map2.end())
		ft_map2.erase(ft_it3);
	std::cout << "ft_it2 [y] : " << ft_map2['y'] << std::endl;

	char c;
	for (c = 'w'; c < 'z'; c++)
	{
		std::cout << "c : " << c;
		if (ft_map2.count(c) > 0)
			std::cout << " is an element of mymap" << std::endl;
		else
			std::cout << " is not an element of mymap" << std::endl;
	}
	ft::map<char,int>:: iterator itlow, itup;
	itlow = ft_map2.lower_bound('x');
	itup = ft_map2.upper_bound('x');

	std::cout << "itlow : " << itlow->first << " itup : " << itup->first << std::endl;

	ft::pair<ft::map<char,int>::iterator,ft::map<char,int>::iterator> ret;
	ret = ft_map2.equal_range('y');

	std::cout << "lower bound : " << ret.first->first << std::endl;	
	std::cout << "upper bound : " << ret.second->first << std::endl;	

	std::cout << "========== Modifiers TEST ==========" << std::endl;
	ft::map<char, int> ft_map3;

	ft_map3.insert (ft::pair<char,int> ('a', 100));
	ft_map3.insert (ft::pair<char,int> ('z', 200));

	ft::pair<ft::map<char,int>::iterator, bool> ret2;
	ret2 = ft_map3.insert (ft::pair<char, int>('z', 500) );
	if (ret2.second == false)
	{
		std::cout << "element 'z' already existd";
		std::cout << " with a value of " << ret2.first->second << std::endl;
	}
	ft::map<char,int>::iterator ft_it4 = ft_map3.begin();
	ft_map3.insert (ft_it4, ft::pair<char,int>('b',300)); 
	ft_map3.insert (ft_it4, ft::pair<char,int>('c',400)); 
	ft::map<char,int> anothermap;
	anothermap.insert(ft_map3.begin(),ft_map3.find('c'));
	std::cout << "ft_map3 contains:\n";
	for (ft_it4=ft_map3.begin(); ft_it4!=ft_map3.end(); ++ft_it4)
		std::cout << ft_it4->first << " => " << ft_it4->second << '\n';
	std::cout << "anothermap contains:\n";
	for (ft_it4=anothermap.begin(); ft_it4!=anothermap.end(); ++ft_it4)
		std::cout << ft_it4->first << " => " << ft_it4->second << '\n';
	std::cout << "anothermap.size() :  " << anothermap.size() << std::endl;
	anothermap.clear();
	std::cout << "anothermap.size() :  " << anothermap.size() << std::endl;
	std::cout << "anothermap contains:\n";
	for (ft_it4=anothermap.begin(); ft_it4!=anothermap.end(); ++ft_it4)
		std::cout << ft_it4->first << " => " << ft_it4->second << '\n';
	std::cout << "empty container !!" << std::endl;

	ft::map<char, int> swap1, swap2;

	swap1['x'] = 100;
	swap1['y'] = 200;

	swap2['a'] = 11;
	swap2['b'] = 22;
	swap2['c'] = 33;

	swap1.swap(swap2);

	std::cout << "========== SWAP TEST ==========\n";
	for (ft::map<char, int>::iterator ft_it5 = swap1.begin(); ft_it5 != swap1.end(); ++ft_it5)
		std::cout << "swap1->first : " << ft_it5->first << " swap->second "<< ft_it5->second << std::endl;
	for (ft::map<char, int>::iterator ft_it5 = swap2.begin(); ft_it5 != swap2.end(); ++ft_it5)
		std::cout << "swap2->first : " << ft_it5->first << " swap->second "<< ft_it5->second << std::endl;
	std::cout << "========== ERASE TEST ==========\n";
	ft::map<char, int> erase_map;
	std::map<char, int> erase_map2;
	ft::map<char, int>::iterator erase_it;
	std::map<char, int>::iterator erase_it2;

	erase_map['a'] = 10;
	erase_map['b'] = 20;
	erase_map['c'] = 30;
	erase_map['d'] = 40;
	erase_map['e'] = 50;
	erase_map['f'] = 60;

	erase_map2['a'] = 10;
	erase_map2['b'] = 20;
	erase_map2['c'] = 30;
	erase_map2['d'] = 40;
	erase_map2['e'] = 50;
	erase_map2['f'] = 60;
	std::cout << "ite : " << (erase_map.begin())->first << std::endl;

	ft::map<char, int>::iterator rite2 = erase_map.end();
	std::map<char, int>::iterator rite3 = erase_map2.end();

	std::cout << "rite2 : " << (--rite2)->first << std::endl;
	std::cout << "rite3 : " << (--rite3)->first << std::endl;

	erase_it = erase_map.find('b');
	erase_map.erase('c');

	erase_it = erase_map.find('e');
	erase_map.erase(erase_it, erase_map.end() );

	for (erase_it = erase_map.begin(); erase_it != erase_map.end(); erase_it++)
		std::cout << erase_it->first << " => " << erase_it->second << std::endl;
}