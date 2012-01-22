#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
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
    // Dice roll.
    int dice_roll;

    // Asking to run program.
    cout << "Would you like to run Dice Nations? [Y/N]: ";
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
            cout << "Nation population: " << nation_pop << "." << endl;
            cout << "Nation economy: $" << nation_econ << "." << endl;
            cout << "Nation life expectancy: " << nation_life << "." << endl;
            cout << "Nation IQ: " << nation_iq << "." << endl;
            cout << "Nation military size: " << nation_mil << "." << endl;
            cout << "Turn " << curr_turn << " of " << max_turns << "." << endl;
            cout << "Roll the dice and enter what you rolled: " << endl;
            cin >> dice_roll;

            if (dice_roll == 1)
            {
                nation_pop = nation_pop / 0.95;
                nation_econ = nation_econ / 0.95;
                nation_life = nation_life - 1;
                nation_iq = nation_iq - 2;
                nation_mil = nation_mil / 0.95;
            }
            if (dice_roll == 2)
            {
                nation_pop = nation_pop / 0.97;
                nation_econ = nation_econ / 0.97;
                nation_life = nation_life - 0.5;
                nation_iq = nation_iq - 1;
                nation_mil = nation_mil / 0.97;
            }
            if (dice_roll == 3)
            {
                nation_pop = nation_pop / 0.99;
                nation_econ = nation_econ / 0.99;
                nation_life = nation_life - 0.1;
                nation_iq = nation_iq - 1;
                nation_mil = nation_mil / 0.99;
            }
            if (dice_roll == 4)
            {
                nation_pop = nation_pop / 1.01;
                nation_econ = nation_econ / 1.01;
                nation_life = nation_life + 0.1;
                nation_iq = nation_iq + 1;
                nation_mil = nation_mil / 1.01;
            }
            if (dice_roll == 5)
            {
                nation_pop = nation_pop / 1.03;
                nation_econ = nation_econ / 1.03;
                nation_life = nation_life + 0.5;
                nation_iq = nation_iq + 1;
                nation_mil = nation_mil / 1.03;
            }
            if (dice_roll == 6)
            {
                nation_pop = nation_pop / 1.05;
                nation_econ = nation_econ / 1.05;
                nation_life = nation_life + 1;
                nation_iq = nation_iq + 2;
                nation_mil = nation_mil / 1.05;
            }

        }

    }
}