#include <stdio.h>
#include <stdlib.h>

/*
int main(int argc, char *argv[]) {

	#01
	int i = 10;
	char c = 69;
	float f = 12.3;
		printf("i : %i %p \n", &i, &i);
		printf("c: %i %p \n", &c, &c);
		printf("f : %i %p \n", &f, &f);
	return 0;
}
*/

	#02
/*
int main(void) {
	int i = 10;
	char c = 'a';
	int *iptr;
	char *cptr;
	
	char *iptr2;
	iptr2 = iptr;
	
	iptr = &i;
	cptr = &c;
		printf("i : %p\n%p (size:%i)\n", iptr, &i, sizeof(iptr));
		printf("c : %p\n%p (size:%i)\n", cptr, &c, sizeof(cptr));
		printf("iptr2 : %p, %i\n", iptr2, *iptr2);
	return 0;
}

*/

/*
	#03
int main(void){
	
void main(void) {
	int i = 300; //300으로 변경해서도 해보기
	int *pi = &i;
	char *pc = &i;
		printf("%i, %i, %i\n", i, *pi, *pc);
}
	return 0;
}

*/

	#04
/*
void swap (int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void main(void) {
	int a = 3;
	int b = 5;
	swap(a, b);
	printf("a:%i, b:%i\n", a, b);
}

*/

	#05
	
int main(void)
{
	int i;
	int grade[5];
	int average = 0;
	int *gptr ; 
	
	for (i=0;i<5;i++){
		printf("intput value [%i] = ", i);
		scanf("%d", &grade[i]);
	}	
	
	gptr = grade ; 
	
	for (i=0;i<5;i++){
		printf("grade[%d] = %d\n", i, *(gptr+i));
		average += *(gptr+i);
	}

	printf(" \n -- average : %i\n", average/5);

return 0;

}
