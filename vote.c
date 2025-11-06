#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void histogram(char name[],float popularity){
printf("|");
for (int i=0;i<popularity/2;i++)
printf("*");
printf("\t %s-%.2f\n", name,popularity);   
}
float rand_1() {
float mor1 = (float)rand() / RAND_MAX;
float fin1 = (float)rand() / RAND_MAX;
float crsma1 = (float)rand() / RAND_MAX;
float vis1 = (float)rand() / RAND_MAX;
return 100 * (0.3 * mor1 + 0.25 * fin1 + 0.25 * crsma1 + 0.2 * vis1);
}

float rand_2() {
float mor2 = (float)rand() / RAND_MAX;
float fin2 = (float)rand() / RAND_MAX;
float crsma2 = (float)rand() / RAND_MAX;
float vis2 = (float)rand() / RAND_MAX;
return 100 * (0.3 * mor2 + 0.25 * fin2 + 0.25 * crsma2 + 0.2 * vis2);
}

int main() {
char name1[50], name2[50], name3[50];
float mor, fin, crsma, vis;
float pop_user, pop_rand1, pop_rand2;

srand(time(0));

printf("Welcome to the Online Voting simulation\n");
printf("Enter your candidate's name: ");
scanf("%s", name1);

printf("Determine %s's Morality (0-1): ", name1);
scanf("%f", &mor);
printf("Determine %s's Financial Power (0-1): ", name1);
scanf("%f", &fin);
printf("Determine %s's Charisma (0-1): ", name1);
scanf("%f", &crsma);
printf("Determine %s's Media Visibility (0-1): ", name1);
scanf("%f", &vis);

pop_user = 100 * (0.3 * mor + 0.25 * fin + 0.25 * crsma + 0.2 * vis);

printf("\nLet us now run a simulation with 2 randomly generated rival candidates\n");
printf("Enter the name of rival candidate 1: ");
scanf("%s", name2);
printf("Enter the name of rival candidate 2: ");
scanf("%s", name3);

pop_rand1 = rand_1();
pop_rand2 = rand_2();

printf("\nPopularity Scores:\n");
printf("%s: %.2f\n", name1, pop_user);
printf("%s: %.2f\n", name2, pop_rand1);
printf("%s: %.2f\n", name3, pop_rand2);

// Handle tie + revote
if (pop_user == pop_rand1 || pop_user == pop_rand2 || pop_rand1 == pop_rand2) {
printf("\nIt's a tie! Conducting a revote...\n");
pop_rand1 = rand_1();
pop_rand2 = rand_2();
printf("\nRevised Scores:\n");
printf("%s: %.2f\n", name1, pop_user);
printf("%s: %.2f\n", name2, pop_rand1);
printf("%s: %.2f\n", name3, pop_rand2);
}

// Winner declaration
if (pop_user > pop_rand1 && pop_user > pop_rand2)
    printf("%s wins the election!\n", name1);
else if (pop_rand1 > pop_user && pop_rand1 > pop_rand2)
    printf("%s wins the election!\n", name2);
else
    printf("%s wins the election!\n", name3);

histogram(name1,pop_user);
histogram(name2,pop_rand1);
histogram(name3,pop_rand2);

return 0;
}