#include <iostream>

using namespace std;

class scores
{
    int Maths;
    int Physics;
    int Chemistry;
    public:
        void initial(void);
        void display(void);
};

void scores :: initial(void)
{
    cout << "Enter Maths scores:";
    cin >> Maths;
    cout << "Enter Physics scores:";
    cin >> Physics;
    cout << "Enter Chemistry scores: ";
    cin >> Chemistry;
}

void scores :: display(void)
{
    cout << "\nMaths: " << Maths << "\tPhysics: " << Physics << "\tChemistry: " << Chemistry;
    //cout << "\tPhysics: " << Physics;
    //cout << "\tChemistry: " << Chemistry;
}

int main()
{
    scores s;
    s.initial();
    s.display();

    return 0;
}
