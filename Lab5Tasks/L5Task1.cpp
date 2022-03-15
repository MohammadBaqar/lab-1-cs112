#include <iostream>

using namespace std;

class Heater
{

private:
    int temp;

public:
    Heater()
    {

        temp = 15;
    }

    void warmer()
    {

        temp = temp + 5;

        cout << "Current temperature is: " << temp;
    }

    void cooler()
    {

        temp = temp - 5;

        cout << "Current temperature is: " << temp;
    }
};

int main()
{

    int choice;

    Heater c;

choiceMenue:

    system("CLS");

    cout << "Enter temperature condition please\n"
         << "1.Warmer     2.Cooler    \n"
         << "Enter 0 to go to choice menue\n";

    cin >> choice;

    switch (choice)
    {

    case 1:

        c.warmer();

        break;

    case 2:

        c.cooler();

        break;

    default:

        cout << "\nMake an appropriate choice please(0-2)";

        goto choiceMenue;
    }

    cout << "\nEnter 0 to go to choice menue \n";

    cin >> choice;

    if (choice == 0)
    {

        goto choiceMenue;
    }
}
