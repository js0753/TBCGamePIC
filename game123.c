#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct Pokemon{
    char pname[100];
    int hp;

    struct move{
        char mname[100];
        int pp;
        int dmg;
    }m1[4];

    int hpp;
    int ppp;

}pok;

void atk(int ,struct Pokemon *);
int chooseatk(pok *z,int l);
void ChoosePokemon(char x[100],char y[100]);
void AssignAtk(pok *k);
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
pok player1,player2;
printf("Player 1 \n");
ChoosePokemon(player1.pname,"Null");
printf("\nPlayer 2 \n");
ChoosePokemon(player2.pname,"Null");
printf("Press Enter to Continue \n");
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

int chooseatk(pok *z,int l){
    int f;
    printf("%s used %s\n\n",z->pname,z->m1[l-1].mname);
    f=z->m1[l-1].dmg;
    z->m1[l-1].pp-=1;

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
    if(y[0]!='N')
    strcpy(y,"PIKACHU");

    break;
case 2:
    printf("Your chosen Pokemon is SQUIRTLE \n");
    strcpy(x,"SQUIRTLE");
    if(y[0]!='N')
    strcpy(y,"CHARMANDER");


    break;
case 3:
    printf("Your chosen Pokemon is BULBASAUR \n");
    strcpy(x,"BULBASAUR");
    if(y[0]!='N')
    strcpy(y,"SQUIRTLE");


    break;
case 4:
    printf("Your chosen Pokemon is PIKACHU \n");
        strcpy(x,"PIKACHU");
        if(y[0]!='N')
        strcpy(y,"BULBASAUR");


    break;
default:
    printf("Please enter a valid number ");
    }
    printf("Would you like to change your choice ? enter 'y' for yes and 'n' for no \n");
    getc(stdin);
    scanf("%c",&d);
    }
    if(y[0]!='N')
    printf("Enemy choosed %s \nPress Enter to continue\n",y);
}

//----------------------------------------------------------------------------------------------
void AssignAtk(pok *k){
char c=*k->pname;
k->m1[0].pp=20;
k->m1[1].pp=15;
k->m1[2].pp=3;
k->m1[3].pp=5;
k->m1[0].dmg=10;
k->m1[1].dmg=12;
k->m1[2].dmg=19;
k->m1[3].dmg=14;
 switch(c){
case 'P':
    strcpy(k->m1[0].mname,"THUNDERSHOCK");
    strcpy(k->m1[1].mname,"QUICK ATTACK");
    strcpy(k->m1[2].mname,"THUNDERBOLT");
    strcpy(k->m1[3].mname,"SLAM");
    break;
case 'C':
    strcpy(k->m1[0].mname,"SCRATCH");
    strcpy(k->m1[1].mname,"EMBER");
    strcpy(k->m1[2].mname,"FLAMETHROWER");
    strcpy(k->m1[3].mname,"SLASH");
    break;
case 'B':
    strcpy(k->m1[0].mname,"VINE WHIP");
    strcpy(k->m1[1].mname,"TACKLE");
    strcpy(k->m1[2].mname,"TAKE DOWN");
    strcpy(k->m1[3].mname,"RAZOR LEAF");
    break;
case 'S':
    strcpy(k->m1[0].mname,"BITE");
    strcpy(k->m1[1].mname,"WATER GUN");
    strcpy(k->m1[2].mname,"HYDRO PUMP");
    strcpy(k->m1[3].mname,"BUBBLE BEAM");
 }


}
//----------------------------------------------------------------------------

void Battle(pok *x,pok *y,int q){
    int pa,ea;    //player attack and enemy attack
    x->hp=100;
    y->hp=100;
    AssignAtk(x);
    AssignAtk(y);

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
printf("\n\n\n");
        int t,u;
    printf("Player 1 turn \n");
    printf("1.%s(PP:%d/20)       2.%s(PP:%d/15) \n3.%s(PP:%d/3)       4.%s(PP:%d/5) \n5.Open Bag\n",x->m1[0].mname,x->m1[0].pp,x->m1[1].mname,x->m1[1].pp,x->m1[2].mname,x->m1[2].pp,x->m1[3].mname,x->m1[3].pp);

    scanf("%d",&pa);
    if(pa!=5){
    if(x->m1[pa-1].pp>0)
    //t=chooseatk(*x,pa,x->m1[0].mname,x->m1[1].mname,x->m1[2].mname,x->m1[3].mname,&(x->m1[pa-1].pp));
    t=chooseatk(x,pa);
    else
   {
    t=0;
    printf("No PP left, Using an attack requires PP\n");
   }
    atk(t,y);
    }
    else
    printf("Items in the Bag are :\nHP Potions:%d\nPP Potions:%d",x->hpp,x->ppp);
    if(y->hp>0){
    if(q==1)
    ea=rand()%4 + 1;
    else{
    printf("\nPlayer 2 turn \n");
    printf("1.%s(PP:%d/20)       2.%s(PP:%d/15) \n3.%s(PP:%d/3)       4.%s(PP:%d/5) \n5.Open Bag\n",y->m1[0].mname,y->m1[0].pp,y->m1[1].mname,y->m1[1].pp,y->m1[2].mname,y->m1[2].pp,y->m1[3].mname,y->m1[3].pp);
    scanf("%d",&ea);
    }
    if(y->m1[ea-1].pp>0)
    //u=chooseatk(*y,ea,y->m1[0].mname,y->m1[1].mname,y->m1[2].mname,y->m1[3].mname,&(y->m1[ea-1].pp));
    u=chooseatk(y,ea);
    else
   {
    t=0;
    printf("No PP left, Using an attack requires PP\n");
   }

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
    if(q==1)
    printf("%s has fainted \n\nYOU HAVE WON THE BATTLE! \n",y->pname);
    else
    printf("%s has fainted \n\nPLAYER1 HAS WON THE BATTLE! \n",y->pname);

}
else if(x->hp<0){
    if(q==1)
    printf("%s has fainted \n\nYOU LOOSE \n",x->pname);
    else
    printf("%s has fainted \n\nPLAYER2 HAS WON THE BATTLE! \n",x->pname);

    }

else{
    printf("Both the Pokemon have fainted\n\nIT'S A DRAW! \n");
}


}


