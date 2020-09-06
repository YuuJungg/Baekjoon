#include <stdio.h>
#include <string.h>

#define TRUE 1  //1반환
#define FALSE 0  //0반환
#define MINUS -1   //-1반환
#define MAX_SIZE 10000  //스택 배열 사이즈

typedef struct _stack {  //스택 구조체
	int arr[MAX_SIZE];
	int top;
}Stack;

void StackInit(Stack* sp) {  //스택 초기화 함수
	sp->top = -1;
}

int IsEmpty(Stack* sp) {  //스택이 비어있는지 확인 
	if (sp->top == -1)
		return TRUE;
	return FALSE;
}

int Size(Stack* sp) {  //스택의 size 반환
	return sp->top + 1;
}

int IsFull(Stack* sp) {  //스택이 꽉 차있는지 확인
	if (sp->top + 1 >= MAX_SIZE)
		return TRUE;
	return FALSE;
}

void Push(Stack* sp, int data) {  //스택의 push
	if (IsFull(sp) == TRUE)
		return;

	// top을 하나 올린 후 data 삽입
	sp->arr[++(sp->top)] = data;
}

int Pop(Stack* sp) {
	if (IsEmpty(sp) == TRUE)
		return MINUS;
	return sp->arr[(sp->top)--];
}

int Peek(Stack* sp) {
	if (IsEmpty(sp) == TRUE)
		return MINUS;
	return sp->arr[sp->top];
}

int main() {
	char str[6];
	Stack stack;
	int n, num;

	scanf("%d", &n);
	fgetc(stdin);  //버퍼 비우기
	StackInit(&stack);  //stack 초기화

	for (int i = 0; i < n; i++) {
		
		scanf("%s", str);
		fgetc(stdin);  //버퍼 비우기

		if (!strcmp(str, "push")) { //push인 경우
			scanf("%d", &num);
			fgetc(stdin);  //버퍼 비우기
			Push(&stack, num);
		}
		else if (!strcmp(str, "pop")) {
			printf("%d\n", Pop(&stack));
		}
		else if (!strcmp(str, "empty")) {
			printf("%d\n", IsEmpty(&stack));
		}
		else if (!strcmp(str, "size")) {
			printf("%d\n", Size(&stack));
		}
		else if (!strcmp(str, "top")) {
			printf("%d\n", Peek(&stack));
		}		
	}
	return 0;
}