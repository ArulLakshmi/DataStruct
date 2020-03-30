#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
	int coeff;
	int powr;
	struct node *nptr;
};
struct node *hptr=NULL;
void insert(int pos,int cf,int p)
{
	struct node *tmp=malloc(sizeof(struct node));
	tmp->coeff=cf;
	tmp->powr=p;
	//if(pos==1)
	{
		tmp->nptr=hptr;
		hptr=tmp;
	}
	/*else
	{
		int i=1;
		struct node *thptr=hptr;
		while(i<pos-1)
		{
			thptr=thptr->nptr;
			i++;
		}
		tmp->nptr=thptr->nptr;
		thptr->nptr=tmp;
	}*/


}

void printList()
{
	
	struct node *tmp=hptr;
	while(tmp!=NULL)
	{
         printf("%d x^%d ",tmp->coeff,tmp->powr);
		//printf("Coeff=%d,Power=%d\n",tmp->coeff,tmp->powr);
		tmp=tmp->nptr;
		if(tmp!=NULL)
			printf("+\t");

	}
}

void evaluate(int x)
{
	int sum=0,k=1;
	struct node *thptr=hptr;

	while(thptr!=NULL)
	{
		sum+=(thptr->coeff)*(double)pow(x,thptr->powr);
		thptr=thptr->nptr;
	}
	printf("Evaluated Value=%d\n",sum);

}
int main()
{
	int n,c,i,k=1,x;
	printf("\nEnter the degree of the polynomial to be evaluated:");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		printf("\nEnter the coefficient of x^%d :",i);
		scanf("%d",&c);
		insert(k,c,i);
		k++;
	}
	printList();
	printf("\nEnter the value for x:");
	scanf("%d",&x);
	evaluate(x);

}
