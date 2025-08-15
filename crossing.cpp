#include<iostream>
using namespace std;

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