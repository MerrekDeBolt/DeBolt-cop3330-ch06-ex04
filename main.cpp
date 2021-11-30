/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Merrek DeBolt
 */

#include <iostream>
#include "std_lib_facilities.h"

class Name_value
{
    public:
        string str;
        double value;
};

int main() 
{
    vector<Name_value> list;

    cout << "Please enter a name and double, separated by spaces: ";
    
    Name_value temp;
    int index = 0;
    while (cin >> temp.str >> temp.value)
    {
        if (temp.str == "NoName" && temp.value == 0)
            break;

        for (int index2 = 0; index2 < list.size(); index2++)
            if (temp.str == list[index2].str)
            {
                cout << "Duplicate name entered.";
                return 0;
            }

        list.insert(list.end(), temp);

        cout << "\nPlease enter a name and double, separated by spaces: ";

        index++;
    }

    for (index = 0; index < list.size(); index++)
        cout << list[index].str << " " << list[index].value << "\n";

    return 0;
}