#include <chrono>
#include <thread>
#include <cinttypes>
#include <iostream>
#include "Timer.h"

int main()
{
  Timer timer;

  timer.StartTiming();

  std::this_thread::sleep_for(std::chrono::seconds(3));

  timer.EndTiming();

  timer.PrintResult();


  std::cin.ignore();
  std::cout << "press enter 2 times ";
  std::cin.get();

  return 0;
}