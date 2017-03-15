#include <iostream>
using namespace std;

class Problem
{
public:
	void SelectLanguage();
	void ShowTip();
	void SolveProblem();

	int fun(int m, int n);
	void jiafa();
	void jianfa();
	void chengfa();
	void chufa();
	void hunhe1();
	void hunhe2();
	void hunhe3();
	void hunhe4();
	void fenshujiafa();
	void fenshujianfa();
	void fenshuchengfa();
	void fenshuchufa();


private:
	int a, b, c, d, jieguo, daan, i = 0, j = 0;
	bool english = 0;
	struct fenshu
	{
		int fenzi;
		int fenmu;
	};

	char welcome[512];
	char tip1[512];
	char tip2[1024];
	char correct[512];
	char wrong[512];
	char correctNum[512];
	char wrongNum[512];
	char encourage[512];

};