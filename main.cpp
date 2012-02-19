//  Dice Nattions, A tool to help people who take medication keep track of it.
//  Copyright (C) 2012 James Knight <jamesknight313 AT gmail.com>

//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.

//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.

//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seeding random numbers.
    srand((unsigned)time(0));
    // Declaring variables.
    // Nation name.
    string nation_name;
    // Nation population.
    int nation_pop;
    // Nation economy.
    int nation_econ;
    // Nation heatlh.
    float nation_life;
    // Nation education;
    int nation_iq;
    // Nation military sixe.
    int nation_mil;
    // Yes/No for running program
    char runprogram;
    // Maximum turns to play.
    int max_turns;
    // Current turn.
    int curr_turn;

    // Asking to run program.
    cout << "Would you like to play Dice Nations? [Y/N]: ";
    cin >> runprogram;

    while (toupper(runprogram) == 'Y')
    {

        // Needed to fix text skip bug.
        cin.ignore(1);
        // Asking for nation name.
        cout << "What is your nation's name?: ";
        getline (cin,nation_name);
        cout << "How many turns will you play?: ";
        cin >> max_turns;
        nation_pop = 1000;
        nation_econ = 1000000;
        nation_life = 40;
        nation_iq = 80;
        nation_mil = 100;
        curr_turn = 0;

        while (curr_turn != max_turns)
        {
            cout << "Your nation stats are like this: " << endl;
            cout << "Nation name: " << nation_name << "." << endl;
            cout << "Nation population: " << nation_pop << "." << endl;
            cout << "Nation economy: $" << nation_econ << "." << endl;
            cout << "Nation life expectancy: " << nation_life << "." << endl;
            cout << "Nation IQ: " << nation_iq << "." << endl;
            cout << "Nation military size: " << nation_mil << "." << endl;
            cout << "Turn " << curr_turn << " of " << max_turns << "." << endl;
            cout << "Press enter to roll the dice.";
            cin.ignore(1);
            int dice_roll = rand() % 6 + 1;
            cout << "You rolled a " << dice_roll << "." << endl;
            if (dice_roll == 1)
            {
                nation_pop = nation_pop * 0.95;
                nation_econ = nation_econ * 0.95;
                nation_life = nation_life - 1;
                nation_iq = nation_iq - 2;
                nation_mil = nation_mil * 0.95;
            }
            if (dice_roll == 2)
            {
                nation_pop = nation_pop * 0.97;
                nation_econ = nation_econ * 0.97;
                nation_life = nation_life - 0.5;
                nation_iq = nation_iq - 1;
                nation_mil = nation_mil * 0.97;
            }
            if (dice_roll == 3)
            {
                nation_pop = nation_pop * 0.99;
                nation_econ = nation_econ * 0.99;
                nation_life = nation_life - 0.1;
                nation_iq = nation_iq - 1;
                nation_mil = nation_mil * 0.99;
            }
            if (dice_roll == 4)
            {
                nation_pop = nation_pop * 1.01;
                nation_econ = nation_econ * 1.01;
                nation_life = nation_life + 0.1;
                nation_iq = nation_iq + 1;
                nation_mil = nation_mil * 1.01;
            }
            if (dice_roll == 5)
            {
                nation_pop = nation_pop * 1.03;
                nation_econ = nation_econ * 1.03;
                nation_life = nation_life + 0.5;
                nation_iq = nation_iq + 1;
                nation_mil = nation_mil * 1.03;
            }
            if (dice_roll == 6)
            {
                nation_pop = nation_pop * 1.05;
                nation_econ = nation_econ * 1.05;
                nation_life = nation_life + 1;
                nation_iq = nation_iq + 2;
                nation_mil = nation_mil * 1.05;
            }
            curr_turn++;
        }
        cout << "Nation name: " << nation_name << "." << endl;
        cout << "Nation population: " << nation_pop << "." << endl;
        cout << "Nation economy: $" << nation_econ << "." << endl;
        cout << "Nation life expectancy: " << nation_life << "." << endl;
        cout << "Nation IQ: " << nation_iq << "." << endl;
        cout << "Nation military size: " << nation_mil << "." << endl;
        cout << "Turn " << curr_turn << " of " << max_turns << "." << endl;
        cout << "Would you like to play again? [Y/N]: ";
        cin >> runprogram;
        ofstream scorefile;
        scorefile.open ("scores.txt");
        scorefile << max_turns << " turn game --------------------" << endl;
        scorefile << "Nation name: " << nation_name << "." << endl;
        scorefile << "Nation population: " << nation_pop << "." << endl;
        scorefile << "Nation economy: $" << nation_econ << "." << endl;
        scorefile << "Nation life expectancy: " << nation_life << "." << endl;
        scorefile << "Nation IQ: " << nation_iq << "." << endl;
        scorefile << "Nation military size: " << nation_mil << "." << endl;
        scorefile << "Turn " << curr_turn << " of " << max_turns << "." << endl;
        scorefile << "--------------------" << endl;
        scorefile.close();
    }
    cout << "Please press enter to exit.";
    cin.ignore(1);
    cin.ignore(1);
}
