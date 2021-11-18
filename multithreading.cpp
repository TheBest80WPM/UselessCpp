#include <iostream>
#include <thread>
using namespace std;
  
// A dummy function
void foo(int Z)
{
    for (int i = 0; i < Z; i++) {
        cout << "Thread using function"
               " pointer as callable\n";
    }
}
  
// A callable object
class thread_obj {
public:
    void operator()(int x)
    {
        for (int i = 0; i < x; i++)
            cout << "Thread using function"
                  " object as  callable\n";
    }
};
  
auto main() -> int
{
    cout << "Threads 1 and 2 and 3 "
         "operating independently" << endl;
  
    // This thread is launched by using 
    // function pointer as callable
    thread th1(foo, 3);
  
    // This thread is launched by using
    // function object as callable
    thread th2(thread_obj(), 3);
  
    auto f = [](int x) {
        for (int i = 0; i < x; i++)
            cout << "Thread using lambda"
             " expression as callable\n";
    };
  
    thread th3(f, 3);

    th1.join();
    th2.join();
    th3.join();
  
    return 0;
}