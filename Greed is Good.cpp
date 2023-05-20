/*#include<iostream>
#include<vector>
int score(const std::vector<int>& dice) {
	int aux[6];
	int score = 0;
	memset(&aux[0], 0, 6 * sizeof(size_t));
	
	for (int i = 0; i < dice.size(); i++) {
		aux[dice[i] - 1]++;
		if (aux[dice[i] - 1] == 3) {
			dice[i] == 1 ? score = 1000 : score = dice[i] * 100;
			aux[dice[i] - 1] = 0;
		}
	}
	score += aux[0] * 100 + aux[4] * 50;
	
	
	return score;
}
int main(){
	std::vector<int> prueba{ 2, 4, 4, 5, 4 };
	std::cout<<score(prueba);
}*/