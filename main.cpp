#include <iostream>
using namespace std;
bool gameOver;
const int width = 30;
const int height = 15;
int x, y, fruitX, fruitY, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;


void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw()
{
    system("clear");
    for (int i = 0; i <width; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j== 0)
                cout << "#";

            else if (i == y && j == x)
                cout << "O";

            else if (i == fruitY && j == fruitX)
                cout << "*";
            
            else if (j == width -1)
                cout << "#";

            else
                cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i <width; i++)
        cout << "#";
    cout << endl;

}

void Input()
{
}

void Logic()
{
}

int main()
{
    Setup();
    while(!gameOver)
    {
        Draw();
        Input();
        Logic();
    }
    return 0;
}
