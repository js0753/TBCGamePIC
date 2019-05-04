#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct Pokemon{
    char pname[100];
    int hp;
    int pp;
    char a1[100],a2[100],a3[100],a4[100];
    int potions;

}pok;

void atk(int ,struct Pokemon *);
int chooseatk(struct Pokemon z,int l,char y1[100],char y2[100],char y3[100],char y4[100],int *p);
void ChoosePokemon(char x[100],char y[100]);
void AssignAtk(char k[100],char a1[100],char a2[100],char a3[100],char a4[100]);
void Battle();

//----------------------------------------------------------------------------------------------
int main()
{
    int k;

   printf("\n");
    printf("                                      |\n");
    printf("                                     /|\n");
    printf("                                   ,' |\n");
    printf("                                  .   |\n");
    printf("                                    | |\n");
    printf("                                 ' '| |\n");
    printf("                                / / | |\n");
    printf("       _,.-\"\"--._              / /  | |\n");
    printf("     ,'          `.           j '   ' '\n");
    printf("   ,'              `.         ||   / ,                         ___..--,\n");
    printf("  /                  \\        ' `.'`.-.,-\".  .       _..---\"\"'' __, ,'\n");
    printf(" /                    \\        \\` .\"`      `\"'\\   ,'\"_..--''\"\"\"'.'.'\n");
    printf(".                      .      .'-'             \\,' ,'         ,','\n");
    printf("|                      |      ,`               ' .`         .' /\n");
    printf("|                      |     /          ,\"`.  ' `-. _____.-' .'\n");
    printf("'                      |..---.|,\".      | | .  .-'\"\"   __.,-'\n");
    printf(" .                   ,'       ||,|      |.' |    |\"\"`'\"\n");
    printf("  `-._   `._.._____  |        || |      `._,'    |\n");
    printf("      `.   .       `\".     ,'\"| \"  `'           ,+.\n");
    printf("        \\  '         |    '   |   .....        .'  `.\n");
    printf("         .'          '     7  \".              ,'     \\\n");
    printf("                   ,'      |    `..        _,'      F\n");
    printf("                  .        |,      `'----''         |\n");
    printf("                  |      ,\"j  /                   | '\n");
    printf("                  `     |  | .                 | `,'\n");
    printf("                   .    |  `.|                 |/\n");
    printf("                    `-..'   ,'                .'\n");
    printf("                            | \\             ,''\n");
    printf("                            |  `,'.      _,' /\n");
    printf("                            |    | ^.  .'   /\n");
    printf("                             `-'.' j` V    /\n");
    printf("                                   |      /\n");
    printf("                                   |     /\n");
    printf("                                   |   ,'\n");
    printf("                                    `\"\"\n");


    printf("\n");
    printf("\n");

 printf(" _ __   ___ | | _____ _ __ ___   ___  _ __  \n");
printf("| '_ \\ / _ \\| |/ / _ \\ '_ ` _ \\ / _ \\| '_ \\ \n");
  printf("| |_ | (_) |   <  __/ | | | | | (_) | | | | \n");
printf("| .__/ \\___/|_|\\_\\___|_| |_| |_|\\___/|_| |_|\n");
printf("|_| \n ");
printf("\n\n");
printf("Enter 1 for Single Player 2 for multiplayer \n ");
scanf("%d",&k);

//getch();
system("cls");
//------------------------------------------------------

if(k==1){

pok player;
pok enemy;
ChoosePokemon(player.pname,enemy.pname);
getch();
system("cls");
Battle(&player,&enemy,1);
}
else if(k==2){
pok player1,player2,null;
ChoosePokemon(player1.pname,null.pname);
ChoosePokemon(player2.pname,null.pname);
getch();
system("cls");
Battle(&player1,&player2,2);
}

else
printf("Enter a valid number \n");





//getch();
//system("cls");

    return 0;
}

//----------------------------------------------------------------------------------------------

void atk(int x,struct Pokemon *y){
  y->hp=y->hp-x;
}



//------------------------------------------------------------------------------------------------------------------

int chooseatk(struct Pokemon z,int l,char y1[100],char y2[100],char y3[100],char y4[100],int *p){
    int f;
switch(l){
case 1:
    printf("%s used %s\n\n",z.pname,y1);
    f=10;
    *p=*p-5;
    break;
case 2:
    printf("%s used %s \n\n",z.pname,y2);
        f=12;
        *p-=6;
    break;
case 3:
    printf("%s used %s \n\n",z.pname,y3);
        f=19;
        *p-=20;
    break;
case 4:
    printf("%s used %s \n\n",z.pname,y4);
        f=14;
        *p-=16;
    break;
default:
    printf("Please enter a valid number ");
    }
return f;

}
//--------------------------------------------------------------------------------------------------------
void ChoosePokemon(char x[100],char y[100]){
    int a;
char d='y';
    printf("Choose a PokeMon \n 1 for CHARMANDER \n 2 for SQUIRTLE \n 3 for BULBASAUR \n 4 for PIKACHU \n");
    while(d=='y'){
    scanf("%d",&a);
    switch(a){
case 1:
    printf("Your chosen Pokemon is CHARMANDER \n");
    strcpy(x,"CHARMANDER");
    strcpy(y,"PIKACHU");

    break;
case 2:
    printf("Your chosen Pokemon is SQUIRTLE \n");
    strcpy(x,"SQUIRTLE");
    strcpy(y,"CHARMANDER");


    break;
case 3:
    printf("Your chosen Pokemon is BULBASAUR \n");
    strcpy(x,"BULBASAUR");
    strcpy(y,"SQUIRTLE");


    break;
case 4:
    printf("Your chosen Pokemon is PIKACHU \n");
        strcpy(x,"PIKACHU");
    strcpy(y,"BULBASAUR");


    break;
default:
    printf("Please enter a valid number ");
    }
    printf("Would you like to change your choice ? enter 'y' for yes and 'n' for no \n");
    getc(stdin);
    scanf("%c",&d);
    }

    printf("Enemy choosed %s \nPress Enter to continue\n",y);
}

//----------------------------------------------------------------------------------------------
void AssignAtk(char k[100],char a1[100],char a2[100],char a3[100],char a4[100]){
char c=k[0];

 switch(c){
case 'P':
    strcpy(a1,"THUNDERSHOCK");
    strcpy(a2,"QUICK ATTACK");
    strcpy(a3,"THUNDERBOLT");
    strcpy(a4,"SLAM");
    break;
case 'C':
    strcpy(a1,"SCRATCH");
    strcpy(a2,"EMBER");
    strcpy(a3,"FLAMETHROWER");
    strcpy(a4,"SLASH");
    break;
case 'B':
    strcpy(a1,"VINE WHIP");
    strcpy(a2,"TACKLE");
    strcpy(a3,"TAKE DOWN");
    strcpy(a4,"RAZOR LEAF");
    break;
case 'S':
    strcpy(a1,"BITE");
    strcpy(a2,"WATER GUN");
    strcpy(a3,"HYDRO PUMP");
    strcpy(a4,"BUBBLE BEAM");
 }


}
//----------------------------------------------------------------------------

void Battle(pok *x,pok *y,int q){
    int pa,ea;    //player attack and enemy attack
    x->hp=100;
    x->pp=100;
    y->hp=100;
    y->pp=100;
    AssignAtk(x->pname,x->a1,x->a2,x->a3,x->a4);
    AssignAtk(y->pname,y->a1,y->a2,y->a3,y->a4);

while(x->hp>0 && y->hp>0){
        int i;
    printf("HP of %s ",x->pname);
    for(i=(x->hp/10);i>0;i--){
        printf("||");
        }
        printf("        ");
        printf("HP of %s ",y->pname);
    for(i=(y->hp/10);i>0;i--){
        printf("||");
    }
    printf("\n\n PP of %s is : %d and PP of %s is : %d \n",x->pname,x->pp,y->pname,y->pp);
printf("\n\n\n");
        int t,u;
    printf("Player 1 turn \n");
    printf("1.%s       2.%s \n3.%s       4.%s \n",x->a1,x->a2,x->a3,x->a4);

    scanf("%d",&pa);
    if(x->pp>0)
    t=chooseatk(*x,pa,x->a1,x->a2,x->a3,x->a4,&(x->pp));
    else
   {
    t=0;
    printf("No PP left, Using an attack requires PP");
   }
    atk(t,y);
    if(y->hp>0){
    if(q==1)
    ea=rand()%4 + 1;
    else{
    printf("Player 2 turn \n");
    printf("1.%s(PP:%d)       2.%s(PP:%d) \n3.%s(PP:%d)       4.%s(PP:%d) \n",y->a1,5,y->a2,6,y->a3,y->a4);
    scanf("%d",&ea);
    }
    u=chooseatk(*y,ea,y->a1,y->a2,y->a3,y->a4,&(y->pp));
    //printf("%d",u);
    atk(u,x);
    }
    getch();
    system("cls");

}
int i;
printf("HP of %s ",x->pname);
    for(i=(x->hp/10);i>0;i--){
        printf("||");
        }
        printf("        ");
        printf("HP of %s ",y->pname);
    for(i=(y->hp/10);i>0;i--){
        printf("||");
    }
printf("\n\n");
if(y->hp<0){
    printf("%s has fainted \n\nYOU HAVE WON THE BATTLE! \n",y->pname);
}
else if(x->hp<0){
    printf("%s has fainted \n\nYOU LOOSE \n",x->pname);
}

else{
    printf("Both the Pokemon have fainted\n\nIT'S A DRAW! \n");
}


}

