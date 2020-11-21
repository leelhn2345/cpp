#include "include/list.h"
#include "include/database.h"

int main(int argc, char *argv[]) // *argv[] refers to an array of pointers pointing to input arguments
{
    cout << "Hello World!" << endl;
    cout << "WTF is this" << endl;

    List simpleList;
    Database data;

    if (argc > 1)
    {
        simpleList.name = argv[1];
        simpleList.mainList = data.read();
        simpleList.findUserList();
        simpleList.findUserList();
        simpleList.printMenu();
        data.write(simpleList.mainList);
    }
    else
    {
        cout << "username not supplied... exiting the program" << endl;
    }

    return 0;
}
