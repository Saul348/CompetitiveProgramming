/*#include<iostream>
unsigned int countBits(unsigned long long n) {
	unsigned int count=0;
	if (n == 0)
		return 0;
	while (n >= 1) {
		if (n % 2 == 1) {
			count++;
		}
		n = n / 2;
	}
	if (count == 0)
		count++;
	return count;
}
int main() {
	countBits(3811);
}*/