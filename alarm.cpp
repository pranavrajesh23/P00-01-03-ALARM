#include<iostream>
using namespace std;

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
