#pragma once
#include <iostream>

using namespace std;

template <typename Type>
Type GetCorrectData(Type min, Type max)
{
    Type x;
    while ((cin >> x).fail() || cin.peek() != '\n' || x < min || x > max)
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "\n����������, ������� ���������� ������! ������ ������ ������ � ���������� [" << min << " - " << max << "]";
        cout << "\n��������� ����: ";
    }

    cin.ignore(INT_MAX, '\n');
    return x;
}

inline string GetCorrectSeason()
{
    string season;
    while (true)
    {
        getline(cin, season);
        for (auto& c : season) {
            c = tolower(c);
        }

        if (season == "�����" || season == "����" || season == "�����" || season == "����")
        {
            return season;
        }
        cout << "\n����������, ������� ���������� ����� ���� [�����, ����, �����, ����]: ";
    }
}