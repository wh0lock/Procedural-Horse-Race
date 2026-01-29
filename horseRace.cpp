#include <iostream>
#include <random>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

int main(){
	int horses[] = {0, 0, 0, 0, 0};
	int horseNum = 0;
   	std::string enter;
	bool keepGoing = true;

	while (keepGoing){
		for (horseNum = 0; horseNum < NUM_HORSES; horseNum++){
			advance(horseNum, horses);
			printLane(horseNum, horses);
			if (isWinner(horseNum, horses)) {
				keepGoing = false;
			} // end if
		} // end for
		std::cout << "Press enter for another turn";
		std::cin.ignore();
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
	for (int i = 0; i < TRACK_LENGTH; i++) {
		if (horses[horseNum] == i) {
			std::cout << horseNum;
		} else {
			std::cout << ".";
		} // end if
	} // end for
	std::cout << std::endl;
} // end printLane

bool isWinner(int horseNum, int* horses){
	bool result;
	if (horses[horseNum] >= TRACK_LENGTH){
		std::cout << horseNum << " WINS!!!" << std::endl;
		result = true;
	} // end if
	return result;
} // end isWinner

