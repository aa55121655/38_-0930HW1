#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma warning(disable:4996)

//111360238
float w, h, BMI;
int c;
int main() {
	printf("選擇模式 1是英磅英呎單位 2是公斤公尺單位\n");
	scanf("%d",&c);
	printf("Your weight:");
	scanf("%f",&w);
	printf("Your height:");
	scanf("%f",&h);
	if (c == 1) 
	{
		BMI = (w * 703) / (h*h);
	}
	else if (c==2)
	{
		BMI = w/(h*h);
	}
	printf("your BMI = %.2f\n", BMI);
	printf("\n");
	printf("BMI VALUS \n");
	printf("Underweight: less then 18.5 \n");
	printf("Normal:      between 18.5 and 24.9 \n");
	printf("Overweight:  between 25 and 29.9 \n");
	printf("Obese:       30 or greater \n");
}