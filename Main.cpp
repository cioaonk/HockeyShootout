#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>
using namespace std;

char moveLeft = 'a';
char moveRight = 'd';
char speedUp = 'w';
char slowDown = 's';

int shotTopR = 9;
int shotTopC = 8;
int shotTopL = 7;
int shotMidR = 6;
int shotMidL = 4;
int shotBotR = 3;
int shot5Hole= 2;
int shotBotL = 1;


bool shootingFunction(vector<char> path, int shotSelection)
{
int goalOdds = 5;
int shooterSpeed = 1;
int shooterPosition = 0;
//cout << endl;
for(int k = 0; k <= 4; k++)
{
  if(path.at(k) == moveLeft)
  {
    shooterPosition += -1;
  }
  else if(path.at(k) == moveRight)
  {
    shooterPosition += 1;
  }
  else if(path.at(k) == speedUp)
  {
    shooterSpeed +=1;
  }
  else if(path.at(k) == slowDown)
  {
    shooterSpeed += -1;
  }
  //cout << "Speed: " << shooterSpeed << endl;
  //cout << "Position " << shooterPosition << endl;
}

    if(shotSelection == 1)
    {
     if(shooterPosition == -3)
     {
       goalOdds += -3;
     }
     else if( shooterPosition > -2 && shooterPosition < 2)
     {
        if(shooterSpeed > 2){
          goalOdds +=2;
        }
        if(shooterSpeed >=0 && shooterSpeed <= 2){
          goalOdds += 1;
        }
        if(shooterSpeed < 0){
          goalOdds += -1;
        }
     }
     else if( shooterPosition >= 2)
     {
        if(shooterSpeed > 2){
          goalOdds += 1;
        }
        if(shooterSpeed >=0 && shooterSpeed <= 2){
          goalOdds += -1;
        }
        if(shooterSpeed < 0){
          goalOdds += -2;
        }
     }

    }

    else if(shotSelection ==2)
    {
      if(shooterPosition >= 3 || shooterPosition <= -3)
      {
        goalOdds += -2;
      }
      else if(shooterPosition > -3 && shooterPosition < 0)
      {
        if(shooterSpeed > 2){
          goalOdds +=2;
        }
        if(shooterSpeed > 0 && shooterSpeed <= 2){
          goalOdds += 1;
        }
        if(shooterSpeed <= 0){
          goalOdds += -1;
        }
      }
      else if(shooterPosition == 0){
        goalOdds += -1;
      }
      else if(shooterPosition > 0 && shooterPosition < 3)
      {
        if(shooterSpeed > 2){
          goalOdds +=2;
        }
        if(shooterSpeed > 0 && shooterSpeed <= 2){
          goalOdds += 1;
        }
        if(shooterSpeed <= 0){
          goalOdds += -1;
        }
      }
    }

    else if(shotSelection ==3)
    {
      if(shooterPosition <= -2)
       {
        if(shooterSpeed > 2){
          goalOdds +=1;
        }
        if(shooterSpeed >=0 && shooterSpeed <= 2){
          goalOdds += -1;
        }
        if(shooterSpeed < 0){
          goalOdds += -2;
        }
       }
      else if( shooterPosition > -2 && shooterPosition < 2)
       {
        if(shooterSpeed > 2)
        {
          goalOdds +=2;
        }
        if(shooterSpeed >=0 && shooterSpeed <= 2)
        {
          goalOdds += 1;
        }
        if(shooterSpeed < 0)
        {
          goalOdds += -1;
        }
     }
     else if( shooterPosition >= 2)
     {
        goalOdds += -3;
     }
    }

    else if(shotSelection ==4)
    {
      if(shooterPosition == 3 || shooterPosition == -3 || shooterPosition == -2)
      {
          goalOdds += -2;
      }
      else if(shooterPosition == 1 || shooterPosition == 0)
      {
        if(shooterSpeed > 2){
          goalOdds += 2;
        }
        else if(shooterSpeed > 0 || shooterSpeed <=2)
        {
          goalOdds +=1;
        }
        else{
          goalOdds += -2;
        }
      }
      else if(shooterPosition == -1)
      {
        if(shooterSpeed > 2){
          goalOdds += 1;
        }
        else{
          goalOdds += -2;
        }
      }
      else if(shooterPosition == 2)
      {
        if(shooterSpeed > 2){
          goalOdds += 2;
        }
        else{
          goalOdds += -1;
        }      
      }
    }

    else if(shotSelection ==6)
    {
      if(shooterPosition == 3 || shooterPosition == -3 || shooterPosition == 2)
      {
          goalOdds += -2;
      }
      else if(shooterPosition == -1 || shooterPosition == 0)
      {
        if(shooterSpeed > 2){
          goalOdds += 2;
        }
        else if(shooterSpeed > 0 || shooterSpeed <=2)
        {
          goalOdds +=1;
        }
        else{
          goalOdds += -2;
        }
      }
      else if(shooterPosition == 1)
      {
        if(shooterSpeed > 2){
          goalOdds += 1;
        }
        else{
          goalOdds += -2;
        }
      }
      else if(shooterPosition == -2)
      {
        if(shooterSpeed > 2){
          goalOdds += 2;
        }
        else{
          goalOdds += -1;
        }    
      }
    }

    else if(shotSelection ==7)
    {
      if(shooterPosition <= -3)
      {
        if(shooterSpeed > 2){
          goalOdds +=3;
        }
        else {
          goalOdds +=1;
        }
      }
      else if(shooterPosition == -2)
      {
        if(shooterSpeed > 2){
          goalOdds +=2;
        }
        else{
          goalOdds += -1;
        }
      }
      else if(shooterPosition > -2 && shooterPosition < 2)
      {
        if(shooterSpeed > 2){
          goalOdds +=1;
        }
        else{
          goalOdds += -2;
        }
      }
      else if(shooterPosition >= 2)
      {
        if(shooterSpeed > 2){
          goalOdds +=1;
        }
        else{
          goalOdds += -2;
        }
      }
    }

    else if(shotSelection ==8)
    {
      if(shooterPosition > 3 || shooterPosition < -3 || shooterSpeed > 3){
        goalOdds += 4;
      }
      else{
        goalOdds += -4;
      }
    }

    else if(shotSelection ==9)
    {
      if(shooterPosition <= -2)
      {
        if(shooterSpeed > 2)
        {
          goalOdds +=1;
        }
        else
        {
          goalOdds += -2;
        }
      }
      else if(shooterPosition > -2 && shooterPosition < 2)
      {
        if(shooterSpeed > 2)
        {
          goalOdds +=1;
        }
        else
        {
          goalOdds += -2;
        }      
      }
      else if(shooterPosition == 2)
       {
        if(shooterSpeed > 2){
          goalOdds +=2;
        }
        else{
          goalOdds += -1;
        }
       }

      else if(shooterPosition >= 3)
      {
        if(shooterSpeed > 2){
          goalOdds +=3;
        }
        else {
          goalOdds +=1;
        }
      }
      
    }

//cout << "Goal odds of ten: " << goalOdds << endl;
 int randNum = (1 + rand() % 10);
//cout << "Rand num is: " << randNum << endl;
 if (randNum < goalOdds){
   return true;
 }
 else if (randNum >= goalOdds)
 {
   return false;
 }
}


int main() {

int shooterSpeed = 1;
bool goal;
bool rightHand;
bool leftHand;
int movesLeft = 5;
vector<bool> record;
int numRounds = 0;
int shotSelection;
char moveSelection;
vector<char> path;
int positionSide = 0;
int wins= 0;
char placeHolder;
//Gameplay
// Welcome
cout  << "Welcome to Shootout simulation" << endl;
cout << /*setw(53) <<*/ "A game by Ian Cook" << endl << endl;
cout << /*setw(77) <<*/ "Beat the AI goalie in a best of 5 round of hockey shootouts." << endl;
cout << /*setw(82) <<*/ "You have time for five moves, before shooting the puck at the net." << endl;
cout << /*setw(82) <<*/ "Use w-a-s-d to move, and 1-2-3-4-6-7-8-9 for the place of your shot" << endl << endl;
cout << /*setw(60) << */"The w move speeds up your skater" << endl;
cout << /*setw(62) << */"The s move slowes down your skater" << endl;
cout << /*setw(64) << */"The a move has your skater move left" << endl;
cout << /*setw(65) << */"The d move has your skater move right" << endl;

cout << endl << /*setw(48) << */ "Shot map:" << endl;
cout << /*setw(53) <<*/ "  ___________________" << endl;
cout << /*setw(54) << */" /~7~ ### ~8~ ### ~9~\\" << endl;
cout << /*setw(55) <<*/ "|#####################|" << endl;
cout << /*setw(55) <<*/ "|~4~ ############# ~6~|" << endl;
cout << /*setw(55) <<*/ "|#####################|" << endl;
cout << /*setw(55) <<*/ "|~1~ #### ~2~ #### ~3~|" << endl << endl;


cout << /*setw(56) <<*/ "Press any letter to play" << endl;
cin >> placeHolder;
// Rounds:
while(numRounds < 5 )
{
    cout << "Shot attempt: " << numRounds << endl;
    while(movesLeft > 0)
    {
      cout << endl << "Enter move: ";
      cin >> moveSelection;
      if(moveSelection == moveLeft )
      {
        path.push_back(moveLeft);
        cout << "You skate left" << endl;
        movesLeft += -1;
        cout << "Moves remaining: " << movesLeft << endl;
      }
      else if(moveSelection == moveRight )
      {
        path.push_back(moveRight);
        cout << "You skate right" << endl;
        movesLeft += -1;
        cout << "Moves remaining: " << movesLeft << endl;
      }
      else if(moveSelection == speedUp )
      {
        path.push_back(speedUp);
        cout << "You skate faster" << endl;
        movesLeft += -1;
        cout << "Moves remaining: " << movesLeft << endl;
      }
      else if(moveSelection == slowDown )
      {
        path.push_back(slowDown);
        cout << "You skate slower" << endl;
        movesLeft += -1;
        cout << "Moves remaining: " << movesLeft << endl;
      }
      else{
        cout << "Invalid move. Choose again: ";
      }
    }
    cout << endl << "Enter shot location (1-9 but not 5): ";
    cin >> shotSelection;
    cout << "You shoot ";
    if(shotSelection == 1)
    {
      cout << "bottom left and ";
    }
    else if(shotSelection ==2)
    {
        cout << "five hole and ";
    }
    else if(shotSelection ==3)
    {
          cout << "bottom right and ";
    }
    else if(shotSelection ==4)
    {
      cout << "mid left side and ";
    }
    else if(shotSelection ==6)
    {
      cout << "mid right side and ";
    }
    else if(shotSelection ==7)
    {
      cout << "top shelf left side and ";
    }
    else if(shotSelection ==8)
    {
      cout << " right at the dome and ";
    }
    else if(shotSelection ==9) 
    {
      cout << "top shelf right side and ";
    }
    bool scored = shootingFunction(path, shotSelection);
    if (scored == 1){
      cout << "SCORE!!!!!!!!!!!" << endl;
    }
    else if(scored == 0){
      cout << "get blocked by the goalie" << endl;
    }
    movesLeft = 5;
    record.push_back(scored);
    numRounds += 1;
}
for(int k = 0; k < 5; k++){
  if(record.at(k) == 1){
    wins +=1;
  }
}

cout << "Your final record is " << wins << " goals and " << 5-wins << " misses" << endl;
cout << "Thanks for playing!" << endl;
cin >> wins;

}
