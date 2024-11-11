#pragma once
#ifndef SCHEDULE
#define SCHEDULE

#include <chrono>
#include <iostream>
#include <functional>
#include <thread>
#include <string>

void schedule(std::function<void()> func, std::chrono::seconds duration);
void schedule(std::function<void(int)> func, std::chrono::seconds duration, int integer);
void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string str, double d);

#endif

