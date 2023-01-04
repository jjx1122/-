#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
bool judge(int a) {
	if (a < 0)
		return false;
	else if (a % 2 == 1) {
		printf("ÊÇÆæÊý");
		return true;
	}
}
int main() {
	int a;
	scanf("%d", &a);
	judge(a);
	return 0;
}