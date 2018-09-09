#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stralign.h>

int Begin(char array[]);
int walk();
int cry();
int car();
int run(char array[]);
int refuge();
void bear();
int enter(char array[]);
int sneak(char array[]);
void axe(char array[]);
int leave(char array[]);
void left(char array[]);
void right(char array[], char array2[]);
int main()
{
	char hero_name[15];
	char v[15];
	printf("What is your first name?: ");
	scanf("%s", &hero_name);
	printf("What is your enemy's first name?: ");
	scanf("%s", &v);
	int i = Begin(v);
	if (i == 1)
	{
		i = walk();
		if (i == 1)
		{
			i = car();
			if (i == 1)
			{
				i = refuge();
				if (i == 1)
				{
					i = enter(v);
					if (i == 1)
					{
						i = sneak(v);
						if (i == 1)
						{
							i = leave(v);
							if (i == 1)
							{
								left(v);
							}
							else
							{
								right(v, hero_name);
							}
						}
						else
						{
							printf("\nWait, he isn't dead, %s surprise", v);
							axe(v);
						}
					}
					else
					{
						axe(v);
					}
				}
				else
				{
					bear();
				}
			}
			else
			{
				bear();
			}
		}
		else
		{
			i = run(v);
			if (i == 1)
			{
				i = refuge();
				if (i == 1)
				{
					i = enter(v);
					if (i == 1)
					{
						i = sneak(v);
						if (i == 1)
						{
							i = leave(v);
							if (i == 1)
							{
								left(v);
							}
							else
							{
								right(v, hero_name);
							}
						}
						else
						{
							printf("\nWait, he isn't dead, %s surprise\n", v);
							axe(v);
						}
					}
					else
					{
						axe(v);
					}
				}
				else
				{
					bear();
				}
			}
			else
			{
				bear();
			}
		}

	}
	else
	{
		i = cry();
		if (i == 1)
		{
			i = refuge();
			if (i == 1)
			{
				i = enter(v);
				if (i == 1)
				{
					i = sneak(v);
					if (i == 1)
					{
						i = leave(v);
						if (i == 1)
						{
							left(v);
						}
						else
						{
							right(v, hero_name);
						}

					}
					else
					{
						printf("\nWait, he isn't dead, %s surprise", v);
						axe(v);
					}
				}
				else
				{
					axe(v);
				}
			}
			else
			{
				bear();
			}
		}
		else
		{
			i = run(v);
			if (i == 1)
			{
				i = refuge();
				if (i == 1)
				{
					i = enter(v);
					if (i == 1)
					{
						i = sneak(v);
						if (i == 1)
						{
							i = leave(v);
							if (i == 1)
							{
								left(v);
							}
							else
							{
								right(v, hero_name);
							}
						}
						else
						{
							printf("\nWait, he isn't dead, %s surprise", v);
							axe(v);
						}
					}
					else
					{
						axe(v);
					}
				}
				else
				{
					bear();
				}
			}
			else
			{
				bear();
			}

		}

	}
	printf("This is inspired from Rob Cantuor's Shia Lebaouf Live\n");
	system("pause");
}

int Begin(char array[])
{
	int x;
	printf("\nYour walking in the woods.\nThere's no one around and your phone is dead.\nOut of the corner of your eye, you spot him, %s.",array );
	printf("\n");
	printf("What do you do?\n 1. Walk faster.\n 2. Yell out.\n Enter your number: ");
	scanf("%d", &x);
	while (x > 2 || x < 1)
	{
		printf("Invalid repsonse . Try again: ");
		scanf("%d", &x);
	}
	return(x);
}

int walk()
{
	int x;
	printf("\nHe's following you about twenty feet back.\nHe gets down on all fours and breaks into a sprint.\nHe's gaining on you\n");
	printf("What do you do?\n 1. Look for a car.\n 2. Start running.\n Enter your number: ");
	scanf("%d", &x);
	while (x > 2 || x < 1)
	{
		printf("Invalid repsonse . Try again: ");
		scanf("%d", &x);
	}
	return(x);
}

int cry()
{
	int x;
	printf("\nYou cry out for help, but no one responds.\nWhat were you thinking?\nHe's almost upon you now, and you can see there's blood on his face.\nMy God, there's blood everywhere.\n");
	printf("What do you do?\n 1. Look for refuge.\n 2. RUN.\n Enter your number: "); //bear trap = RUn
	scanf("%d", &x);
	while (x > 2 || x < 1)
	{
		printf("Invalid repsonse . Try again: ");
		scanf("%d", &x);
	}
	return(x);
}

int car()
{
	int x;
	printf("\nYour looking for your car but your all turned around.\nHe's almost upon you now, and you can see there's blood on his face.\nMy God, there's blood everywhere\n");
	printf("What do you do?\n 1. Look for refuge.\n 2. RUN.\n Enter your number: ");
	scanf("%d", &x);
	while (x > 2 || x < 1)
	{
		printf("Invalid repsonse. Try again: ");
		scanf("%d", &x);
	}
	return(x);

}

int run(char array[])
{
	int x;
	printf("\nYour running for your life from %s.\n", array);
	printf("He's bradishing a knife, its %s\nHe's lurking in the shadows...\n", array);
	printf("What do you do?\n 1. Look for refuge.\n 2. Hide in the bushes.\n Enter your number: ");
	scanf("%d", &x);
	while (x > 2 || x < 1)
	{
		printf("Invalid repsonse. Try again: ");
		scanf("%d", &x);
	}
	return(x);
}

int refuge()
{
	int x;
	printf("\nAha!\nIn the distance, a small cottage with a light on.\nYou move stealithly towards it\nNow your on the doorstep.\n");
	printf("What do you do?\n 1. Enter the cottage.\n 2. Hide in the bushes.\n Enter your number: ");
	scanf("%d", &x);
	while (x > 2 || x < 1)
	{
		printf("Invalid repsonse. Try again: ");
		scanf("%d", &x);
	}
	return(x);
}

void bear()
{
	printf("\nNow it's dark and you seem to have lost him, but your hopelessly lost yourself.\nWait...your leg.\nAHH, its caught in a bear trap.\nYou slowly succumb to your demise.\nYOU LOSE!\n");
}

int enter(char array[])
{
	int x;
	printf("\nSitting inside, its %s!\n", array);
	printf("Sharpening an axe, %s!\nBut he doesn't hear you enter...\n", array);
	printf("What do you do?\n 1. Sneak up.\n 2. Start a fight.\n Enter your number: ");
	scanf("%d", &x);
	while (x > 2 || x < 1)
	{
		printf("Invalid repsonse. Try again: ");
		scanf("%d", &x);
	}
	return(x);
}
int sneak(char array[])
{
	int x;
	printf("\nYour sneaking up behind him...\nStrangling your enemy, %s.", array);
	printf("\nFighitng for your life with %s.", array);
	printf("\nWrestling a knife from %s.",array);
	printf("\nYou stab it in his kidney.\nYour Safe at last from %s.", array);
	printf("\nWhat do you do?\n 1. Leave\n 2. Stay\n Enter your number: ");
	scanf("%d", &x);
	while (x > 2 || x < 1)
	{
		printf("Invalid repsonse. Try again: ");
		scanf("%d", &x);
	}
	return(x);
}

void axe(char array[])
{
	int x;
	printf("\nYou charge at him, but he's holding an axe!\n");
	printf("Your try punching %s, but he's dodging every swipe!\n", array);
	printf("You parry to the left, but he counters to the right!\nHe catchs you in the neck.\nHe's chopping off your head now!\nYou have just been decapitated by %s", array);
	printf("\nYOU LOSE\n");
}

int leave(char array[])
{
	int x;
	printf("\nYou limp into the dark woods...You've beaten %s.\n", array);
	system("pause");
	printf("WAIT!\n");
	system("pause");
	printf("\n");
	printf("He isn't dead! It's a %s surprise\nThere's a gun to your head and death in his eyes.\nBut you can do Jiu-Jitsu.", array);
	printf("\nBody slam your enemy %s.\nIt's a legendary fight with %s.\nJust a normal Tuesday night for %s.", array, array, array);
	printf("\nYou try to swing an axe at %s.\nHe's dodging every swipe\nHe is about to parry.\n", array);
	printf("Which way do you counter?\n 1. Left\n 2. Right\n Enter your number: ");
	scanf("%d", &x);
	while (x > 2 || x < 1)
	{
		printf("Invalid repsonse . Try again: ");
		scanf("%d", &x);
	}
	return(x);

}

void left(char array[])
{
	printf("\nHe parries to the left\nYou counter to the left, but you chose wrong!");
	printf("\nHe hits you in the chest and sends you flying!\n");
	printf("He towers over you with a knife in his hand\n");
	printf("Killing for sport %s\nEating all the bodies...\nActual cannibal %s", array, array);
	printf("\nYOU LOSE");
}

void right(char array[], char array2[])
{
	printf("\nHe parries to the left.\nYou counter to the right, you catch him in the neck\n");
	printf("Your chopping off his head now...\nYou have just decapitated %s\n", array);
	system("pause");
	printf("\nHis head topples to the floor, expressionless.\nYou fall to your knees and catch your breath.\nYou're finally safe from %s\n", array);
	printf("\n%s won!\n", array2);
}