#pragma once
#include"Team.h"
#include<cstdlib>


short Match(Team home, Team away)
{
  short luck_home,luck_away;
  srand(time(NULL));
  luck_home= rand%30-15;
  luck_away=rand%30-15;
  if (abs(luck_home+getstrenght().home+5-(away_luck+getstrength().away)<=5) return 1; //remis
  else
      {if (5<(luck_home+getstrenght().home+5-(away_luck+getstrength().away)) return 3; // home_win
       if (0>(luck_home+getstrenght().home+5-(away_luck+getstrength().away)) return 0; //away_win    
      }
 }
  