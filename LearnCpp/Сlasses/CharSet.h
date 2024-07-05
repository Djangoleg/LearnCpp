//
// Created by ok on 03.07.24.
// Проект 9.1. Класс множества для символов.
//

#ifndef LEARNCPP_CHARSET_H
#define LEARNCPP_CHARSET_H

const int MaxSize = 100;

class CharSet
{
    // Количество членов.
    int len;

    // На этом массиве и будет построено множество.
    char members[MaxSize];

    // Выполняет поиск злемента.
    int find(char ch);

public:

    // Построение пустого множества.
    CharSet()
    {
        len = 0;
    }

    // Получение количества элементов в множестве.
    int getLength()
    {
        return len;
    }

    // Отображение множества.
    void showset();

    // Проверка членства.
    bool isMember(char ch);


    // Добавление элемента.
    CharSet operator+(char ch);

    // Удаление элемента.
    CharSet operator-(char ch);

    // Объединение множеств.
    CharSet operator+(CharSet ob);

    // Получение разности множеств.
    CharSet operator-(CharSet ob);
};

#endif //LEARNCPP_CHARSET_H
