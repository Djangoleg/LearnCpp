//
// Created by ok on 23.06.24.
//
#include <iostream>
using namespace std;

/*
    Queue bigQueue(100);
    for (int i = 0; i < 26; i++)
    {
        bigQueue.set('A' + i);
    }

    for (int i = 0; i < 26; i++)
    {
        cout << bigQueue.get() << ",";
    }

    cout << "\n\n";

    Queue smallQueue(10);

    for (int i = 0; i < 26; i++)
    {
        if (!smallQueue.is_full())
        {
            smallQueue.set('Z' - i);
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (!smallQueue.is_empty())
        {
            cout << smallQueue.get() << ",";
        }
    }

    cout << "\n\n";
*/

static const int maxQsize = 1000;

class Queue {

    char q[maxQsize];
    int size;
    int set_loc, get_loc;

public:

    Queue(int len) {

        if (len > maxQsize)
        {
            len = maxQsize;
        }
        else if (len <= 0)
        {
            len = 1;
        }

        size = len;
        set_loc = get_loc = 0;
    }

    void set(char ch)
    {
        if (is_full())
        {
            return;
        }
        
        q[set_loc++] = ch;
    }

    char get ()
    {
        if (is_empty())
        {
            return 0;
        }

        return q[get_loc++];
    }

    bool is_empty()
    {
        return get_loc == set_loc;
    }

    bool is_full()
    {
        return set_loc == size;
    }
};