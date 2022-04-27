//Nathan Groves and Jayden Fleisher
#include <iostream>
using namespace std;

//This program contains a function to find whether two strings have their letter continuity maintained in a third string. The user may put in any three strings in to the function call.


bool shuffle (string s1, string s2, string s3)
{


//returns true if the length of the third string has been decremented to zero
if (s3.length() == 0)
{
  return true;
}


//if the first letter of the third string and first string match, and the third string length greater is than zero, then call the function again with the decremented length for the first and third strings
 if (s3.front() == s1.front() && s3.length() > 0)
{
return shuffle(s1.substr(1), s2, s3.substr(1));
}

//if the first letter of the third string and second string match, and the third string length is greater than zero, then call the function again with the decremented length for the second and third strings
 if (s3.front() == s2.front()  && s3.length() > 0)
{
return shuffle(s1, s2.substr(1), s3.substr(1));
}

//if no other instance is true, return false, proving that the first and second string do not maintain their continuity in the third string.
else
{
  return false;
}

}


int main() 
{
  string one = "mat";
  string two = "bip";
  string three = "mbatpi";

  cout << shuffle(one, two, three);
  }