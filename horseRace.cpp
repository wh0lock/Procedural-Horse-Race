#include <iostream>
#include <random>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int SIZE = 5;

int main(){
	int horses[] = {0, 1, 2, 3, 4, 5};
	int horseNum = 0;

	for (horseNum = 0; horseNum < SIZE; horseNum++){
		advance(horseNum, horses);
		std::cout << horseNum << std::endl;
	} // end for
	
	return horseNum;
	return 0;
} // end main

void advance(horseNum){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);

	int coin = dist(rd);

	if (coin == 1){
		horseNum++;
	} else {
		horseNum == horseNum;
	}
} // end advance


