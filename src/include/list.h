#include <iostream>
#include <vector>

using namespace std;

class List
{
protected:
private:
public:
    List()
    {
        // Constructor
    }
    ~List()
    {
        // Destructor
    }
    vector<string> list;
    string name;

    void printMenu();
    void printList();
    void addItem();
    void deleteItem();
};