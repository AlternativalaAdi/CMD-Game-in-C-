#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>

void firstChAttack();
void secondChAttack();
void firstWins();
void secondWins();
void startGame();
void rogueInfo();
void barbarianInfo();
void mageInfo();
void warlockInfo();
void amazonInfo();
void undeadInfo();

int main()
{   
    int option;
    int option2;
   int c = 1000;
   int e = 2000;
   int d = 4000;
   moving1();
   while(true)
   {
   printf("\n1)Start\n");
   printf("2)Campain(in development)\n");
   printf("3)Classes\n");
   printf("4)Exit\n");
   scanf("%d",&option);
   switch(option)
   {
    case 1: 
        system("cls");
        startGame();
        break;
    case 2:
        system("cls");
        campain();
        break;
    case 3:
        system("cls");
        printf("Select Class:\n");
        printf("1.Rogue\n");
        printf("2.Barbarian\n");
        printf("3.Mage\n");
        printf("4.Amazon\n");
        printf("5.Warlock\n");
        printf("6.Undead\n");
        printf("more coming soon..\n");
        scanf("%d",&option2);
        switch(option2)
        {
            case 1:
                rogueInfo();
                break;
            case 2:
                barbarianInfo();
                break;
            case 3:
                mageInfo();
                break;
            case 4:
                amazonInfo();
                break;
            case 5:
                warlockInfo();
                break;
            case 6:
                undeadInfo();
                break;
            default:
                printf("invalid option");
                break;
        }
        Sleep(d);
        system("cls");
        break;
    case 4:
        exit(0);
        break;
   }
   }


    return 0;
}
void moving1()
{

printf("      (;)              (;)     \n");
printf("      /|\\___        ___/|\\     \n");
printf("     []|\\              /|[]     \n");
printf("       L \\            / ]    \n");
}

void moving2()
{
printf("       (;)           (;)     \n");
printf("       /|\\           /|\\     \n");
printf("      //|[]         []|\\\\   \n");
printf("      / |             | \\   \n");
}
void moving3()
{
printf("        (;)          (;)     \n");
printf("        /|\\___    ___/|\\     \n");
printf("       []|\\          /|[]     \n");
printf("         L \\        / ]    \n");
}
void moving4()
{
printf("         (;)       (;)     \n");
printf("         /|\\       /|\\     \n");
printf("        //|[]     []|\\\\   \n");
printf("        / |         | \\   \n");   
}

void firstChAttack()
{
printf("\n");
printf("      (;)       (;) ");
printf("\n      /|\\--->   /|\\      ");
printf("\n     []/\\        /\\[] ");
printf("\n      /  \\      /  \\   ");

}

void secondChAttack()
{
printf("\n");
printf("      (;)       (;) ");
printf("\n      /|\\   <---/|\\  ");
printf("\n     []/\\        /\\[] ");
printf("\n      /  \\      /  \\   ");
}

void firstWins()
{
    printf("\n");
printf("      (;)       ");
printf("\n      /|\\--->    ");
printf("\n     []/\\              \\ |");
printf("\n      /  \\      |=====--\\|-O   ");
}

void secondWins()
{
    printf("\n");
printf("                 (;) ");
printf("\n             <---/|\\  ");
printf("\n     | /          /\\[] ");
printf("\n   O-|/ -===|    /  \\   ");
}

void rogueInfo()
{
    printf("\nLife 40");
    printf("\nPunch 15");
    printf("\nKick 5");
}

void barbarianInfo()
{
    printf("\nLife 60");
    printf("\nPunch 8");
    printf("\nKick 5");
}

void mageInfo()
{
    printf("\nLife 45");
    printf("\nPunch 12");
    printf("\nKick 7");
}

void amazonInfo()
{
    printf("\nLife 50");
    printf("\nPunch 10");
    printf("\nKick 7");
}
void warlockInfo()
{
    printf("\nlife1 40");
    printf("\nPunch 10");
    printf("\nKick 10");   
}
void undeadInfo()
{
    printf("\nlife1 25");
    printf("\nPunch 20");
    printf("\nKick 15");
}

void startGame()
{
   int class;
   int c = 1000;
   int d = 1300;
   int f = 750;
   int k = 350;
   int l = 3000;
   int life2;
    int life1;
    int difficulty;
    int punch;
    int punch1 =10;
    int kick;
    int kick1 = 5;
    printf("choose your class: ");
   printf("\n1.Rogue\n2.Barbarian\n3.Mage\n4.Amazon\n5.Warlock\n6.Undead\n");
   printf("Input your choice, warrior: ");
   scanf("%d",&class);
    system("cls");
   switch(class)
   {
    case 1:
        printf("you choosed Rogue");
        life1 = 40;
        punch = 15;
        kick = 5;
        break;
    case 2:
        printf("you choosed Barbarian");
        life1 = 60;
        punch = 8;
        kick = 5;
        break;
    
    case 3:
        printf("you choosed Mage");
        life1 = 45;
        punch = 10;
        kick = 7;
        break;
    case 4:
        printf("you choosed Amazon");
        life1 = 50;
        punch = 10;
        kick = 7;
        break;
        
    case 5:
        printf("you choosed Warlock");
        life1 = 35;
        punch = 10;
        kick = 10;
        break;
        
    case 6:
        printf("you choosed Undead");
        life1 = 20;
        punch = 20;
        kick = 15;
        break;
           
    default:
        printf("you suck!");
        exit(0);
   }
   
   printf("\nChoose your difficulty: \n");
   printf("1.I can win\n2.Hurt Me Plenty\n3.Nightmare\n");
   scanf("%d",&difficulty);
   if(difficulty==1)
   {
    life2 = 35;
   }
   else if(difficulty==2)
   {
    life2 = 50;
   }
   else
   {
    life2 = 65;
   }
    system("cls");
    printf("\tSTART\n");

    Sleep(d);
    system("cls");
    moving1();
    Sleep(f);
    system("cls");
    moving2();
    Sleep(f);
    system("cls");
    moving3();
    Sleep(f);
    system("cls");
    moving4();
    Sleep(f);
    system("cls");
    
    int a;
    int b;
    while(life1 && life2 >0)
    {

        a = rand();
        b = a%3;
        
        firstChAttack();
        if(b==2)
        {   printf("\nPUNCH!!");
            life2 = life2 - punch;
            printf("\nlife1 = %d\t life2 =%d",life1,life2);
                if(life2<=0)
            {
                Sleep(d);
                system("cls");
                printf("\n\tcharacter 1 wins!!");
                firstWins();
                break;
            }
        }
        else
        {   printf("\nKICK!");
            life2 =  life2 - kick;
            printf("\nlife1 = %d\t life2 =%d",life1,life2);
                if(life2<=0)
            {
                Sleep(d);
                system("cls");
                printf("\n\tcharacter 1 wins!!");
                firstWins();
                break;
            }
        }
    Sleep(d);
    system("cls");
        secondChAttack();
        a = rand();
        b = a%3;
        if(b==2)
        {
            printf("\n\t\t  PUNCH!!");
            life1 = life1 - punch1;
            printf("\nlife1 = %d\t life2 =%d",life1,life2);
                if(life1<=0)
            {
                Sleep(d);
                system("cls");
                printf("\n\tcharacter 2 win!!");
                secondWins();
                break;
            }
        }
        
        else
        {   printf("\n\t\t  KICK!");
            life1 =  life1 - kick1;
            printf("\nlife1 = %d\t life2 = %d",life1,life2);
                if(life1<=0)
            {   
                Sleep(d);
                system("cls");
                secondWins();
                printf("\n\tcharacter 2 win!!");
                break;
            }
        }
        Sleep(d);
        system("cls");
        
        
        
    }
    Sleep(l);
    
}


void campain()
{
    int class;
   int d = 1300;
   int f = 750;
   int k = 5000;
   int l = 3000;
   int life2=35;
   int add = 3;
   int add2 = 1;
    int life1;
    int index;
    int index2 = 35;
    int punch;
    int punch1 =5;
    int kick;
    int kick1 = 3;
    int i=1;
    int points=0;
    printf("choose your class: ");
   printf("\n1.Rogue\n2.Barbarian\n3.Mage\n4.Amazon\n5.Warlock\n6.Undead\n");
   printf("Input your choice, warrior: ");
   scanf("%d",&class);
    system("cls");
   switch(class)
   {
    case 1:
        printf("you choosed Rogue");
        index= 40;
        punch = 15;
        kick = 5;
        break;
    case 2:
        printf("you choosed Barbarian");
        index = 60;
        punch = 8;
        kick = 5;
        break;
    
    case 3:
        printf("you choosed Mage");
        index = 45;
        punch = 10;
        kick = 7;
        break;
    case 4:
        printf("you choosed Amazon");
        index = 50;
        punch = 10;
        kick = 7;
        break;
        
    case 5:
        printf("you choosed Warlock");
        index = 35;
        punch = 10;
        kick = 10;
        break;
        
    case 6:
        printf("you choosed Undead");
        index = 20;
        punch = 20;
        kick = 15;
        break;
           
    default:
        printf("you suck!");
        exit(0);
   }
   
    while(true)
    {
        printf("\nLEVEL %d\n",i);
        life1 = index;
        life2 = index2 + add*i;
        punch1 = punch1 + add2*i;
        kick1 = kick1 + add2*i;
        printf("YOU:      life  %d\t %d \t %d\t \n",life1,kick,punch);
        printf("OPPONENT: life  %d\t %d \t %d\t",life2,kick1,punch1);
        i++;
        Sleep(k);

        Sleep(d);
        system("cls");
        moving1();
        Sleep(f);
        system("cls");
        moving2();
        Sleep(f);
        system("cls");
        moving3();
        Sleep(f);
        system("cls");
        moving4();
        Sleep(f);
        system("cls");
        
        int a;
        int b;
        while(life1 || life2 >0)
        {

            a = rand();
            b = a%3;
            
            firstChAttack();
            if(b==2)
            {   printf("\nPUNCH!!");
                life2 = life2 - punch;
                printf("\nlife1 = %d\t life2 =%d",life1,life2);
                    if(life2<=0)
                {
                    Sleep(d);
                    system("cls");
                    printf("\n\tcharacter 1 wins!!");
                    points = points + 5;
                    firstWins();
                    break;
                }
            }
            else
            {   printf("\nKICK!");
                life2 =  life2 - kick;
                printf("\nlife1 = %d\t life2 =%d",life1,life2);
                    if(life2<=0)
                {
                    Sleep(d);
                    system("cls");
                    printf("\n\tcharacter 1 wins!!");
                    points = points + 5;
                    firstWins();
                    break;
                }
            }
        Sleep(d);
        system("cls");
            secondChAttack();
            a = rand();
            b = a%3;
            if(b==2)
            {
                printf("\n\t\t  PUNCH!!");
                life1 = life1 - punch1;
                printf("\nlife1 = %d\t life2 =%d",life1,life2);
                    if(life1<=0)
                {
                    Sleep(d);
                    system("cls");
                    printf("\n\tcharacter 2 win!!\n");
                    secondWins();
                    printf("\nYour score: %d points",points);
                    exit(0);
                }
            }
            
            else
            {   printf("\n\t\t  KICK!");
                life1 =  life1 - kick1;
                printf("\nlife1 = %d\t life2 = %d",life1,life2);
                    if(life1<=0)
                {   
                    Sleep(d);
                    system("cls");
                    secondWins();
                    printf("\n\tcharacter 2 win!!\n");
                    printf("\nYour score: %d points",points);
                    exit(0);
                }
            }
            Sleep(d);
            system("cls");
            
            
            
        }
        Sleep(l);
    }

}
