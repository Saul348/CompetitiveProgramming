/*#include<iostream>
#include<string>
#include<vector>
#include<math.h>
std::string who_is_next(const std::vector<std::string>& names, long long r) {
	r--;
	std::string result;
	unsigned int lenght = names.size() + r, count = 2, n = 0;
	if (names.size() == 1)return names[0];
	
	while (pow(2, n) <= lenght / names.size()) {
		if (lenght % names.size() == 0 && pow(2, n) == lenght / names.size())
		{
			std::cout << names[0];
			return names[0];
		}
		else { count=pow(2,n),n++;}
	}
	count= int((lenght% (count* names.size()))/count);
	std::cout<< names[count];
	return names[count];
	
}
int main() {
	std::vector<std::string> prueba{"sheldon", "leonard", "penny", "rajesh","howard"};
	who_is_next(prueba, 10010);
}*/