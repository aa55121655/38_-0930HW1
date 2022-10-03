#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma warning(disable:4996)

//111360238
int km = 0;       // total km driven per day
int gasCost = 0;      // cost per liter  of gasoline
int liter = 0;      // average km per liter
int parkFee = 0;     // parking fees per day
int tolls = 0;     // tolls per day
int total = 0;      // total cost
int main() {
	//1 mile per gallon =0.425143707 kilometers per liter
    //1公里 =0.621371192 英里

	printf("%s", "Please enter the total km driven per day: "); //一整天的總里程數
	scanf("%d", &km);

	printf("%s", "Please enter the cost per liter of gasoline: "); //汽油一公升多少錢
	scanf("%d", &gasCost);

	printf("%s", "Please enter average km per liter: "); //每公升汽油可以行使多少公里
	scanf("%d", &liter);

	printf("%s", "Please enter the parking fees per day: "); // 一天的停車費
	scanf("%d", &parkFee);

	printf("%s", "Please enter the tolls per day: "); //一天的過路費
	scanf("%d", &tolls);

	total = tolls + parkFee + (km / liter) * gasCost;
	printf("Your daily cost of driving to work is $%d\n", total);
}