/*#include<iostream>
#include<string>
#include<vector>
class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
        int limite=(2*nFloors)-1 , posicion=limite/2;
        std::vector<std::string> arbol(nFloors);
        for (int i = 0; i < nFloors; i++) {
            for (int j = 0; j <limite; j++) {
                j >=posicion && j <(posicion + (((i+1) * 2) - 1))? arbol[i] +='*': arbol[i] +=' ';
            }
            posicion--;
        } 
       
       return arbol;
    }
    void print(std::vector<std::string> &test);
};
void Kata::print(std::vector<std::string>& test) {
    for (auto i : test)
        std::cout << i << std::endl;
}

int main() {
    Kata prueba;
    prueba.towerBuilder(2);

}*/