#include <stdio.h>

int main()

{
	printf("---------------\n");
	printf("     양연지    \n");
	printf("   2020243078  \n");
	printf("---------------\n");

	//문자열 = 방의 크기만큼 문자를 저장 뒤에 한방이더 있음, \n이 하나 더 있음
	//sizeof==변수의 크기 int = 4byte, char=1byte 등
	char ch = 'a';
	char lion[10] = "sun moon";     //lion이 10개 방이 있고 그 방에 char를 입력함
	int i = 0;
	printf("%d\n", sizeof(lion)); //lion이라는 배열의 크기
	printf("%c\n", ch); //ch  = 문자 출력      %c  ==문자를 출력할때 사용
	printf("%s\n", lion); //lion = 문자열 출력  %s  ==문자열을 출력할때 사용


	printf("----------------\n");
	i = 0;
	while (i < 10)
	{
		printf("lion[%d] == %c\n", i, lion[i]); //문자 출력 	printf("%c\n", ch);//ch
		i++;
	}

	return 0;

}