#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct Pokemon{
    char pname[100];
    int hp;
    int pp;
    int lvl;
    char a1[100],a2[100],a3[100],a4[100];

};

void atk(int x,struct Pokemon *y){
  y->hp=y->hp-x;
}



//------------------------------------------------------------------------------------------------------------------

int chooseatk(struct Pokemon z,int l,char y1[100],char y2[100],char y3[100],char y4[100]){
    int f;
switch(l){
case 1:
    printf("%s used %s\n\n",z.pname,y1);
    f=10;
    break;
case 2:
    printf("%s used %s \n\n",z.pname,y2);
        f=12;
    break;
case 3:
    printf("%s used %s \n\n",z.pname,y3);
        f=19;
    break;
case 4:
    printf("%s used %s \n\n",z.pname,y4);
        f=14;

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
        printf("              _.--\"\"`-..\n");
    printf("            ,'          `.\n");
    printf("          ,'          __  `.\n");
    printf("         /|          \" __   \\\n");
    printf("        , |           / |.   .\n");
    printf("        |,'          !_.'|   |\n");
    printf("      ,'             '   |   |\n");
    printf("     /              |`--'|   |\n");
    printf("    |                `---'   |\n");
    printf("     .   ,                   |                       ,\".\n");
    printf("      ._     '           _'  |                    , ' \\ `\n");
    printf("  `.. `.`-...___,...---\"\"    |       __,.        ,`\"   L,|\n");
    printf("  |, `- .`._        _,-,.'   .  __.-'-. /        .   ,    \\\n");
    printf("-:..     `. `-..--_.,.<       `\"      / `.        `-/ |   .\n");
    printf("  `,         \"\"\"\"'     `.              ,'         |   |  ',,\n");
    printf("    `.      '            '            /          '    |'. |/\n");
    printf("      `.   |              \\       _,-'           |       ''\n");
    printf("        `._'               \\   '\"\\                .      |\n");
    printf("           |                '     \\                `._  ,'\n");
    printf("           |                 '     \\                 .'|\n");
    printf("           |                 .      \\                | |\n");
    printf("           |                 |       L              ,' |\n");
    printf("           `                 |       |             /   '\n");
    printf("            \\                |       |           ,'   /\n");
    printf("          ,' \\               |  _.._ ,-..___,..-'    ,'\n");
    printf("         /     .             .      `!             ,j'\n");
    printf("        /       `.          /        .           .'/\n");
    printf("       .          `.       /         |        _.'.'\n");
    printf("        `.          7`'---'          |------\"'_.'\n");
    printf("       _,.`,_     _'                ,''-----\"'\n");
    printf("   _,-_    '       `.     .'      ,\\\n");
    printf("   -\" /`.         _,'     | _  _  _.|\n");
    printf("    \"\"--'---\"\"\"\"\"'        `' '! |! /\n");
    printf("                            `\" \" -' mh\n");
    printf("\n");
    printf("\n");



    break;
case 2:


   printf("Your chosen Pokemon is SQUIRTLE \n");
        strcpy(x,"SQUIRTLE");
    strcpy(y,"CHARMANDER");
        printf("               _,........__\n");
    printf("            ,-'            \"`-.\n");
    printf("          ,'                   `-.\n");
    printf("        ,'                        \\\n");
    printf("      ,'                           .\n");
    printf("      .'\\               ,\"\".       `\n");
    printf("     ._.'|             / |  `       \\\n");
    printf("     |   |            `-.'  ||       `.\n");
    printf("     |   |            '-._,'||       | \\\n");
    printf("     .`.,'             `..,'.'       , |`-.\n");
    printf("     l                       .'`.  _/  |   `.\n");
    printf("     `-.._'-   ,          _ _'   -\" \\  .     `\n");
    printf("`.\"\"\"\"\"'-.`-...,---------','         `. `....__.\n");
    printf(".'        `\"-..___      __,'\\          \\  \\     \\\n");
    printf("\\_ .          |   `\"\"\"\"'    `.           . \\     \\\n");
    printf("  `.          |              `.          |  .     L\n");
    printf("    `.        |`--...________.'.        j   |     |\n");
    printf("      `._    .'      |          `.     .|   ,     |\n");
    printf("         `--,\\       .            `7\"\"' |  ,      |\n");
    printf("            ` `      `            /     |  |      |    _,-'\"\"\"`-.\n");
    printf("             \\ `.     .          /      |  '      |  ,'          `.\n");
    printf("              \\  v.__  .        '       .   \\    /| /              \\\n");
    printf("               \\/    `\"\"\\\"\"\"\"\"\"\"`.       \\   \\  /.''                |\n");
    printf("                `        .        `._ ___,j.  `/ .-       ,---.     |\n");
    printf("                ,`-.      \\         .\"     `.  |/        j     `    |\n");
    printf("               /    `.     \\       /         \\ /         |     /    j\n");
    printf("              |       `-.   7-.._ .          |\"          '         /\n");
    printf("              |          `./_    `|          |            .     _,'\n");
    printf("              `.           / `----|          |-............`---'\n");
    printf("                \\          \\      |          |\n");
    printf("               ,'           )     `.         |\n");
    printf("                7____,,..--'      /          |\n");
    printf("                                  `---.__,--.'mh\n");





    break;

case 3:
    printf("Your chosen Pokemon is BULBASAUR \n");
        strcpy(x,"BULBASAUR");
    strcpy(y,"SQUIRTLE");
        printf("                                           /\n");
    printf("                        _,.------....___,.' ',.-.\n");
    printf("                     ,-'          _,.--\"        |\n");
    printf("                   ,'         _.-'              .\n");
    printf("                  /   ,     ,'                   `\n");
    printf("                 .   /     /                     ``.\n");
    printf("                 |  |     .                       \\.\\\n");
    printf("       ____      |___._.  |       __               \\ `.\n");
    printf("     .'    `---\"\"       ``\"-.--\"'`  \\               .  \\\n");
    printf("    .  ,            __               `              |   .\n");
    printf("    `,'         ,-\"'  .               \\             |    L\n");
    printf("   ,'          '    _.'                -._          /    |\n");
    printf("  ,`-.    ,\".   `--'                      >.      ,'     |\n");
    printf(" . .'\\'   `-'       __    ,  ,-.         /  `.__.-      ,'\n");
    printf(" ||:, .           ,'  ;  /  / \\ `        `.    .      .'/\n");
    printf(" j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /\n");
    printf("/ L:_  |                 .  \"' :_;                `.'.'\n");
    printf(".    \"\"'                  \"\"\"\"\"'                    V\n");
    printf(" `.                                 .    `.   _,..  `\n");
    printf("   `,_   .    .                _,-'/    .. `,'   __  `\n");
    printf("    ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  .\n");
    printf("   /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |\n");
    printf("  .   _  `\"\"'--.._____..--\"   ,             '         |\n");
    printf("  | .\" `. `-.                /-.           /          ,\n");
    printf("  | `._.'    `,_            ;  /         ,'          .\n");
    printf(" .'          /| `-.        . ,'         ,           ,\n");
    printf(" '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.'\n");
    printf(" `\"^--'..'   '-`-^-'\"--    `-^-'`.''\"\"\"\"\"`.,^.`.--' mh\n");
    printf("\n");
    printf("\n");




    break;
case 4:
    printf("Your chosen Pokemon is PIKACHU \n");
        strcpy(x,"PIKACHU");
    strcpy(y,"BULBASAUR");
        printf("                                             ,-.\n");
    printf("                                          _.|  '\n");
    printf("                                        .'  | /\n");
    printf("                                      ,'    |'\n");
    printf("                                     /      /\n");
    printf("                       _..----\"\"---.'      /\n");
    printf(" _.....---------...,-\"\"                  ,'\n");
    printf(" `-._  \\                                /\n");
    printf("     `-.+_            __           ,--. .\n");
    printf("          `-.._     .:  ).        (`--\"| \\\n");
    printf("               7    | `\" |         `...'  \\\n");
    printf("               |     `--'     '+\"        ,\". ,\"\"-\n");
    printf("               |   _...        .____     | |/    '\n");
    printf("          _.   |  .    `.  '--\"   /      `./     j\n");
    printf("         \\' `-.|  '     |   `.   /        /     /\n");
    printf("         '     `-. `---\"      `-\"        /     /\n");
    printf("          \\       `.                  _,'     /\n");
    printf("           \\        `                        .\n");
    printf("            \\                                j\n");
    printf("             \\                              /\n");
    printf("              `.                           .\n");
    printf("                +                          \\\n");
    printf("                |                           L\n");
    printf("                |                           |\n");
    printf("                |  _ /,                     |\n");
    printf("                | | L)'..                   |\n");
    printf("                | .    | `                  |\n");
    printf("                '  \\'   L                   '\n");
    printf("                 \\  \\   |                  j\n");
    printf("                  `. `__'                 /\n");
    printf("                _,.--.---........__      /\n");
    printf("               ---.,'---`         |   -j\"\n");
    printf("                .-'  '....__      L    |\n");
    printf("              \"\"--..    _,-'       \\ l||\n");
    printf("                  ,-'  .....------. `||'\n");
    printf("               _,'                /\n");
    printf("             ,'                  /\n");
    printf("            '---------+-        /\n");
    printf("                     /         /\n");
    printf("                   .'         /\n");
    printf("                 .'          /\n");
    printf("               ,'           /\n");
    printf("             _'....----\"\"\"\"\" mh\n");




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
//--------------------------------------------------------------------
int main()
{

    int pa,ea;
    struct Pokemon player;
    player.hp=100;
    player.pp=100;
    struct Pokemon enemy;
    enemy.hp=100;
    enemy.pp=100;
    ChoosePokemon(player.pname,enemy.pname);
    AssignAtk(player.pname,player.a1,player.a2,player.a3,player.a4);
    AssignAtk(enemy.pname,enemy.a1,enemy.a2,enemy.a3,enemy.a4);

    getch();
    system("cls");

while(player.hp>0 && enemy.hp>0){
        int i;
    printf("HP of %s ",player.pname);
    for(i=(player.hp/10);i>0;i--){
        printf("||");
    }
printf("\n\n\n");
        int t,u;
    printf("Your turn \n");
    printf("1.%s       2.%s \n3.%s       4.%s \n",player.a1,player.a2,player.a3,player.a4);

    scanf("%d",&pa);
    t=chooseatk(player,pa,player.a1,player.a2,player.a3,player.a4);
    atk(t,&enemy);
    if(enemy.hp>0){
    ea=((pa*99)%4 +1);
    u=chooseatk(enemy,ea,enemy.a1,enemy.a2,enemy.a3,enemy.a4);
    atk(u,&player);
    }
    getch();
    system("cls");

}
if(enemy.hp<0){
    printf("%s has fainted \n\nYOU HAVE WON THE BATTLE! \n",enemy.pname);
}
else if(player.hp<0){
    printf("%s has fainted \n\nYOU LOOSE \n",player.pname);
}

else{
    printf("Both the Pokemon have fainted\n\nIT'S A DRAW! \n");
}
    return 0;
}
