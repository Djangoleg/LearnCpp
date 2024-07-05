//
// Created by ok on 03.07.24.
//

/*
    CharSet s1,s2,s3;

    s1 = s1 + 'A';
    s1 = s1 + 'B';
    s1 = s1 + 'C';

    cout << "s1 After adding A B C: ";
    s1.showset();

    cout << "\n";

    cout << "Membership \n";

    if (s1.isMember('B'))
    {
        cout << "B is a member of s1.\n";
    }
    else
    {
        cout << "B is not a member of s1.\n";
    }

    if (s1.isMember('T'))
    {
        cout << "T is a member of s1.\n";
    }
    else
    {
        cout << "T is not a member of s1.\n";
    }

    cout << "\n";

    s1 = s1 - 'B';
    cout << "s1 After s1 = s1 - B: ";
    s1.showset();

    cout << "\n";

    s1 = s1 + 'B';
    cout << "s1 After s1 = s1 + B: ";
    s1.showset();

    cout << "\n";

    s1 = s1 - 'A';
    cout << "s1 After s1 = s1 - A: ";
    s1.showset();

    cout << "\n";

    s1 = s1 - 'B';
    cout << "s1 After s1 = s1 - B: ";
    s1.showset();

    cout << "\n";

    s1 = s1 - 'C';
    cout << "s1 After s1 = s1 - C: ";
    s1.showset();

    cout << "\n";

    s1 = s1 + 'A';
    s1 = s1 + 'B';
    s1 = s1 + 'C';

    cout << "s1 After adding A B C: ";
    s1.showset();

    s2 = s2 + 'A';
    s2 = s2 + 'X';
    s2 = s2 + 'W';

    cout << "s2 After adding A X W: ";
    s2.showset();

    cout << "\n";

    s3 = s1 + s2;
    cout << "s3 After adding s3 = s1 + s2: ";
    s3.showset();

    cout << "\n";

    s3 = s3 - s1;
    cout << "s3 After adding s3 = s3 - s1: ";
    s3.showset();

    cout << "\n";

    s2 = s2 - s2;
    cout << "s2 After adding s2 = s2 - s2: ";
    s2.showset();

    cout << "\n";

    s2 = s2 + 'C';
    s2 = s2 + 'B';
    s2 = s2 + 'A';

    cout << "s2 After adding C B A: ";
    s2.showset();
 */

#include "CharSet.h"
#include <iostream>

using namespace std;

int CharSet::find(char ch)
{
    for (int i = 0; i < len; i++)
    {
        if (members[i] == ch)
        {
            return i;
        }
    }

    return -1;
}

void CharSet::showset()
{
    cout << "{ ";
    for (int i = 0; i < len; i++)
    {
        cout << members[i] << " ";
    }

    cout << "}\n";
}

bool CharSet::isMember(char ch)
{
    if (find(ch) != -1)
    {
        return true;
    }

    return false;
}

CharSet CharSet::operator+(char ch)
{
    CharSet newSet;

    if (len == MaxSize)
    {
        cout << "Set is full.\n";
        return *this;
    }

    newSet = *this;

    if (find(ch) == -1)
    {
        newSet.members[newSet.len] = ch;
        newSet.len++;
    }

    return  newSet;
}

CharSet CharSet::operator-(char ch)
{
    CharSet newSet;

    int i = find(ch);

    for (int j = 0; j < len; j++)
    {
        if (j != i)
        {
            newSet = newSet + members[j];
        }
    }

    return newSet;
}

CharSet CharSet::operator+(CharSet ob)
{
    CharSet newSet = *this;

    for (int i = 0; i < ob.len; i++)
    {
        newSet = newSet + ob.members[i];
    }

    return newSet;
}

CharSet CharSet::operator-(CharSet ob)
{
    CharSet newSet = *this;

    for (int i = 0; i < ob.len; i++)
    {
        newSet = newSet - ob.members[i];
    }

    return newSet;
}
