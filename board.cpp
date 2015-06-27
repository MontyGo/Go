// Test
#include <iostream>
using namespace std;

void draw(int board[][9]);

int main()
{
   char move[3];
   int color = 0;
   int board[9][9];
   for (int i = 0; i < 9; ++i)
      for(int j = 0; j < 9; ++j)
	 board[i][j] = 0;
   do
   {
      draw(board);
      cout << "Enter a move (i.e. g3) : ";
      cin.get(move, 10, '\n');
      cin.ignore(10, '\n');
      board[((int)move[0]) - 97][((int)move[1]) - 49] = color + 1;
      color = (color + 1) % 2;
   }
   while (1);
   return 0;
}

void draw(int board[][9])
{
   cout << "\033[35;7m";
   cout << "  1 2 3 4 5 6 7 8 9  \n ";
   for (int i = 0; i < 20; ++i)
      cout << (char) 128;
   for (int i = 0; i < 9; ++i)
   {

      cout << endl << (char) (i + 97) << (char) 128;
      for (int j = 0; j < 9; ++j)
      {
	 if (board[i][j] == 0)
	    cout << ". ";
	 else if (board[i][j] == 1)
	    cout << "\033[40m0 ";
	 else 
	    cout << "\033[47m0\033[40;7m ";
      }
      cout << (char) 128;
   }
   cout << "\n ";
   for (int i = 0; i < 20; ++i)
      cout << (char) 128;
   cout << endl << endl << "\033[0m";
}

