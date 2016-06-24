#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct{
	int top;
	int items[MAX];
}stack;
void push(stack *, int);
int pop(stack *);
int main()
{
	stack st;
	st.top = -1;
    push(&st,67);
    push(&st,-2);
    push(&st,72);
    printf("%d\n",pop(&st));
	printf("%d\n",pop(&st));
	printf("%d\n",pop(&st));
	return 0;


}
            void push(stack *st, int x)
                    {
                        if(st->top == 8)
                                {
                                        printf("The stack is overflow\n");
                                    exit(1);
                                }
                                        else
                                            ++(st->top);
                                        st->items[st->top]= x;
}
int pop (stack *st)
{
	if (st->top == -1)
	{
		printf("stack is underflow underflow");
		exit(0);
	}
	return st->items[st->top--];
}
