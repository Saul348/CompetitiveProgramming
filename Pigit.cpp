/*#include<iostream>
#include<string>
#include<algorithm>
std::string pig_it(std::string str)
{
	std::string tem;
	std::string ay = "ay";
	int count = 0;
	for (size_t i = 0; i < str.length()-1; i++) {
		if (str[i + 1] == ' ') {
			if (count <= 1) 
				 tem=str.substr(count,i+1)+ay+ " ";
			else 
				tem+=str.substr(count, i % count == 0 ? (i/count)*count + 1 : (i / count) * count + i % count + 1)+ ay +" ";
			std::cout << count << std::endl;
			count = i + 2;
			i += 2;}
		std::swap(str[i], str[i+1]);
		}
	if(str[str.length()]=='!')
		tem += str.substr(count, (str.length()-2) % count == 0 ? ((str.length() - 2) / count) * count + 1 : ((str.length() - 2) / count) * count + (str.length() - 2) % count + 1) + ay;
	else 
		tem += str.substr(count, str.length() % count == 0 ? (str.length() / count) * count + 1 : (str.length() / count) * count + str.length() % count + 1) + ay;
	std::cout << tem;
	return tem;
}

int main(){
	pig_it("This is my string");
	
}*/