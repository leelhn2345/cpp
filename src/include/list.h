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
    vector<vector<string>> mainList;
    string name;
    int currentUserIdx;

    void printMenu();
    void printList();
    void addItem();
    void deleteItem();
    bool findUserList();
    void saveList();
};