#include<iostream>
using namespace std;

void tunnel()
{
    cout <<"\nDid you find a tunnel?(yes/no)\n";
    string tunnel;
    cin>>tunnel;
    if(tunnel=="yes")
    {
        cout<<"\nUse the tunnel\ncrossed successfully\n";
    }
    else
    {
        cout<<"\nDidnt find any tunnel\n";
        crossing();
    }
}

void footBridge()
{
    cout <<"\nDid you find a footbridge?(yes/no)\n";
    string foot;
    cin>>foot;
    if(foot=="yes")
    {
        cout<<"\nUse the footbridge\ncrossed successfully\n";
    }
    else
    {
        cout<<"\nDidnt find any footbridge\n";
        tunnel();
    }
}

int main()
{
    cout<<"Strat of the program\n";
    footBridge();
    cout<<"End of the program\n";
}