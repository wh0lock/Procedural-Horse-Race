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
    int horses[] = {0, 1, 2, 3, 4};
    int horseNum = 0;

    for (horseNum = 0; horseNum < SIZE; horseNum++){
        advance(horseNum);
        printLane(horseNum);
        isWinner(horseNum);
    } // end for
    
    return 0;
} // end main

void advance(){
    std::random_device rd;
    std::uniform_int_distribution<int> dist(0, 1);

    coin = dist(rd);

    if (coin == 1){
        horseNum = horseNum + 1
    } else {
        stay put

void printLane(){
    std::cout << "..............." << std::endl;

bool isWinner(){
    if horseNum in position 5, isWinner gets true
        
