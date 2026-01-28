#include <iostream>
#include <random>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int SIZE = 5;

int main(){
	int horses[] = {0, 0, 0, 0, 0};
	int horseNum = 0;
        std::string enter;
	bool keepGoing = true;

	while (keepGoing){
		for (horseNum = 0; horseNum < SIZE; horseNum++){
			advance(horseNum, horses);
			printLane(horseNum, horses);
		} // end for
		std::cout << "Press enter for another turn";
		std::cin >> enter;
		if (enter == ""){
			keepGoing = true;
		} else {
			keepGoing = false;
		} // end if
	} // end while
	return 0;
} // end main

void advance(int horseNum, int* horses){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);

	int coin = dist(rd);

	horses[horseNum] += coin;
} // end advance

void printLane(int horseNum, int* horses){
	std::cout << horseNum << ".............." << std::endl;
} // end printLane

bool isWinner(int horseNum, int* horses){
	if (horses[horseNum] = 5){
		std::cout << horseNum << " WINS!!!" << std::endl;
	} // end if
	return 0;
} // end isWinner
