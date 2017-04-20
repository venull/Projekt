#pragma once

class Team{
private:
    short strenght;
    unsigned short points;
    short goal_difference;
    short form();
    Match fixtures[38];
public:
    short getstrenght();
    unsigned short getpoints();
    short getgoal_difference;
    short getform();
    void setform(fixtures);
    void setpoints;
    void set_goaldifference;
}
class Match{
private:
    match(Team home, Team away);
public:

};