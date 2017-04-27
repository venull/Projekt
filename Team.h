#include<string>
#pragma once

class Team{
private:
    string team_name;
    short strenght;
    unsigned short points;
    short goals_scored;
    short goals_conceded;
    short form[6];  //Czy to powinna być tablica dynamiczna(znak zapytania) 
public:
    short getstrenght();
    unsigned short getpoints();
    short getgoal_difference();
    short getform();
    void setform(short * form);
    void setpoints;
    void set_goaldifference;
}
class Match{
private:
    match(Team home, Team away);
public:

};