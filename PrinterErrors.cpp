/*#include<iostream>
#include<string>
class Printer
{
public:
    static std::string printerError(const std::string& s) {
        std::string regreso;
        int count=0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] > 'm') {
                count++;
            }
        }
        regreso = std::to_string(count)+ std::string("/") + std::to_string(s.length()) ;
        return regreso;
    }
};

int main() {
    Printer Prueba;
    std::cout << Prueba.printerError("kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyzuuuuu");
    
}*/