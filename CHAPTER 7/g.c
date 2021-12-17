#include <stdio.h>
// the user wil be asked to enter the serial number of the item
// after user has given input it will run switch and search for the item serial number
// then it will display name,availability of the item and price
// loop will run again nd ask the user to give input again
// the loop will un 10 times
// if user give invalid serial number it wil print invalid entry
int main()
{
   int i;
   printf("                          DEPARTMENT STORE MANAGEMENT\n");
   printf("***********************************************************************************************\n");
   int item;
   printf("item 1 is T-SHIRT\n");
   printf("item 2 is TROUSER\n");
   printf("item 3 is SHOE\n");
   printf("item 4 is JACKET\n");
   printf("item 5 is NOTEBOOK\n");
   printf("item 6 is PEN\n");
   printf("item 7 is SKATEBOARD\n");
   printf("item 8 is SUITCASE\n");
   printf("item 9 is REMOTE CONTROLL CAR\n");
   printf("item 10 is TOY\n");
   printf("item 11 is BOOK\n");

   for (i = 1; i <= 10; i++)

   {
      printf("ENTER THE SERIAL NUMBER OF THE ITEM :: ");
      scanf("%d", &item);
      switch (item)
      {
      case 1:
         printf("THE ITEM IS T-SHIRT\n");
         printf("ITEM IS AVILABLE\n");
         printf("THE PRICE OF THE ITEM IS Rs 500\n");
         break;
         
      case 2:
         printf("THE ITEM IS TROUSER\n");
         printf("ITEM IS AVILABLE\n");
         printf("THE PRICE OF THE ITEM IS Rs 800\n");
         break;

      case 3:
         printf("THE ITEM IS SHOES\n");
         printf("ITEM IS AVILABLE\n");
         printf("THE PRICE OF THE ITEM IS Rs 1500\n");
         break;
      case 4:
         printf("THE ITEM IS JACKET\n");
         printf("ITEM IS CURRENTLY  UNAVILABLE\n");
         printf("THE PRICE OF THE ITEM IS Rs 500O\n");
         break;

      case 5:
         printf("THE ITEM IS NOTEBOOK\n");
         printf("ITEM IS AVILABLE\n");
         printf("THE PRICE OF THE ITEM IS Rs 50\n");
         break;

      case 6:
         printf("THE ITEM IS PEN\n");
         printf("ITEM IS AVILABLE\n");
         printf("THE PRICE OF THE ITEM IS Rs 5\n\n");
         break;

      case 7:
         printf("THE ITEM IS SKATE BOARD\n");
         printf("ITEM IS AVILABLE\n");
         printf("THE PRICE OF THE ITEM IS Rs 5200\n");
         break;

      case 8:
         printf("THE ITEM IS SUITCASE\n");
         printf("ITEM IS AVILABLE\n");
         printf("THE PRICE OF THE ITEM IS Rs 2500\n");
         break;

      case 9:
         printf("THE ITEM IS REMOTE-CONTROL CAR\n");
         printf("ITEM IS AVILABLE\n");
         printf("THE PRICE OF THE ITEM IS Rs 600\n");
         break;

      case 10:
         printf("THE ITEM IS TOY\n");
         printf("ITEM IS AVILABLE\n");
         printf("THE PRICE OF THE ITEM IS Rs 500\n");
         break;

      case 11:
         printf("THE ITEM IS BOOK\n");
         printf("ITEM IS AVILABLE\n");
         printf("THE PRICE OF THE ITEM IS Rs 500\n");
         break;
      default:
         printf("INVALID ENTRY\n");
      }
   }

   return 0;
}