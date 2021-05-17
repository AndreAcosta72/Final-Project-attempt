#include <stdio.h>
#include <string.h>

#include "ohmcaldata.h" //Includes the Ohm Law's calulations.
#include "unitcon.h" //Includes unit conversion.

int main (void){
FILE* inFile = NULL ; 
int opt;    //The user's "option" input.
printf("Hello and welcome to this Project.\nWhat will we have today?\n");
printf("Menu:\n0:Credits\n1:Ohm's Law calculator\n2:Unit converter\n3:Schedule Manager\n");    //Menu text.
scanf("%d", &opt);    //The user inputs the desired option.

  if (opt==1){
    int choice;   //The user's desired value to be found.
    printf("You have selected \"Ohm's Law calculator\"\nPlease select the value you want to find:\n1 for Voltage\n2 for Current\n3 for Resistance\n4 for Parallel Resistance"); 
    //Ohm's calculator greeting and menu
    
    scanf("%d", &choice); //The user selects 1, 2, or 3 depending on what value they are                        looking for. 
                          //Depending on the user's "choice", one of three functions will be called, the user inputs the known values (example: To find Voltage, the user inputs the known values for Resistance and Current) and the function calculates the third, unkown value.
    
    if(choice == 1){
      findVol();           //Find Voltage
    }
    else if (choice == 2){
      findCur();            //Find Current
    }
    else if (choice == 3){
      findRes();            //Find Resistance
    }
    else if(choice == 4){
      findPara();
    }
    else{
      printf("Sorry, but your input isn't valid. Please try again\n");  //Invalid input
    }
  }
  else if (opt == 2){
    char unit[50];
      printf( "You have selected \"Unit converter\"\nPlease select the unit you want to convert:\n\n"); //Unit converter greeting and measurement menu.
      printf("%-5s  %-9s\n","","Unit Table");   //Table title.
      printf("-----------------------\n");
      printf("%-12s | %-5s\n", "Unit", "Symbol");   //Column headers
      printf("-----------------------\n");
      printf("%-12s | %-5s\n", "Millimeter", "mm");   //Millimeters
      printf("%-12s | %-5s\n", "Centimeter", "cm");   //Centimeters
      printf("%-12s | %-5s\n", "Meter", "m");         //Meters
      printf("%-12s | %-5s\n", "Inches", "in");       //Inches
      printf("%-12s | %-5s\n", "Feet", "ft");         //Feet
      printf("%-12s | %-5s\n", "Yard", "yd");         //Yards.
      printf("-----------------------\n");
      
      scanf("%s", unit);  //The user inputs the specific measurement unit to convert.
                          //Afterwards, the input will be compared to the units in the menu, then the program will call the corresponding "expansion" function, i.e. expMil "expands" the user's millimeter input to the other units. The results have a 2 decimals precision.
      if (strcmp(unit, "mm")==0){
        expMil();                         //Millimeter function
      }
      else if(strcmp(unit, "cm")==0){     //Centimeter function
        expCm();
      }
      else if(strcmp(unit, "m")==0){      //Meter function
        expM();
      }
      else if(strcmp(unit, "in")==0){     //Inch function
        expIn();
      }
       else if(strcmp(unit, "ft")==0){    //Feet function
        expFt();
      }
      else if(strcmp(unit, "yd")==0){     //Yard function
        expYd();
      }
      else{
        printf("Sorry, but your inut is invalid."); //Invalid input
      }
  }
  else if(opt == 3){
    int actNum, i, totalMins=0, totalHrs = 0, mins, outMins=0; 
      //Total amount of activities, index, total Minuntes, total Hours, minutes, remaining minutes.
    
    char act[50];    //Activity's name
    
    printf("You have selected \"Schedule Manager\"\nPlease input the number of activities in the day\n");   //Schedule Manager's greeting and instruction
    scanf("%d", &actNum);   //The user inputs the amount of activities
    
    
    for(i=0;i<actNum;i++){    //The user inputs the activity's name and duration in a loop.
      printf("Enter the activity name and time in minutes\n");
      scanf("%s %d", act, &mins);
      printf("\nYou spent %d minutes in %s\n", mins, act);
      totalMins += mins;    //Add each activity's time to the total amount of minutes
      totalHrs = totalMins / 60;  //Find hours
      outMins = totalMins % 60;   //Find minutes
    }

    //Output the total amount of minutes, and converts that into hours and minutes.
    printf("Your total time is %d minutes, or %d hours and %d minutes\n", totalMins, totalHrs, outMins);
    
    if(totalHrs >= 16){
      printf("You won't get the minimum of 8 hours for sleeping!!!\n");
    }
    else{
      printf("You're getting enough sleep! Congrats!\n");
    }
  }
  else if(opt == 0){
    char cred[500]; //Words in the credits
    int i;  //Index
    printf("Opening credits.txt\n");
    inFile = fopen("credits.txt", "r");  //Open credit.txt text file
    
    /*If the program cannot find the document, output error message and return -1*/
    if(inFile == NULL){   
      printf("Oops! The file could not be openned!");
      return -1;
    }

    /*Once the text file is open, this loop will find every word in the credits.txt 
    text file and putput them until the loop reaches the end of the file*/
    for(i=1; fgets(cred, sizeof(cred), inFile) !=NULL; i++){
      printf("%s", cred);
    }
    fclose(inFile);   //The text file is closed
  }
  else{   //If the user's input isn't a valid one.
      printf("Sorry, but your input does not match the presented options\nPlease try again.");
    }
  {
    
  }
  return 0;
}
