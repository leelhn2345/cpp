#include "include/database.h"

void Database::write(vector<vector<string>> mainList)
{
    ofstream db;
    db.open("db/list.sl");

    if (db.is_open())
    {
        for (int i = 0; i < int(mainList.size()); i++)
        {
            for (int j = 0; j < int(mainList[i].size()); j++)
            {
                if (j == 0)
                {
                    db << '#' << mainList[i][j] << endl;
                }
                else
                {
                    db << mainList[i][j] << endl;
                }
            }
            db << "%" << endl;
        }
    }
    else
    {
        cout << "cannot open file for writing" << endl;
    }

    db.close();
}

vector<vector<string>> Database::read()
{
    ifstream db;
    string line;
    vector<string> userList;
    db.open("db/list.sl");

    if (db.is_open())
    {
        while (getline(db, line, '\n'))
        {
            if (line.front() == '#')
            {
                cout << "Found a hashtag:" << line << endl;
                line.erase(line.begin());
                userList.push_back(line);
            }
            else if (line.front() == '%')
            {
                cout << "found a percentage:" << line << endl;
                mainList.push_back(userList);
                userList.clear();
            }
            else
            {
                cout << "Found a item: " << line << endl;
                userList.push_back(line);
            }
        }
    }
    else
    {
        cout << "cannot open file for reading." << endl;
    }

    return mainList;
}