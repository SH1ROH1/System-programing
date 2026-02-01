#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    cout << "start?" << cin.get() << endl;
    cout << "loading  ";
    std::cout << '-' << std::flush;
    for (int i = 5; i-- > 0; ) {
            sleep(1);
            std::cout << "\b\\" << std::flush;
            sleep(1);
            std::cout << "\b|" << std::flush;
            sleep(1);
            std::cout << "\b/" << std::flush;
            sleep(1);
            std::cout << "\b-" << std::flush;
    }

    cout << "\b Done!" << endl;

    cin.ignore();
    return 0;
}