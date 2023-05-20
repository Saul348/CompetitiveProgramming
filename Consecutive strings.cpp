/*#include<iostream>
#include<vector>
#include<string>
class LongestConsec
{
public:
    static std::string longestConsec(std::vector<std::string>& strarr, int k) {
        int index= 0, mayor=-1;
        int limite = (strarr.size() - (k - 1));
        int aux = 0;
        for (auto i = 0; i < limite; i++) {
            for (auto j = 0; j < k; j++) {
                aux+= strarr[i + j].length();
            }
            if (aux > mayor) {
                mayor = aux;
                index = i;
            }
            aux = 0;
            
        }
        std::string regreso;
        for (auto i = 0; i < k; i++) {
            regreso += strarr[index+i];
        }
        std::cout << regreso;
        return "hola";
    }
};
int main() {
    LongestConsec prueba;
    std::vector<std::string> prueba1{ "zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail" };
    prueba.longestConsec(prueba1, 2);
   
}*/