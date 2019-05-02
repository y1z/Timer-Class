#include <chrono>
#include <thread>
#include <cinttypes>
#include <iostream>
#include "Timer.h"
//using CurrentTime = std::chrono::high_resolution_clock::time_point

int main() {

	//T_P Start = std::chrono::high_resolution_clock::now();

	//std::this_thread::sleep_for(3s);

	//T_P End = std::chrono::high_resolution_clock::now();
	Timer timer;

	timer.StartTiming();

	std::this_thread::sleep_for(std::chrono::seconds(3));

	timer.EndTiming();

	timer.StartTiming();

	std::this_thread::sleep_for(std::chrono::seconds(2));

	timer.EndTiming();

	std::cin.ignore();
	std::cin.get();

	return 0;
}