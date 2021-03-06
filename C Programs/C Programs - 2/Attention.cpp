#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int no_of_people;
    string direction;
    cin >> no_of_people >> direction;

    vector <int> west_till(no_of_people, 0);
    for(int i = 1; i < no_of_people; i++)
        west_till[i] = west_till[i - 1] + (direction[i - 1] == 'W');

    vector <int> east_from(no_of_people, 0);
    for(int i = no_of_people - 2; i >= 0; i--)
        east_from[i] = east_from[i + 1] + (direction[i + 1] == 'E');

    int minimum_turns = no_of_people + 1;
    for(int i = 0; i < no_of_people; i++)
        minimum_turns = min(minimum_turns, west_till[i] + east_from[i]);

    cout << minimum_turns;
    return 0;
}
