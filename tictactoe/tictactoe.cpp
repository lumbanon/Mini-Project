#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>
#include <string>
#include <limits>
#include <cmath>


using namespace std;

const int row=3;
const int col=3;
void runGame();
void initializeGameBoard(string gameboard[row][col]);
void printCurrentBoard(string gameboard[row][col]);
void getUserInput(bool& Xturn, string gameboard[row][col]);
bool cellAlreadyOccupied(int x, int y, string gameboard[row][col]);
string getWinner(string gameboard[row][col]);
bool isBoardFull(string gameboard[row][col]);

int main(){
    runGame();
    return 0;
}

void runGame(){
    string game[row][col];
    bool turn=false;
    string winner;
    cout<<"Hello Welcome to Tic Tac Toe"<<endl;
    initializeGameBoard(game);
    while(isBoardFull(game)==false){
        getUserInput(turn, game);
        printCurrentBoard(game); 
        winner = getWinner(game);
        if(winner!=" "){
            cout<<winner;
            return;
        }; 
    }  
    cout<<"Tie lmao"<<endl;
    
}
void initializeGameBoard(string gameboard[row][col])
{
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++)
        {
            gameboard[i][j]=" ";
        }
    }
}
void printCurrentBoard(string gameboard[row][col]){
    cout<<"--------------"<<endl;
    cout<<" | "<<gameboard[0][0]<<" | " <<gameboard[0][1]<<" | "  <<gameboard[0][2]<<" | " <<endl;
    cout<<"--------------"<<endl;
    cout<<" | "<<gameboard[1][0]<<" | " <<gameboard[1][1]<<" | "  <<gameboard[1][2]<<" | " <<endl;
    cout<<"--------------"<<endl;
    cout<<" | "<<gameboard[2][0]<<" | " <<gameboard[2][1]<<" | "  <<gameboard[2][2]<<" | " <<endl;
    cout<<"--------------"<<endl;
}
void getUserInput(bool& Xturn, string gameboard[row][col]){
    int x, y;
    if (Xturn==false){
    cout<<"It is X's turn "<<endl;  
    Xturn=true;   
    do{cout<<"Please enter the row THEN the column, each from 0, 1, or 2, seperated by a space"<<endl;
        cin>>x;
        cin>>y;
    }while(x>2||x<0||y>2||y<0);
    while(cellAlreadyOccupied(x,y,gameboard)){
        do{cout<<"Please enter the row THEN the column, each from 0, 1, or 2, seperated by a space"<<endl;
        cin>>x;
        cin>>y;
    }while(x>2||x<0||y>2||y<0);
    };
    gameboard[x][y]="X";
    }
    else{
    cout<<"It is O's turn "<<endl;
    Xturn=false;
    do{cout<<"Please enter the row THEN the column, each from 0, 1, or 2, seperated by a space"<<endl;
        cin>>x;
        cin>>y;
    }while(x>2||x<0||y>2||y<0);
    while(cellAlreadyOccupied(x,y,gameboard)){
       do{cout<<"Please enter the row THEN the column, each from 0, 1, or 2, seperated by a space"<<endl;
        cin>>x;
        cin>>y;
    }while(x>2||x<0||y>2||y<0); 
    };
    gameboard[x][y]="O";
}
}
bool cellAlreadyOccupied(int x, int y, string gameboard[row][col]){
    if (gameboard[x][y]!=" ")
    {
    return true;
    }
    else
    return false;
}
string getWinner(string gameboard[row][col]){
    for (int i=0;i<row;i++){
        if (gameboard[i][0]=="X" && gameboard[i][1]=="X" && gameboard[i][2]=="X"){
                return "X is the winner\n";
        }
    }
    for (int j=0;j<col;j++){
        if (gameboard[0][j]=="X" && gameboard[1][j]=="X" && gameboard[2][j]=="X"){
                return "X is the winner\n";
        }
    }
    
    for (int i=0;i<row;i++){
        if (gameboard[i][0]=="O" && gameboard[i][1]=="O" && gameboard[i][2]=="O"){
                return "O is the winner\n";
        }
    }
    for (int j=0;j<col;j++){
        if (gameboard[0][j]=="O" && gameboard[1][j]=="O" && gameboard[2][j]=="O"){
                return "O is the winner\n";
        }
    }
    if (gameboard[0][0]=="X" && gameboard[1][1]=="X" && gameboard[2][2]=="X"){
                return "X is the winner\n";
        }
    else if (gameboard[0][2]=="X" && gameboard[1][1]=="X" && gameboard[2][0]=="X"){
                return "X is the winner\n";
        }
    else if (gameboard[0][0]=="O" && gameboard[1][1]=="O" && gameboard[2][2]=="O"){
                return "O is the winner\n";
        }
    else if (gameboard[0][2]=="O" && gameboard[1][1]=="O" && gameboard[2][0]=="O"){
                return "O is the winner\n";
        }
    else 
    return " ";
    
}
bool isBoardFull(string gameboard[row][col]){
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++)
        {
            if (gameboard[i][j]==" "){
                return false;
            }
            
        }
    }
    return true;
}
