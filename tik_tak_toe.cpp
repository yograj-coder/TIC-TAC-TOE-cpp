#include<bits/stdc++.h>
using namespace std;
void visual(int i,int moves, char Arr[][3]){

	switch(moves){
			case 1:
				if(i%2==0) Arr[0][0] = 'O';
				else Arr[0][0] = 'X' ;
				break;
			case 2:
				if(i%2==0) Arr[0][1] = 'O';
				else Arr[0][1] = 'X' ;
				break;
			case 3:
				if(i%2==0) Arr[0][2] = 'O';
				else Arr[0][2] = 'X' ;
				break;
			case 4:
				if(i%2==0) Arr[1][0] = 'O';
				else Arr[1][0] = 'X' ;
				break;
			case 5:
				if(i%2==0) Arr[1][1] = 'O';
				else Arr[1][1] = 'X' ;
				break;
			case 6:
				if(i%2==0) Arr[1][2] = 'O';
				else Arr[1][2] = 'X' ;
				break;
			case 7:
				if(i%2==0) Arr[2][0] = 'O';
				else Arr[2][0] = 'X' ;
				break;
			case 8:
				if(i%2==0) Arr[2][1] = 'O';
				else Arr[2][1] = 'X' ;
				break;
			case 9:
				if(i%2==0) Arr[2][2] = 'O';
				else Arr[2][2] = 'X' ;
				break;
			}

	cout<<endl;
	for(int l=0;l<3;l++){
		for(int m=0;m<3;m++){
			cout<<Arr[l][m]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
int main(){
	int move,row,column,i=0,diag1,diag2,l,m;
	int Ar[] = {1,-1,1,-1,1,-1,1,-1,1};
	int arr[4][4];
	char Arr[3][3];
	for(int l=0;l<3;l++){
		for(int m=0;m<3;m++){
			Arr[l][m] = '.';
		}
	}
	for(int l=0;l<4;l++){
		for(int m=0;m<4;m++){
			arr[l][m] =0;
		}
	}
	cout<<"---------- GAME STARTED -------------"<<endl;
	cout<<"MANUAL"<<endl;
	cout<<"1 2 3"<<endl<<"4 5 6"<<endl<<"7 8 9"<<endl;
	cout<<"Each number respresent a box"<<endl;
	cout<<"First player -> O"<<endl;
	cout<<"Second player -> X"<<endl;
	cout<<"Enter -1 to exit the game"<<endl;

	cout<<"Enter :";

	while(true){
		cin>>move;
		if(move == -1) return 0;
		switch(move){
			case 1:
				if(arr[0][0] != 0){
					cout<<"element already exits in this box";
					break;
				}
				arr[0][0] = Ar[i];
				arr[0][3] += Ar[i];
				arr[3][0] += Ar[i];
				visual(i,move,Arr);
				i++;
				break;
			case 2:
				if(arr[0][1] != 0){
					cout<<"element already exits in this box";
					break;
				}
				arr[0][1] = Ar[i];
				arr[0][3] += Ar[i];
				arr[3][1] += Ar[i];
				visual(i,move,Arr);
				i++;
				break;
			case 3:
				if(arr[0][2] != 0){
					cout<<"element already exits in this box";
					break;
				}
				arr[0][2] = Ar[i];
				arr[0][3] += Ar[i];
				arr[3][2] += Ar[i];
				visual(i,move,Arr);
				i++;
				break;
			case 4:
				if(arr[1][0] != 0){
					cout<<"element already exits in this box";
					break;
				}
				arr[1][0] = Ar[i];
				arr[1][3] += Ar[i];
				arr[3][0] += Ar[i];
				visual(i,move,Arr);
				i++;
				break;
			case 5:
				if(arr[1][1] != 0){
					cout<<"element already exits in this box";
					break;
				}
				arr[1][1] = Ar[i];
				arr[1][3] += Ar[i];
				arr[3][1] += Ar[i];
				visual(i,move,Arr);
				i++;
				break;
			case 6:
				if(arr[1][2] != 0){
					cout<<"element already exits in this box";
					break;
				}
				arr[1][2] = Ar[i];
				arr[1][3] += Ar[i];
				arr[3][2] += Ar[i];
				visual(i,move,Arr);
				i++;
				break;
			case 7:
				if(arr[2][0] != 0){
					cout<<"element already exits in this box";
					break;
				}
				arr[2][0] = Ar[i];
				arr[2][3] += Ar[i];
				arr[3][0] += Ar[i];
				visual(i,move,Arr);
				i++;
				break;
			case 8:
				if(arr[2][1] != 0){
					cout<<"element already exits in this box";
					break;
				}
				arr[2][1] = Ar[i];
				arr[2][3] += Ar[i];
				arr[3][1] += Ar[i];
				visual(i,move,Arr);
				i++;
				break;
			case 9:
				if(arr[2][2] != 0){
					cout<<"element already exits in this box";
					break;
				}
				arr[2][2] = Ar[i];
				arr[2][3] += Ar[i];
				arr[3][2] += Ar[i];
				visual(i,move,Arr);
				i++;
				break;
			default: 
				cout << "Invalid move, try again\n"; continue;
				
			}
			if(move == -1) return 0;
		
			diag1=arr[0][0]+arr[1][1]+arr[2][2];
			diag2=arr[2][0]+arr[1][1]+arr[0][2];

			if(arr[0][3]==3 || arr[1][3]==3 || arr[2][3]==3 || arr[3][0]==3 || arr[3][1]==3 || arr[3][2]==3 || diag1==3 || diag2==3){
				cout<<"\nPLayer 1 won!!"<<endl;
				cout<<"------------------ GAME END ----------------\n";
				break;
			}
			else if(arr[0][3]== -3 || arr[1][3]== -3 || arr[2][3]== -3 || arr[3][0]== -3 || arr[3][1]== -3 || arr[3][2]== -3 || diag1== -3 || diag2== -3){
				cout<<"\nplayer 2 won!!"<<endl;
				cout<<"--------------------- GAME END ------------------------\n";
				break;
			}
			else {
				if(i==9){
					cout<<"\n draw "<<endl;;
					cout<<"------------------ GAME END -----------------------\n";
					break;
				}
			}
			cout<<"\nEnter :";
	
	}

	}