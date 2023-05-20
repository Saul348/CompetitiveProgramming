/*#include<iostream>
#include<vector>
#include<string>
std::string who_is_winner(std::vector<std::string> pieces_position_list)
{
	int grid[6][7] = { 0 }, rens=0;
	for (unsigned int i = 0; i < pieces_position_list.size(); i++) {
		if (pieces_position_list[i].length()==5) {
			for (int j = 0; j < 6; j++) {
				if (grid[j][pieces_position_list[i][0] - 65] == 0) {
					grid[j][pieces_position_list[i][0] - 65] = 1;
					rens = j;
					break;
				}
			}
			if(grid[rens][pieces_position_list[i][0] - 65])
		}
		else {
			for (int j = 0; j < 6; j++) {
				if (grid[j][pieces_position_list[i][0] - 65] == 0) {
					grid[j][pieces_position_list[i][0] - 65] = -1;
					rens = j;
					break;
				}
			}
		}
	}



	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			std::cout<<grid[i][j]<<" ";
		}
		std::cout << " " << std::endl;
	}
	return " ";
	

}

int main() {
	std::vector<std::string> prueba = { 
		"A_Red",
		"B_Yellow",
		"A_Red",
		"B_Yellow",
		"A_Red",
		"B_Yellow",
		"G_Red",
		"B_Yellow" };
	who_is_winner(prueba);
	
}*/