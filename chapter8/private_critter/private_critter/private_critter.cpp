#include <iostream>
using namespace std;

class Critter
{
    public:
        Critter(int hunger = 0);
        int GetHunger() const;
        void SetHunger(int hunger);
    private:
        int m_Hunger;

};
Critter::Critter(int hunger): 
m_Hunger(hunger)
{
    cout << "A new critter has been born!" << "\n";
}
int Critter::GetHunger() const
{
    return m_Hunger;
}
void Critter::SetHunger(int hunger)
{
    if (hunger < 0)
    {
        cout << "you can't set a critter's hunger to a negative number\n\n";
    }
    else
    {
        m_Hunger = hunger;
    }
}
int main()
{
    Critter crit(5);
    cout << crit.GetHunger() << "\n\n";
    crit.SetHunger(-1);
    crit.SetHunger(9);
    cout << crit.GetHunger() << "\n\n";
    return 0;
}


