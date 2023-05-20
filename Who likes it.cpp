/*#include<iostream>
#include<vector>
#include<string>
std::string likes(const std::vector<std::string>& names)
{
    std::vector<std::string> key_words = { " like this ", " and " , " , " , "others" };
    std::string result;
    if (names.size() == 0) return std::string("No one likes this");
    if (names.size() <= 3) {
        for (auto i = 0; i < names.size(); i++)
            result += names[i] +key_words[names.size()-(i+1)];
    }
    std::cout << result;
    return ""; 
}
int main() {
    std::vector<std::string> prueba={"Andrea", "Michin"};
    likes(prueba);
}*/