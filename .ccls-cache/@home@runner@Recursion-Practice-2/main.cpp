//Nathan Groves and Jayden Fleisher
#include <iostream>
using namespace std;



//function to find whether the two strings have their letter continuity in the third string maintained
bool shuffle (string s1, string s2, string s3)
{


//returns true if the length of the third string has been decremented to zero
if (s3.length() == 0)
{
  return true;
}

// if the first letter of the third string and second string match, and the length of the first string is 0 while the lengths of the second and third string are greater than 0, then call the function again with an decremented length for the second and third string
if (s3.substr(0, 1) == s2.substr(0, 1) && s1.length() == 0 && s3.length() > 0 && s2.length() > 0)
{
  return shuffle(s1, s2.substr(1), s3.substr(1));
}

// if the first letter of the third string and first string match, and the length of the second string is 0 while the lengths of the first and third string are greater than 0, then call the function again with an decremented length for the first and third string
if (s3.substr(0, 1) == s1.substr(0, 1) && s1.length() > 0 && s3.length() > 0 && s2.length() == 0)
{
  return shuffle(s1.substr(1), s2, s3.substr(1));
}

//if the first letter of the third string and first string match, and all string lengths are greater than zero, then call the function again with the decremented length for the first and third strings
 if (s3.front() == s1.front() && s1.length() > 0 && s3.length() > 0 && s2.length() > 0)
{
return shuffle(s1.substr(1), s2, s3.substr(1));
}

//if the first letter of the third string and second string match, and all string lengths are greater than zero, then call the function again with the decremented length for the second and third strings
 if (s3.front() == s2.front() && s2.length() > 0 && s3.length() > 0 >> s1.length() > 0)
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
  string three = "matbip";

  cout << shuffle(one, two, three);
  }