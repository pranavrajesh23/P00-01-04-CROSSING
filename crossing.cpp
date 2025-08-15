#include<iostream>
using namespace std;




void color()
{
    cout <<"\nWhat is the color of the traffic light?(red/green)\n";
    string col;
    cin>>col;
    if(col=="red")
    {
        cout<<"\nColor had turned red, kindly check for cars on sides\n";
        leftApproach();
    }
    else if(col=="green")
    {
        cout<<"\nGreen signal, cars are moving, wait for a while\n";
        cout<<"\nWait for the signal to turn red\n";
        color();
    }
}

void trafficLights()
{
    cout <<"\nDid you find traffic lights being on?(yes/no)\n";
    string lights;
    cin>>lights;
    if(lights=="yes")
    {
        cout<<"\nCheck for the color of the traffic light\n";
        color();
    }
    else
    {
        cout<<"\nDidnt find any traffic lights, so looking for any cars approaching\n";
        leftApproach();
    }
}

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