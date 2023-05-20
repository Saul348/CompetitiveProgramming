/*#include<iostream>
#include<string>

bool XO(const std::string& str)
{
	int array[2] = { 0,0 };
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'o' || str[i] == 'O')
			array[0]++;
		else if (str[i] == 'x' || str[i] == 'X')
			array[1]++;
		}
	
	return (array[0] == array[1] ? true : false);
}

int main() {
	if (XO("1azg"))
		std::cout << "true" << std::endl;
	else
		std::cout << "false";
}*/
