#include<stdio.h>

//#define SCANF
/*
  < Description >
	gets(), scanf(), �ַ�������

  <-- Example -->
	window input redirection: test.exe < a.in
*/
int main(void) {
	char input[256] = "\0";
#ifdef SCANF
#pragma warning(disable : 4996) /* VS��ʹ��scanf();��Ҫ��������þ��� */
	scanf("%s", input);
#else
	gets(input);  /* ��scanf()��֮ͬ������gets()���ᱻ�ո��ж� */
#endif // GETS
	printf("input: %s", input);
	return 0;
}