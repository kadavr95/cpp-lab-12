#include <conio.h>//including input/output libraries
#include <iostream.h>
#include <string>

using namespace std;

void OutputMenu();//functions prototypes



const MaximumRowNumber=100, MaximumColumnNumber=50;

void MatrixInput(int iMatrix[][MaximumRowNumber], int ColumnNumber, int RowNumber);
void MatrixInput(string sMatrix[][MaximumRowNumber], int ColumnNumber, int RowNumber);
void MatrixOutput(int iMatrix[][MaximumRowNumber], int ColumnNumber, int RowNumber);
void MatrixOutput(string sMatrix[][MaximumRowNumber], int ColumnNumber, int RowNumber);



void main()//main function
{
	short OperationCode;//defining variables
	int iMatrix[MaximumColumnNumber][MaximumRowNumber];
	string sMatrix[MaximumColumnNumber][MaximumRowNumber];
	int ColumnNumber,RowNumber;

	OutputMenu();//show menu of available commands
	while(1)//endless repeat
	{
		OperationCode=getch();//get command
		system("cls");//clear console screen
		switch (OperationCode)//command choice
		{
			case 49:
				cout<<"Enter number of columns in matrix: ";
				cin>>ColumnNumber;
				cout<<"Enter number of rows in matrix: ";
				cin>>RowNumber;
				MatrixInput(iMatrix, ColumnNumber,RowNumber);
				MatrixOutput(iMatrix, ColumnNumber,RowNumber);
				break;
			case 50:
				cout<<"Enter number of columns in matrix: ";
				cin>>ColumnNumber;
				cout<<"Enter number of rows in matrix: ";
				cin>>RowNumber;
				MatrixInput(sMatrix, ColumnNumber,RowNumber);
				MatrixOutput(sMatrix, ColumnNumber,RowNumber);
				break;
			default://case of pressing button not assigned to commands
				OutputMenu();//show menu of available commands
		}
	}
}

void OutputMenu()//show menu of available commands
{
	cout<<"Choose matrix type:\n";
	cout<<"Press 1 to enter integer type matrix\n";
	cout<<"Press 2 to enter string type matrix\n";
}

void MatrixInput(int iMatrix[][MaximumRowNumber], int ColumnNumber, int RowNumber)
{
int ColumnCounter,RowCounter;
   for (RowCounter = 0; RowCounter < RowNumber; RowCounter++) {
	  for (ColumnCounter = 0; ColumnCounter < ColumnNumber; ColumnCounter++) {
		  cin>>iMatrix[ColumnCounter][RowCounter];
	  }
   }
}

void MatrixInput(string sMatrix[][MaximumRowNumber], int ColumnNumber, int RowNumber)
{
int ColumnCounter,RowCounter;
   for (RowCounter = 0; RowCounter < RowNumber; RowCounter++) {
	  for (ColumnCounter = 0; ColumnCounter < ColumnNumber; ColumnCounter++) {
		  cin>>sMatrix[ColumnCounter][RowCounter];
	  }
   }
}

void MatrixOutput(int iMatrix[][MaximumRowNumber], int ColumnNumber, int RowNumber)
{
int ColumnCounter,RowCounter;
   for (RowCounter = 0; RowCounter < RowNumber; RowCounter++) {
	  for (ColumnCounter = 0; ColumnCounter < ColumnNumber; ColumnCounter++) {
		  cout<<iMatrix[ColumnCounter][RowCounter]<<" ";
	  }
	  cout<<"\n";
   }
}

void MatrixOutput(string sMatrix[][MaximumRowNumber], int ColumnNumber, int RowNumber)
{
int ColumnCounter,RowCounter;
   for (RowCounter = 0; RowCounter < RowNumber; RowCounter++) {
	  for (ColumnCounter = 0; ColumnCounter < ColumnNumber; ColumnCounter++) {
		  cout<<sMatrix[ColumnCounter][RowCounter]<<" ";
	  }
	  cout<<"\n";
   }
}
