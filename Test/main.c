#include<stdio.h>

//#define SCANF
/*
  < Description >
	gets(), scanf(), 字符串输入

  <-- Example -->
	window input redirection: test.exe < a.in
*/
int main(void) {
	char input[256] = "\0";
#ifdef SCANF
#pragma warning(disable : 4996) /* VS中使用scanf();需要这个来禁用警告 */
	scanf("%s", input);
#else
	gets(input);  /* 与scanf()不同之处在于gets()不会被空格中断 */
#endif // GETS
	printf("input: %s", input);
	return 0;
}