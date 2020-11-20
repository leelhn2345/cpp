#include "include/list.h"

int main(int argc, char *argv[]) // *argv[] refers to an array of pointers pointing to input arguments
{
    cout << "Hello World!" << endl;
    cout << "WTF is this" << endl;

    if (argc > 1)
    {
        List simpleList;
        simpleList.name = argv[1];
        cout << simpleList.name << endl;
        simpleList.printMenu();
    }
    else
    {
        cout << "username not supplied... exiting the program" << endl;
    }
    return 0;
}
