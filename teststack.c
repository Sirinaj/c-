#include<stdio.h>
#include<conio.h>
#include<string.h>

int a,b,choice;

/********************************* MENU ***************************************/

menu()
{
      
      system("cls");
      printf("\t\t+----------------------------------------+\n");
      printf("\t\t|               PROGRAM                |\n");
      printf("\t\t+----------------------------------------+\n\n");
      printf("\t\t 1.Add data\n");
      printf("\t\t 2.Del data\n");
      printf("\t\t 3.Show data\n");
      printf("\t\t 4.Quit\n\n");
      printf("\t\tPlease Enter your choice(1,2,3,4):");
      return 0;
}

/***************************** PUSH *******************************************/
add()
{
      system("cls"); 
			   printf("\t\t+----------------------------------------+\n");
               printf("\t\t|              Add data           	    |\n");
               printf("\t\t+----------------------------------------+\n\n");
			   getch();
               show();
      
}

/********************************* POP ****************************************/
del()
{
      system("cls");
               printf("\t\t+----------------------------------------+\n");
               printf("\t\t|              Del data              	|\n");
               printf("\t\t+----------------------------------------+\n\n");
               getch();
               show();

}
/********************************* SHOW DATA **********************************/
show()
{
      system("cls");
      printf("\t\t+----------------------------------------+\n");
      printf("\t\t|               SHOW DATA                |\n");
      printf("\t\t+----------------------------------------+\n\n");
      getch();
          
}
/********************************** MAIN **************************************/
int main()
{
    while(choice!='4'){         
           system("cls");
           menu();
           choice=getche();
           switch(choice){          
                case'1':add(); break;
                case'2':del(); break;
                case'3':show(); break;
                case'4':return 0; break;
           }
     }
  return 0;        
}          
