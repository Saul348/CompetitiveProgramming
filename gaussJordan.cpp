#include <iostream>

float GaussJordan() {
	
	float matriz[3][4] = { {4,2,3,4}, {4,3,3,2},{5,3,9,5} };
	/*
	{1 , 2/4 , 3/4,| 1}, 
	{-4 , 3 , 3,  | 2},
	{5 , 3 , 9,|5}
	*/

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) { 
			matriz[i][j] = matriz[i][j] / matriz[i][i];
			for (int k = 0; k < 3; k++) {
				if (k == i) {
					continue;
				}
				matriz[k][j] = matriz[k][j] - matriz[k][i] * matriz[i][j];
				
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << matriz[i][j] << std::endl;
		}
		std::cout << " ";
	}
	return 4.5;
}


int main() {
	GaussJordan;

}