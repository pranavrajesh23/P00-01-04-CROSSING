#include<iostream>
using namespace std;




void crossing()
{
    cout <<"\nDid you find a crossing?(yes/no)\n";
    string cross;
    cin>>cross;
    if(cross=="yes")
    {
        cout<<"\nCheckin the traffic lights\n";
        trafficLights();
    }
    else
    {
        cout<<"\nWalk away a few distance and check for any other way of crossing\n";
        footBridge();
    }
}

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
    cout<<"\nEnd of the program\n";
}