#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
using namespace std;
int main()
{
    int inc=1,victx=0,victo=0,dif=0,sanse,ex;
    char a[3][3];
    srand((unsigned)time(0));
    ofstream g("lastmatch.txt");
    cout<<"Welcome to tic tac toe!!!"<<endl;
    cout<<endl;
    a[0][0]='1';
    a[0][1]='2';
    a[0][2]='3';
    a[1][0]='4';
    a[1][1]='5';
    a[1][2]='6';
    a[2][0]='7';
    a[2][1]='8';
    a[2][2]='9';
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl;
    int mod=0;
    cout<<endl<<"What mod dou you want to play ?"<<endl;
    cout<<"1.Player vs Player"<<endl;
    cout<<"2.Player vs Bot"<<endl;
    cout<<"3.Bot vs Bot"<<endl;
    while (mod<1 || mod>3)
    {
    cin>>mod;
    if (mod<1 || mod>3)
    cout<<"There is not such a mod !"<<endl;
    }
    system("cls");
    if(mod==2)
    {
        cout<<"Choose de difficulty:";
        cout<<endl<<"1.Easy";
        cout<<endl<<"2.Medium";
        cout<<endl<<"3.Hard"<<endl;
        while (dif<1 || dif>3)
            {
        cin>>dif;
        if(dif<1 || dif>3)
            cout<<endl<<"There is not such a difficulty !";
            }
    system("cls");
    }
    cout<<endl<<"To start press 0"<<endl;
    while (inc!=0)
    {
    cin>>inc;
    if (inc!=0)
        cout<<"0 !!!"<<endl;
    }
    system("cls");
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl<<endl;
        cout<<"Choosed :";
        cout<<endl<<endl;
        int pas=0;
        if(mod==1)
            cout<<"You choosed Player vs Player"<<endl;
        if(mod==2)
            cout<<"You choosed Player vs Bot"<<endl;
        if(mod==3)
        {
            cout<<"You choosed Bot vs Bot"<<endl;
            if(dif==1)
                cout<<"You choosed easy"<<endl;
            if(dif==2)
                cout<<"You choosed medium"<<endl;
            if(dif==3)
                cout<<"You choosed hard"<<endl;
        }
    while (victo==0 && victx==0)
    {
        pas++;
        int x=0;
        int v1=a[0][0];
        int v2=a[0][1];
        int v3=a[0][2];
        int v4=a[1][0];
        int v5=a[1][1];
        int v6=a[1][2];
        int v7=a[2][0];
        int v8=a[2][1];
        int v9=a[2][2];
        cout<<endl;
        if(mod==3)
        {
        cout<<pas<<".X(Bot) is the next"<<endl;
        g<<pas<<".X(Bot) is the next"<<endl<<endl;
        }
        else
        {
        cout<<pas<<".X(Player) is the next"<<endl<<endl;
        g<<pas<<".X(Player) is the next"<<endl<<endl;
        }
    while (v1==a[0][0] && v2==a[0][1] && v3==a[0][2] && v4==a[1][0] && v5==a[1][1] && v6==a[1][2] && v7==a[2][0] && v8==a[2][1] && v9==a[2][2])
        {
            if(mod==3)
            {
                for (int j=1;j<=10;j++)
                    x=(rand()%9)+1;
            }
            else
            {
        cin>>x;
        if (x<1 || x>9)
            while (x<1 || x>9)
        {
    if (x<1 || x>9)
        cout<<"Write from 1 to 9 !"<<endl;
        cout<<endl;
        cin>>x;
        }
            }
    if(x==1 && a[0][0]=='1')
        a[0][0]='X';
    if(x==2 && a[0][1]=='2')
        a[0][1]='X';
    if(x==3 && a[0][2]=='3')
        a[0][2]='X';
    if(x==4 && a[1][0]=='4')
        a[1][0]='X';
    if(x==5 && a[1][1]=='5')
        a[1][1]='X';
    if(x==6 && a[1][2]=='6')
        a[1][2]='X';
    if(x==7 && a[2][0]=='7')
        a[2][0]='X';
    if(x==8 && a[2][1]=='8')
        a[2][1]='X';
    if(x==9 && a[2][2]=='9')
        a[2][2]='X';
        if((a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X') || (a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X') || (a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X') || (a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X') || (a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X') || (a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X') || (a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') || (a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X') || (a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X'))
            victx=1;
if(victx==1)
{
    if(mod==3)
    {
    cout<<endl<<"X(Bot) won !"<<endl<<endl;
    g<<endl<<"X(Bot) won !"<<endl<<endl;
    }
    else
    {
    cout<<endl<<"X(player) won !"<<endl<<endl;
    g<<endl<<"X(player) won !"<<endl<<endl;
    }
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl;
    return 0;
}
    if(v1==a[0][0] && v2==a[0][1] && v3==a[0][2] && v4==a[1][0] && v5==a[1][1] && v6==a[1][2] && v7==a[2][0] && v8==a[2][1] && v9==a[2][2])
        cout<<"Wrong position !"<<endl;
        }
    system("cls");
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl;
        if((a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X') || (a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X') || (a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X') || (a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X') || (a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X') || (a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X') || (a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') || (a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X') || (a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X'))
            victx=1;
if(victx==1)
{
    if(mod==3)
    {
    cout<<endl<<"X(bot) won !"<<endl<<endl;
    g<<endl<<"X(bot) won !"<<endl<<endl;
    }
    else
    {
    cout<<endl<<"X(player) won !"<<endl<<endl;
    g<<endl<<"X(player) won !"<<endl<<endl;
    }
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl;
    return 0;
}
if(pas==9)
{
    cout<<endl<<"Draw !"<<endl<<endl;
    g<<endl<<"Draw !"<<endl<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl;
    return 0;
}
        pas++;
        int o=0;
        cout<<endl;
        if(mod==1)
        {
        cout<<pas<<".0(player) is the next"<<endl<<endl;
        g<<pas<<".0(player) is the next"<<endl<<endl;
        }
        else
        {
        cout<<".0(Bot) is the next"<<endl<<endl;
        g<<pas<<".Urmeaza 0(Calculator)"<<endl<<endl;
        }
        v1=a[0][0];
        v2=a[0][1];
        v3=a[0][2];
        v4=a[1][0];
        v5=a[1][1];
        v6=a[1][2];
        v7=a[2][0];
        v8=a[2][1];
        v9=a[2][2];
        while (v1==a[0][0] && v2==a[0][1] && v3==a[0][2] && v4==a[1][0] && v5==a[1][1] && v6==a[1][2] && v7==a[2][0] && v8==a[2][1] && v9==a[2][2] && pas<9)
        {
        if(mod==1)
        {
           cin>>o;
        if (o<1 || o>9)
            while (o<1 || o>9)
        {
    if (o<1 || o>9)
        cout<<"Write from 1 to 9 !"<<endl;
        cout<<endl;
        cin>>o;
        }
        }
        if(mod==2)
        {
    if(dif==1)
    {
        for (int j=1;j<=10;j++)
        o=(rand()%9)+1;
    }
    if(dif==2 || dif==3)
    {
        if(dif==2)
        {
        sanse=(rand()%100)+1;
        if (sanse<45)
        {
            for (int j=1;j<=10;j++)
                    o=(rand()%9)+1;
        }
                    ex=45;
        }
        if(dif==3)
        {
        sanse=(rand()%100)+1;
        if (sanse<10)
        {
            for (int j=1;j<=10;j++)
                    o=(rand()%9)+1;
        }
                    ex=5;
        }
        if(sanse>=ex)
        {
            if(a[0][0]=='X' && a[0][2]=='X' && a[0][1]=='2')
                o=2;
            else
                if(a[1][0]=='X' && a[1][2]=='X' && a[1][1]=='5')
                o=5;
            else
                if(a[2][0]=='X' && a[2][2]=='X' && a[2][1]=='8')
                o=8;
            else
                if(a[0][0]=='X' && a[2][0]=='X' && a[1][0]=='4')
                o=4;
            else
                if(a[0][1]=='X' && a[2][1]=='X' && a[1][1]=='5')
                o=5;
            else
                if(a[0][2]=='X' && a[2][2]=='X' && a[1][2]=='6')
                o=6;
            else
                if(a[0][2]=='X' && a[2][0]=='X' && a[1][1]=='5')
                o=5;
            else
                if(a[0][0]=='X' && a[2][2]=='X' && a[1][1]=='5')
                o=5;
            else
                if(a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='3')
                o=3;
            else
                if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='6')
                o=6;
            else
                if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='9')
                o=9;
            else
                if(a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='7')
                o=7;
            else
                if(a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='8')
                o=8;
            else
                if(a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='9')
                o=9;
            else
                if(a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='9')
                o=9;
            else
                if(a[1][1]=='X' && a[2][2]=='X' && a[0][0]=='1')
                o=1;
            else
                if(a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='7')
                o=7;
            else
                if(a[1][2]=='X' && a[2][2]=='X' && a[0][2]=='3')
                o=3;
            else
                if(a[0][2]=='X' && a[0][1]=='X' && a[0][0]=='1')
                o=1;
            else
                if(a[1][2]=='X' && a[1][1]=='X' && a[1][0]=='4')
                o=4;
            else
                if(a[2][2]=='X' && a[2][1]=='X' && a[2][0]=='7')
                o=7;
            else
                if(a[2][0]=='X' && a[1][0]=='X' && a[0][0]=='1')
                o=1;
            else
                if(a[2][1]=='X' && a[1][1]=='X' && a[0][1]=='2')
                o=2;
            else
                if(a[2][2]=='X' && a[1][2]=='X' && a[0][2]=='3')
                o=3;
            else
                for (int j=1;j<=10;j++)
                    o=(rand()%9)+1;
    }
    }
    }
    if(mod==3)
        {
        for (int j=1;j<=10;j++)
        o=(rand()%9)+1;
        }
    if(o==1 && a[0][0]=='1')
        a[0][0]='0';
    if(o==2 && a[0][1]=='2')
        a[0][1]='0';
    if(o==3 && a[0][2]=='3')
        a[0][2]='0';
    if(o==4 && a[1][0]=='4')
        a[1][0]='0';
    if(o==5 && a[1][1]=='5')
        a[1][1]='0';
    if(o==6 && a[1][2]=='6')
        a[1][2]='0';
    if(o==7 && a[2][0]=='7')
        a[2][0]='0';
    if(o==8 && a[2][1]=='8')
        a[2][1]='0';
    if(o==9 && a[2][2]=='9')
        a[2][2]='0';
        }
    system("cls");
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl;
        if((a[0][0]=='0' && a[0][1]=='0' && a[0][2]=='0') || (a[1][0]=='0' && a[1][1]=='0' && a[1][2]=='0') || (a[2][0]=='0' && a[2][1]=='0' && a[2][2]=='0') || (a[0][0]=='0' && a[1][0]=='0' && a[2][0]=='0') || (a[0][1]=='0' && a[1][1]=='0' && a[2][1]=='0') || (a[2][0]=='0' && a[2][1]=='0' && a[2][2]=='0') || (a[0][0]=='0' && a[1][1]=='0' && a[2][2]=='0') || (a[0][2]=='0' && a[1][1]=='0' && a[2][0]=='0') || (a[0][2]=='0' && a[1][2]=='0' && a[2][2]=='0'))
            victo=1;
if(victo==1)
{
    if(mod==1)
    {
    cout<<endl<<"0(player) won !"<<endl<<endl;
    g<<endl<<"0(player) won !"<<endl<<endl;
    }
    else
    {
    cout<<endl<<"0(bot) won !"<<endl<<endl;
    g<<endl<<"0(bot) won !"<<endl<<endl;
    }
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl;
    return 0;
}
 if(pas==9)
{
    cout<<endl<<"Draw !"<<endl<<endl;
    g<<endl<<"Draw !"<<endl<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<endl;
    g<<"_____|_____|_____"<<endl;
    g<<"     |     |     "<<endl;
    g<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<endl;
    return 0;
}
    }
}
