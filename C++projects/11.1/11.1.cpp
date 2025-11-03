
#include <iostream>
#include <thread>
#include <chrono>

int main() {
	std::cout << "Hello, world"; // not flushed yet, stored in buffer
    std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << std::endl;// flush happens here,endl inserts a newline and flushes the buffer
}// there is no need to write return 0; in main function in C++ nowadays
/*The buffer is automatically sent(“flushed”) to the screen when :
• You print a newline(\n) and the stream is connected to a terminal(interactive mode).
• You explicitly call std::flush or use std::endl.
• The program ends normally(return 0;) — the destructor of std::cout flushes it.
• The buffer fills up.*/


