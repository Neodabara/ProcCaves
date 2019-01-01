#include <cstdlib>
#include <iostream>
#include <fstream>
//I couldn't figure out how to make the array process correctly
//All values appear as 6.

using namespace std;

const int FUB = 6;

void writeToFile( )
{
     ofstream outData;
     outData.open("numbers.txt");
     outData << 1 << "," << 2 << "," << 3 << "," << 4 << "," << 5 << "," << 6 <<endl;// a certain amount of laziness
     outData.close( );
}

void readFromFile(int *mother, int lover )
{
     ifstream inData;
     inData.open( "numbers.txt");
     int i = 0; 
     int value;
     
     inData >> value;
     
     while(i<lover)
     {
           for(i=0;i< lover;i++){
           	mother[i] = lover;
            inData >> value;
		   }
     }
     inData.close( );
}

int max(int lazy[],int town)
{
    int max = 0;
    int i = 0;
    
    while(i < town)
    {
            if(lazy[i] > max) //This statement is to find the max value while incrementing through the array
            {
                       max = lazy[i]; //This is to set the max value to equal the largest value in the array
            }
            i++;
    }
    return max;
}
           
 void outputArray(int uptown[], int funk )
 {
 	int i=0;
 	
 	while(i<funk)
 	{
 		cout<< uptown[i] << " ";
 		i++;
	 }
}  

int main(int argc, char *argv[])
{
	int*intPtr;
	
	int spagetti[6];//Sorry I was hungry
	writeToFile();
	readFromFile(spagetti,FUB);
	outputArray(spagetti,FUB);
	cout << max(spagetti,FUB);
	outputArray(spagetti,FUB);
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*void writeToFile( )
{
     ofstream outData;
     outData.open("numbers.txt");
     outData << 1 << "," << 2 << "," << 3 << "," << 4 << "," << 5 << "," << 6 <<endl;// a certain amount of laziness
     outData.close( );
}

void readFromFile( )
{
     ifstream inData;
     inData.open( "numbers.txt");
     int i = 0; 
     int value; 
     int number = 6;
     int inside[number];

     inData >> value;
     while( inData )
     {
           inside[i] = value;
           inData >> value;
           i++;
     }
     inData.close( );
}

int max(int lazy[],int town)
{
    int max = 0;
    int i = 0;
    
    while(i < town)
    {
            if(lazy[i] > max) //This statement is to find the max value while incrementing through the array
            {
                       max = lazy[i]; //This is to set the max value to equal the largest value in the array
            }
            i++;
    }
    return max;
}
           
 void outputArray(int uptown[], int funk )
 {
 	int i=0;
 	
 	while(i<funk)
 	{
 		cout<< uptown[i] << " ";
 		i++;
	 }
} */

//came to the realization that the commented out segments needed to be in front of the main function          
