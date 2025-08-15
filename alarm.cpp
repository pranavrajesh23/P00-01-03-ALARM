#include<iostream>
using namespace std;

void leaveBedFunction()
{
    cout<<"\nLeave the bed.\n";
    cout<<"\nTurns off the alarm.\n";
}

void lateFunction()
{
    cout<<"\nWill you be late if you sleep for a long time?(yes/no)\n";
    string late;
    cin>>late;
    if(late=="yes")
    {
        leaveBedFunction();
    }
    else
    {
        snoozeFunction();
    }
}

void readyFunction()
{
    cout<<"\nAre you ready to wake?(yes/no)\n";
    string ready;
    cin>>ready;
    if(ready=="yes")
    {
        leaveBedFunction();
    }
    else
    {
        lateFunction();
    }
}

void alarmFunction()
{
    cout<<"\nAlarm is ringing.......\n";
    readyFunction();
}

int main()
{
    cout<<"Start of the program\n";
    alarmFunction();
    cout<<"\nEnd of the program\n";
}
