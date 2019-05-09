#include <iostream>
#include <thread>

void thread_function() {
    for (int i = 0; i < 10000; i++);
    std::cout << "thread function Executing" << std::endl;
}

// https://thispointer.com//c-11-multithreading-part-1-three-different-ways-to-create-threads/
int main() {

    std::thread threadObj(thread_function);
    for (int i = 0; i < 10000; i++);
    std::cout << "Display From MainThread" << std::endl;
    threadObj.join();
    std::cout << "Exit of Main function" << std::endl;
    return 0;
}