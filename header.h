int i;
float j=0.0;


char *str1="SRINIVAS INSTITUTE OF TECHNOLOGY";
char *str2="VALACHIL MANGALURU";
char *str3="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
char *str5="COMPUTER GRAPHICS AND VISUALIZATION";
char *str4="MINI PROJECT ON";
char *str6="MIRACLE : THE HONEST WOODCUTTER";
char *str8="TEAM MEMBERS";
char *str9="Shreesha M : 4SN14CS094";
char *str10="Sudharshan A : 4SN14CS101";
char *str11="DEPT OF CSE, SEC B";
char *str12="PROJECT GUIDED BY";
char *str13="MR SUDARSHAN K";
char *str14="ASSISTANT PROFESSOR";
char *str15="DEPT OF CSE";
char *str7="Click here to Continue";

static float firstWindow,secondWindow,thirdWindow,fourthWindow,fifthWindow,sixthWindow,seventhWindow,eighthWindow,ninthWindow,tenthWindow;
int windowFlag=1;

float woodcutterMover;
static int flag5=0,flagThirdScene=0;
float yMove=0;
float moveAxeY=0;
#define PI 3.14159265359


int flagAxe=0;
static int flagFourthScene=1;

static int flagFifthScene=0; 
float moveAxeInWater=0;

float moveFishes=0.0;
float theta=0.0;
static int flagMoveDownAxe=0;


//define color for three axes
#define BLACK 1;
#define SILVER 2;
#define GOLD 3;

int flagCutWood=0;
float moveFishAxe=0.0;
float moveFishAxe2=0.0;
float moveFishAxe3=0.0;
float moveFishAxe4=0.0;
char strD[]="Press D to Move";
char strA[]="Press A to Stop";
char strW[]="Press W to up";
char strS[]="Press S to  down";
char strF[]="Press F to climb and cut the tree";
char strT[]="press T to drop the axe";
char strG[]="press G to fall down axe";
char strY[]="press Y to UnderWater scene";
char strB[]="Press B to Silver axe";
char strN[]="Press N to Normal axe";
char strJ[]="Press J to Special axes";
char strK[]="Press K to conclusion";
float tCount=0.0;

bool flagPlayAxe=true;