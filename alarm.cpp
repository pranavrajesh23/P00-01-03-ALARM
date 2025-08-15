#include<iostream>
using namespace std;



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
