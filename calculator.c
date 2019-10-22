//
//  calculator.c
//  Momentum-Impulse-Calculator
//
//  Created by Sam Kim on 22/10/2019.
//  Copyright © 2019 Sam Kim. All rights reserved.
//

#include <stdio.h>
#include <Windows.h>

int p = 0;
int i = 0;
int m = 0;
int v = 0;
int f = 0;
int t = 0;

void func0()
{
	printf("\n프로그램을 종료합니다.\n\n");

	return;
}
void func1()
{
	system("cls");

	printf("질량(m)을 입력하세요 > ");
	scanf("%d", &m);

	printf("속도(v)를 입력하세요 > ");
	scanf("%d", &v);

	p = m * v;
	printf("\n운동량(p)은 %dkg·m/s 입니다.\n\n", p);

	system("pause");

	return;
}
void func2()
{
	system("cls");

	printf("힘(f)을 입력하세요 > ");
	scanf("%d", &f);

	printf("시간(t)을 입력하세요 > ");
	scanf("%d", &t);

	i = f * t;
	printf("\n충격량(I)은 %dN·s 또는 %dkg·m/s 입니다.\n\n", i, i);

	system("pause");

	return;
}
void func9()
{
	system("cls");

	p = 0;
	i = 0;
	m = 0;
	v = 0;
	f = 0;
	t = 0;

	printf("프로그램 초기화를 완료했습니다.\n\n");

	system("pause");

	return;
}
void func_wrong()
{
	printf("\n해당 기능을 찾을 수 없습니다.\n\n");

	system("pause");

	return;
}

int main()
{
	printf("##################################\n");
	printf("##################################\n");
	printf("##################################\n");
	printf("#####                        #####\n");
	printf("#####  운동량 충격량 계산기  #####\n");
	printf("#####                        #####\n");
	printf("##################################\n");
	printf("##################################\n");
	printf("##################################\n\n");

	system("pause");

	while (1)
	{
		int function = 0;

		system("cls");

		printf("원하는 기능을 선택하세요:\n\n");
		printf("1. 운동량(p) 계산\n");
		printf("2. 충격량(I) 계산\n");
		printf("9. 프로그램 초기화\n");
		printf("0. 프로그램 종료\n\n");
		printf("** 오류가 발생할 경우 프로그램을 종료하고 재실행하거나 9번을 이용하여 프로그램을 초기화하세요. **\n");

		printf("\n입력(숫자) > ");
		scanf("%d", &function);

		if (function == 0)
		{
			func0();

			return 0;
		}
		else if (function == 1)
		{
			func1();
		}
		else if (function == 2)
		{
			func2();
		}
		else if (function == 9)
		{
			func9();
		}
		else
		{
			func_wrong();
		}
	}
}
