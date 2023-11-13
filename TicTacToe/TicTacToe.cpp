#include<iostream>
#include<conio.h>
using namespace std;

char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int choice;
int row, column;
char turn = 'X';
bool draw = false;

void display_board(){

    
    cout<< "       |       |       \n";
    cout<< "   "<<space[0][0]<<"   |   "<<space[0][1]<<"   |   "<<space[0][2]<<"  \n";
    cout<< "_______|_______|_______\n";
    cout<< "       |       |       \n";
    cout<< "   "<<space[1][0]<<"   |   "<<space[1][1]<<"   |   "<<space[1][2]<<"  \n";
    cout<< "_______|_______|_______\n";
    cout<< "       |       |       \n";
    cout<< "   "<<space[2][0]<<"   |   "<<space[2][1]<<"   |   "<<space[2][2]<<"  \n";
    cout<< "       |       |       \n";


}

void player_turn(){
    if(turn == 'X'){
        cout<<"\n\nPlayer 1 [X] turn:  ";
    }else if(turn == 'O'){
        cout<<"\n\nPlayer 2 [O] turn:  ";
    }

    cin>> choice;

    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
        cout<<"Invalid Move...\n";
    }

    if(turn == 'X' && space[row][column] !='X' && space[row][column] !='O'){
        space[row][column]='X';
        turn = 'O';
    }else if(turn =='O' && space[row][column] !='X' && space[row][column] !='O'){
        space[row][column]='O';
        turn = 'X';
    }else{
        cout<<"Box already filled!! Please Try Another....\n\n\n";
        player_turn();
    }
    display_board();
}

bool gameover(){
    for(int i=0; i<3; i++){
        if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i]){
            return false;
        }
    }
    
    if(space[0][0]==space[1][1] && space[0][0]==space[2][2] || space[0][2]==space[1][1] && space[0][2]==space[2][0]){
        return false;
    }

    for(int i = 0; i<3;i++){
        for(int j=0;j<3;j++){
            if(space[i][j]  !='X' && space[i][j] !='O'){
                return true;
            }
        }
    }
    draw= true;
    return false;
}

int main()
{
    
    //string n1,n2;
    //cout<<"Enter the name of the first player:\t";
    //getline(cin, n1);
    //cout<<"\nEnter the name of the second player;\t";
    //getline(cin,n2);
    //cout<<n1<<" is player 1 so he/she will play first...\n";
    //cout<<n2<<" is player 2 so he/she will play second...\n";


    cout<<"\n\n\n\tTic Tac Toe\t\n\n\n";
    
    cout<< "       |       |       \n";
    cout<< "   1   |   2   |   3   \n";
    cout<< "_______|_______|_______\n";
    cout<< "       |       |       \n";
    cout<< "   4   |   5   |   6   \n";
    cout<< "_______|_______|_______\n";
    cout<< "       |       |       \n";
    cout<< "   7   |   8   |   9   \n";
    cout<< "       |       |       \n";


    //display_board();
    while(gameover()){
        //display_board();
        player_turn();
        gameover();
    }
    if(turn =='X' && draw ==false){
        cout<<"\n\nCongratulations..! Player with O has won the match.!";
    }
    else if(turn =='O' && draw ==false){
        cout<<"\n\nCongratulations..! Player with X has won the match.!";
    }
    else{
        cout<<"\n\nGAME DRAW..!\n\n\n";
    }
    //display_board();


    return 0;
}