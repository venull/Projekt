#include<string>
#pragma once

class Team{
private:
    string team_name;
    const short strenght; // Sile utalamy z pobocznego, jescze nie stworzonego, pliku, gdzie przypisana jest do konkretnej drużny
    static unsigned short points;
    static unsigned short goals_scored;
    static unsigned short goals_conceded;
    short form[6];  //Czy to powinna być tablica dynamiczna?
public:
    Team(unsigned short points=0, unsigned short goals_scored=0, unsigned short goals_scored=0) 
    short getstrenght();
    unsigned short getpoints();
    short getgoal_difference();
    short getform();
    void setform(short * form);
    void setpoints(unsigned short *points);
    void set_goals();

};