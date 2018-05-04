#include <iostream>
#include <string>
#include "student.h"
#include <vector>

using namespace std;

void student::setName(string first, string last)
{
  firstName = first;
  lastName = last;
}

string student::fullName()
{
  firstName.append(" ");
  firstName.append(lastName);
  return firstName;
}

void student::addGrade(double tempgrade)
{
  grade = 0;
  if(tempgrade < -1 || tempgrade > -1)
  {
    grade = tempgrade;
  }
  grid.push_back(grade);
}

double student::getScore()
{
  score = 0;
  temporary = 0;

  for(int i=0; i<grid.size(); i++)
  {
    temporary = score + grid[i];
    score = temporary;
  }
  score = score/grid.size();
  return score;
}
