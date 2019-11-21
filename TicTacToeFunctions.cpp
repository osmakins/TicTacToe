
#include "TicTacToeClasses.cpp"

Gameboard::Gameboard()
{
  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++)
    {
      gameSpace[i][j] = '-';
    }
}
void Gameboard::setGameSpace(int row, int column, char value)
{
  gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row, int column)
{
  return gameSpace[row][column];
}

int Gameboard::fourInRow()
{
  int count;
  for (int i = 0; i < 4; i++)
  {
    count = 0;
    for (int j = 0; j < 4; j++)
    {
      if (gameSpace[i][j] == 'x')
      {
        //check the number of times 'x' was repeated in a row with count.
        count++;
      }
    }
    if (count == 4)
      return 1;
  }
  return 0;
}
void Gameboard::printInfo()
{
  cout << "\n";
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << gameSpace[i][j] << "\t";
    }
    cout << "\n\n";
  }
}