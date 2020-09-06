#include<stdio.h>

/*
|  Input:  argc, [int], ������ַ�������, �����ֶ�����
|          argv, [char **], ����ָ��, �ȼ����ַ�������
*/
int main(int argc, char ** argv) {
	if (argc <= 1)
	{
		printf("args is needed...\r\n");
		return 1;
	}

	printf("arg count = %d, args:\r\n", argc);
	for (int i = 0; i < argc; i++)
	{
		printf("\t arg[%d] = %s\r\n", i, argv[i]);
	}
	return 0;
}