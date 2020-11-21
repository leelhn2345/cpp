#include "include/list.h"

void List::printMenu()
{
    int choice;

    cout << "\n*********************\n"
         << endl;
    cout << "1 - print list" << endl;
    cout << "2 - add to list" << endl;
    cout << "3 - delete from list" << endl;
    cout << "4 - save list" << endl;
    cout << "5 - quit" << endl;
    cout << "enter your choice and press return: " << endl;

    cin >> choice;

    if (choice == 5)
    {
        return;
    }
    else if (choice == 4)
    {
        saveList();
    }
    else if (choice == 1)
    {
        printList();
    }
    else if (choice == 2)
    {
        addItem();
    }
    else if (choice == 3)
    {
        deleteItem();
    }
    else
    {
        cout << "Sorry choice not implemented yet." << endl;
    }
}

void List::addItem()
{
    cout << "\n\n\n\n\n\n\n\n"
         << endl;
    cout << "******** ADD ITEM ********" << endl;
    cout << "type in an item and press enter: " << endl;

    string item;
    cin >> item;
    list.push_back(item);

    cout << "successfully added an item to the list \n\n\n\n\n"
         << endl;
    cin.clear();

    printMenu();
}

void List::deleteItem()
{
    cout << "*** Delete Item ***" << endl;
    cout << "Select an item index number to delete" << endl;

    if (list.size())
    {
        for (int i = 0; i < int(list.size()); i++)
        {
            cout << i << ":" << list[i] << endl;
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin() + choiceNum);
    }
    else
    {
        cout << "No items to delete" << endl;
    }

    printMenu();
}

void List::printList()
{
    cout << "\n\n\n\n\n\n"
         << endl;
    cout << "*** Printing List ***" << endl;

    for (int i = 0; i < int(list.size()); i++)
    {
        cout << "*" << list[i] << endl;
    }

    cout << "M - Menu" << endl;

    char choice;
    cin >> choice;

    if (choice == 'M' || choice == 'm')
    {
        printMenu();
    }
    else
    {
        cout << "invalid choice. quitting..." << endl;
    }
}

bool List::findUserList()
{
    bool userFound = false;
    cout << "\n\n\n\n\n\n\n\n"
         << endl;
    cout << "****** Welcome " << name << "******" << endl;

    for (int i = 0; i < int(mainList.size()); i++)
    {
        cout << mainList[i][0] << endl;

        if (mainList[i][0] == name)
        {
            cout << "user has been found:" << mainList[i][0] << endl;
            list = mainList[i];
            currentUserIdx = i;
            userFound = true;
            break;
        }
    }

    if (userFound == false)
    {
        list.push_back(name);
        currentUserIdx = int(mainList.size()) - 1;
    }

    return userFound;
}

void List::saveList()
{
    cout << "saving list..." << endl;
    mainList[currentUserIdx] = list;
    printMenu();
}