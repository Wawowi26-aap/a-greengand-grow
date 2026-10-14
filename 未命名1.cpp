#include <stdio.h> 
int add(int a, int b) 
{
	return a + b;
}
float BMI(float a,float b)
{
	return a/(b*b);
}
int main() 
{
	int r;
	r = add(2,3);
	printf("%d\n",r);
	float higth,weight;
	printf("請輸入你的身高：（m）"); 
scanf("%f",&higth);
printf("請輸入你的體重：（kg）"); 
scanf("%f",&weight);
float bmi;
bmi =BMI(weight, higth);
printf("你的BMI數值為：%.4f",bmi);
return 0;
}
