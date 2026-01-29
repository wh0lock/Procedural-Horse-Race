# Procedural-Horse-Race
CS121_C Week 4
```
#include <iostream>
#include <random>

functions: 
- void advance(int horseNum, int* horses);
- void printLane(int horseNum, int* horses);
- bool isWinner(int horseNum, int* horses);

const int SIZE = 5

main(){
    int horses[] = {0, 0, 0, 0, 0};
    int horseNum = 0;
    std::string enter;
    bool keepGoing = true;

    while keepGoing:
    for (horseNum = 0; horseNum < SIZE; horseNum++){
        advance(horseNum);
        printLane(horseNum);
        isWinner(horseNum);
    } // end for
    
    std::cout << "Press enter for another turn";
    std::cin >> enter;

    if enter is ""; keepGoing is true
    else keepGoing is false (exit loop)

    return 0;
} // end main

void advance(){
    std::random_device rd;
    std::uniform_int_distribution<int> dist(0, 1);

    coin = dist(rd);

    horses[horseNum] += coin;
] // end advance

void printLane(){
    std::cout << "..............." << std::endl;
} // end printLane

bool isWinner(){
    if horseNum in position 5, isWinner gets true
        
