#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include "Problem.h"
#include <time.h>



void Problem::ShowTip()
{
	cout << welcome << endl;
	cout << tip1 << endl;
	cout << tip2 << endl;
	cout << "**********************************************" << endl;
}

void Problem::SolveProblem()
{
	srand(time(0));
	while (true)
	{
		int e = rand() % 12 + 1;
		switch (e)
		{
		case 1:
			jiafa(); break;
		case 2:
			jianfa(); break;
		case 3:
			chengfa(); break;
		case 4:
			chufa(); break;
		case 5:
			hunhe1(); break;
		case 6:
			hunhe2(); break;
		case 7:
			hunhe3(); break;
		case 8:
			hunhe4(); break;
		case 9:
			fenshujiafa(); break;
		case 10:
			fenshujianfa(); break;
		case 11:
			fenshuchengfa(); break;
		case 12:
			fenshuchufa(); break;
		}
		char o = getchar();
		if (o == 'e')
		{
			cout << "**********************************************" << endl;
			cout << correctNum << i << endl;
			cout << wrongNum << j - 1 << endl;
			cout << encourage << endl;
			break;
		}

	}
}

int Problem::fun(int m, int n)
{
	int t;
	while (n != 0)
	{
		t = m%n;
		m = n;
		n = t;
	}
	return m;
}
void Problem::jiafa()                         //加法函数 
{
	srand(time(0));
	a = rand() % 10;
	b = rand() % 10;
	printf("%d+%d=", a, b);
	daan = a + b;
	scanf("%d", &jieguo);
	if (daan == jieguo)
	{
		cout << correct << endl;
		i++;
	}
	else
	{
		cout << wrong << endl;
		j++;
	}
}
void Problem::jianfa()                         //减法函数 
{
	srand(time(0));
	a = rand() % 10;
	b = rand() % 10;
	printf("%d-%d=", a, b);
	daan = a - b;
	scanf("%d", &jieguo);
	if (daan == jieguo)
	{
		cout << correct << endl;
		i++;
	}
	else
	{
		cout << wrong << endl;
		j++;
	}
}
void Problem::chengfa()                       //乘法函数 
{
	srand(time(0));
	a = rand() % 10;
	b = rand() % 10;
	printf("%d*%d=", a, b);
	daan = a*b;
	scanf("%d", &jieguo);
	if (daan == jieguo)
	{
		cout << correct << endl;
		i++;
	}
	else
	{
		cout << wrong << endl;
		j++;
	}
}
void Problem::chufa()                         //除法函数 
{
	float h, s;
	srand(time(0));
	a = rand() % 10;
	b = rand() % 10;
	printf("%d÷%d=", a, b);
	h = ((int)(((float)a / b) * 100 + 0.5)) / 100.0;
	scanf("%f", &s);
	if (h == s)
	{
		cout << correct << endl;
		i++;
	}
	else
	{
		cout << wrong << endl;
		j++;
	}
}
void Problem::hunhe1()                      //混合运算模板1 
{
	srand(time(0));
	a = rand() % 10;
	b = rand() % 10;
	c = rand() % 10;
	d = rand() % 10;
	printf("(%d+%d)*(%d-%d)=", a, b, c, d);
	daan = (a + b)*(c - d);
	scanf("%d", &jieguo);
	if (daan == jieguo)
	{
		cout << correct << endl;
		i++;
	}
	else
	{
		cout << wrong << endl;
		j++;
	}
}
void Problem::hunhe2()                       //混合运算模板2 
{
	srand(time(0));
	a = rand() % 10;
	b = rand() % 10;
	c = rand() % 10;
	d = rand() % 10;
	printf("(%d+%d)-(%d-%d)=", a, b, c, d);
	daan = (a + b) - (c - d);
	scanf("%d", &jieguo);
	if (daan == jieguo)
	{
		cout << correct << endl;
		i++;
	}
	else
	{
		cout << wrong << endl;
		j++;
	}
}
void Problem::hunhe3()                         //混合运算模板3 
{
	srand(time(0));
	a = rand() % 10;
	b = rand() % 10;
	c = rand() % 10;
	printf("%d+%d*%d=", a, b, c);
	daan = a + b*c;
	scanf("%d", &jieguo);
	if (daan == jieguo)
	{
		cout << correct << endl;
		i++;
	}
	else
	{
		cout << wrong << endl;
		j++;
	}
}
void Problem::hunhe4()                    //混合运算模板4 
{
	srand(time(0));
	a = rand() % 10;
	b = rand() % 10;
	c = rand() % 10;
	printf("%d+%d-%d=", a, b, c);
	daan = a + b - c;
	scanf("%d", &jieguo);
	if (daan == jieguo)
	{
		cout << correct << endl;
		i++;
	}
	else
	{
		cout << wrong << endl;
		j++;
	}
}
void Problem::fenshujiafa()                    //分数加法 
{
	int q, w, e, result1, result2, qq, ww;
	struct fenshu x, y;
	srand(time(0));
	x.fenzi = rand() % 10 + 1;
	x.fenmu = rand() % 10 + 1;
	y.fenzi = rand() % 10 + 1;
	y.fenmu = rand() % 10 + 1;
	printf("%d/%d+%d/%d=", x.fenzi, x.fenmu, y.fenzi, y.fenmu);
	q = x.fenmu*y.fenmu / fun(x.fenmu, y.fenmu);          //fenmu
	w = q / x.fenmu*x.fenzi + q / y.fenmu*y.fenzi;           //fenzi 
	e = fun(q, w);
	if (q / e == 1)
	{
		result1 = w / e;
		scanf("%d", &qq);
		if (qq == result1)
		{
			cout << correct << endl;
			i++;
		}
		else
		{
			cout << wrong << endl;
			j++;
		}
	}
	else
	{
		result1 = w / e;
		result2 = q / e;
		scanf("%d %d", &qq, &ww);
		if (qq == result1&&ww == result2)
		{
			cout << correct << endl;
			i++;
		}
		else
		{
			cout << wrong << endl;
			j++;
		}
	}

}
void Problem::fenshujianfa()                   //分数减法 
{
	int q, w, e, result1, result2, qq, ww;
	struct fenshu x, y;
	srand(time(0));
	x.fenzi = rand() % 10 + 1;
	x.fenmu = rand() % 10 + 1;
	y.fenzi = rand() % 10 + 1;
	y.fenmu = rand() % 10 + 1;
	printf("%d/%d-%d/%d=", x.fenzi, x.fenmu, y.fenzi, y.fenmu);
	q = x.fenmu*y.fenmu / fun(x.fenmu, y.fenmu);          //fenmu
	w = q / x.fenmu*x.fenzi - q / y.fenmu*y.fenzi;           //fenzi 
	e = fun(q, w);
	if (q / e == 1)
	{
		result1 = w / e;
		scanf("%d", &qq);
		if (qq == result1)
		{
			cout << correct << endl;
			i++;
		}
		else
		{
			cout << wrong << endl;
			j++;
		}
	}
	else
	{
		result1 = w / e;
		result2 = q / e;
		scanf("%d %d", &qq, &ww);
		if (qq == result1&&ww == result2)
		{
			cout << correct << endl;
			i++;
		}
		else
		{
			cout << wrong << endl;
			j++;
		}
	}

}
void Problem::fenshuchengfa()                    //分数乘法 
{
	int q, w, e, result1, result2, qq, ww;
	struct fenshu x, y;
	srand(time(0));
	x.fenzi = rand() % 10 + 1;
	x.fenmu = rand() % 10 + 1;
	y.fenzi = rand() % 10 + 1;
	y.fenmu = rand() % 10 + 1;
	printf("%d/%d*%d/%d=", x.fenzi, x.fenmu, y.fenzi, y.fenmu);
	q = x.fenmu*y.fenmu;          //fenmu
	w = x.fenzi*y.fenzi;       //fenzi 
	e = fun(q, w);
	if (q / e == 1)
	{
		result1 = w / e;
		scanf("%d", &qq);
		if (qq == result1)
		{
			cout << correct << endl;
			i++;
		}
		else
		{
			cout << wrong << endl;
			j++;
		}
	}
	else
	{
		result1 = w / e;
		result2 = q / e;
		scanf("%d %d", &qq, &ww);
		if (qq == result1&&ww == result2)
		{
			cout << correct << endl;
			i++;
		}
		else
		{
			cout << wrong << endl;
			j++;
		}
	}

}
void Problem::fenshuchufa()                      //分数除法 
{
	int q, w, e, result1, result2, qq, ww;
	struct fenshu x, y;
	srand(time(0));
	x.fenzi = rand() % 10 + 1;
	x.fenmu = rand() % 10 + 1;
	y.fenzi = rand() % 10 + 1;
	y.fenmu = rand() % 10 + 1;
	printf("%d/%d÷%d/%d=", x.fenzi, x.fenmu, y.fenzi, y.fenmu);
	q = x.fenmu*y.fenzi;        //fenmu
	w = x.fenzi*y.fenmu;          //fenzi 
	e = fun(q, w);
	if (q / e == 1)
	{
		result1 = w / e;
		scanf("%d", &qq);
		if (qq == result1)
		{
			cout << correct << endl;
			i++;
		}
		else
		{
			cout << wrong << endl;
			j++;
		}
	}
	else
	{
		result1 = w / e;
		result2 = q / e;
		scanf("%d %d", &qq, &ww);
		if (qq == result1&&ww == result2)
		{
			cout << correct << endl;
			i++;
		}
		else
		{
			cout << wrong << endl;
			j++;
		}
	}
}
