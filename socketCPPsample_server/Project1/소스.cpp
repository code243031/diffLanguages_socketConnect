#include <stdio.h>

int main()

{
	printf("---------------\n");
	printf("     �翬��    \n");
	printf("   2020243078  \n");
	printf("---------------\n");

	//���ڿ� = ���� ũ�⸸ŭ ���ڸ� ���� �ڿ� �ѹ��̴� ����, \n�� �ϳ� �� ����
	//sizeof==������ ũ�� int = 4byte, char=1byte ��
	char ch = 'a';
	char lion[10] = "sun moon";     //lion�� 10�� ���� �ְ� �� �濡 char�� �Է���
	int i = 0;
	printf("%d\n", sizeof(lion)); //lion�̶�� �迭�� ũ��
	printf("%c\n", ch); //ch  = ���� ���      %c  ==���ڸ� ����Ҷ� ���
	printf("%s\n", lion); //lion = ���ڿ� ���  %s  ==���ڿ��� ����Ҷ� ���


	printf("----------------\n");
	i = 0;
	while (i < 10)
	{
		printf("lion[%d] == %c\n", i, lion[i]); //���� ��� 	printf("%c\n", ch);//ch
		i++;
	}

	return 0;

}