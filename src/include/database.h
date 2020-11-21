#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database
{
private:
protected:
public:
    Database()
    {
        // Constructor
    }
    ~Database()
    {
        // Destructor
    }
    vector<vector<string>> mainList;
    string name;

    void write(vector<vector<string>> mainList);
    vector<vector<string>> read();
};