#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct stack
{
	char s[100];
	int top;
	
};
void push(struct stack *ps,char c)
{
	if(ps->top==99)
		printf("\nStack is Full!Push not possible!!\n");
	else
	{
		ps->top=ps->top+1;
		ps->s[ps->top]=c;
	}
}

char pop(struct stack *ps)
{
	char x='\0';
	if(ps->top==-1)
		printf("Stack is empty!!\n");
	else
	{
		x=ps->s[ps->top];
		ps->top=ps->top-1;
	}
	return x;
}
int precedence(char x)
{
	if(x=='*'||x=='/')
		return 2;
	else if(x=='+'||x=='-')
		return 1;
	else 
		return 0;
    
}
int main()
{
	char s[30];
	int i;
	struct stack ps;
	ps.top=-1;
	printf("\nEnter the infix expression:");
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if(isalnum(s[i]))
			printf("%c ",s[i]);
		else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
		{
			int f=0;
			while(f==0)
			{
			if(ps.top==-1)
			{
				push(&ps,s[i]);
				f=1;
				break;
			}
			else
			{
				int x,y;				
				
					x=precedence(ps.s[ps.top]);
					y=precedence(s[i]);
					if(y>x)
					{
						push(&ps,s[i]);
						f=1;
						break;
					}
					else
						printf("%c ",pop(&ps));
			    
			}

		  }
	    }
		else if(s[i]=='(')
			push(&ps,s[i]);
		else if(s[i]==')')
		{
			char x;
			do
			{
				x=pop(&ps);
				if(x=='(')
					break;
				printf("%c ",x);
			}while(x=!'(');

		}
   }

   while(ps.top!=-1)
	{
		char c=pop(&ps);
		if(c=='(')
			continue;
		printf("%c ",c);

	}
	return 0;
}

