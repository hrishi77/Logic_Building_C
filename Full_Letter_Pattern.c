//Patterns for A...Z
#include <stdio.h>
#include <string.h>

void Full(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
            printf("* ");
        }
        printf("\n");
    }


}

void Dotted(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if((i%2 != 0)&&(j%2 != 0))
        	{
        		 printf("* ");
        	}
        	else if((i%2 == 0)&&(j%2 == 0))
        	{
        		 printf("* ");
        	}
        	else
        	{
        		printf("  ");
        	}
        }
        printf("\n");
    }
}

void A(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if((i == 1)&&((j==1)||(j==2)||(j==3)||(j==4)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
  		else if((i == 2)&&((j==1)||(j==2)||(j==3)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 3)&&((j==1)||(j==2)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
  		else if((i == 4)&&((j==1)||(j==6)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 5)&&((j==5)||(j==6)||(j==7)))
        	{
        		printf("  ");
        	}
        	else if((i == 6)&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if((i == 10)&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if((i == 11)&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void B(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i == 1)||(i==11))&&((j==10)||(j==11)))
        	{
        		printf("  ");
        	}
  		else if(((i == 2)||(i == 10))&&(j==11))
        	{
        		printf("  ");
        	}
  		else if(((i == 4)||(i == 8))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if((i == 6)&&(j == 11))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void C(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i == 1)||(i==11))&&((j==10)||(j==11)||(j==1)||(j==2)))
        	{
        		printf("  ");
        	}
  		else if(((i == 2)||(i == 10))&&((j==1)||(j==11)))
        	{
        		printf("  ");
        	}
  		else if(((i == 4)||(i == 8))&&((j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if(((i == 5)||(i==6)||(i==7))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void D(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i == 1)||(i==11))&&((j==10)||(j==11)))
        	{
        		printf("  ");
        	}
  		else if(((i == 2)||(i == 10))&&(j==11))
        	{
        		printf("  ");
        	}
  		else if(((i == 4)||(i == 8))&&((j==4)||(j==5)||(j==6)||(j==7)))
        	{
        		printf("  ");
        	}
        	else if(((i == 5)||(i==6)||(i==7))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void E(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i == 4)||(i == 8))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void F(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i == 4)||(i == 8)||(i == 9)||(i == 10)||(i==11))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if(((i == 5)||(i == 6)||(i == 7))&&((j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void G(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i == 1)||(i==11))&&((j==10)||(j==11)||(j==1)||(j==2)))
        	{
        		printf("  ");
        	}
  		else if(((i == 2)||(i == 10))&&((j==1)||(j==11)))
        	{
        		printf("  ");
        	}
  		else if(((i == 4)||(i == 8))&&((j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if(((i == 5)||(i==6))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 7)&&((j==4)||(j==5)||(j==6)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void H(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i==1)||(i==2)||(i==3)||(i==4))&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
  		{
        		printf("  ");
        	}
        	else if(((i==8)||(i==9)||(i==10)||(i==11))&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
  		{
        		printf("  ");
        	}
        	else 
        	{
        		 printf("* ");
        	}
           
        }
        printf("\n");
    }
}

void I(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i == 1)||(i==11)||(i == 2)||(i == 10))&&((j == 3)||(j==4)||(j==5)||(j==6)||(j==7)||(j==8)||(j==9)))
        	{
        		printf("* ");
        	}
        	else if(((i==3)||(i==4)||(i==5)||(i==6)||(i==7)||(i==8)||(i==9))&&((j==5)||(j==6)||(j==7)))
        	{
        		printf("* ");
        	}
        	else
        	{
        		printf("  ");	
        	}
        }
        printf("\n");
    }
}

void J(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i == 1)||(i == 2))&&((j == 3)||(j==4)||(j==5)||(j==6)||(j==7)||(j==8)||(j==9)))
        	{
        		printf("* ");
        	}
        	else if(((i==3)||(i==4)||(i==5)||(i==6)||(i==7)||(i==8))&&((j==5)||(j==6)||(j==7)))
        	{
        		printf("* ");
        	}
        	else if(((i==9)||(i==10))&&((j == 2)||(j == 3)||(j==4)||(j==5)||(j==6)||(j==7)))
        	{
        		printf("* ");
        	}
        	else if((i==11)&&((j == 2)||(j == 3)||(j==4)||(j==5)||(j==6)))
        	{
        		printf("* ");
        	}
        	else
        	{
        		printf("  ");	
        	}
        }
        printf("\n");
    }
}

void K(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i==1)||(i==11))&&((j==4)||(j==5)||(j==6)||(j==11)))
  		{
        		printf("  ");
        	}
        	else if(((i==2)||(i==10))&&((j==4)||(j==5)||(j==10)||(j==11)))
  		{
        		printf("  ");
        	}
        	else if(((i==3)||(i==9))&&((j==4)||(j==9)||(j==10)||(j==11)))
  		{
        		printf("  ");
        	}
        	else if(((i==4)||(i==8))&&((j==8)||(j==9)||(j==10)||(j==11)))
  		{
        		printf("  ");
        	}
        	else if(((i==5)||(i==7))&&((j==7)||(j==8)||(j==9)||(j==10)||(j==11)))
  		{
        		printf("  ");
        	}
        	else if((i==6)&&((j==6)||(j==7)||(j==8)||(j==9)||(j==10)||(j==11)))
  		{
        		printf("  ");
        	}
        	else 
        	{
        		 printf("* ");
        	}
           
        }
        printf("\n");
    }
}


void L(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i==1)||(i==2)||(i==3)||(i==4)||(i==5)||(i==6)||(i==7)||(i==8))&&((j == 3)||(j==4)||(j==5)))
        	{
        		printf("* ");
        	}
        	else if(((i==9)||(i==10)||(i==11))&&((j == 3)||(j==4)||(j==5)||(j==6)||(j==7)||(j==8)||(j==9)))
        	{
        		printf("* ");
        	}
        	else
        	{
        		printf("  ");	
        	}
        }
        printf("\n");
    }
}

void M(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if((i==1)&&((j==5)||(j==6)||(j==7)))
  		{
        		printf("  ");
        	}
        	else if((i==2)&&(j==6))
  		{
        		printf("  ");
        	}
        	else if(((i==4)||(i==5)||(i==6)||(i==7)||(i==8)||(i==9))&&((j==4)||(j==8)))
  		{
        		printf("  ");
        	}
        	else if(((i==10)||(i==11))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
  		{
        		printf("  ");
        	}
        	else 
        	{
        		 printf("* ");
        	}
           
        }
        printf("\n");
    }
}

void NN(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i==1)||(i==10)||(i==11))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
  		{
        		printf("  ");
        	}
        	else if((i==2)&&((j==5)||(j==6)||(j==7)||(j==8)))
  		{
        		printf("  ");
        	}
        	else if((i==3)&&((j==6)||(j==7)||(j==8)))
  		{
        		printf("  ");
        	}
        	else if((i==4)&&((j==7)||(j==8)))
  		{
        		printf("  ");
        	}
        	else if((i==5)&&(j==8))
  		{
        		printf("  ");
        	}
        	else if((i==6)&&(j==4))
  		{
        		printf("  ");
        	}
        	else if((i==7)&&((j==4)||(j==5)))
  		{
        		printf("  ");
        	}
        	else if((i==8)&&((j==4)||(j==5)||(j==6)))
  		{
        		printf("  ");
        	}
        	else if((i==9)&&((j==4)||(j==5)||(j==6)||(j==7)))
  		{
        		printf("  ");
        	}
        	else 
        	{
        		 printf("* ");
        	}
           
        }
        printf("\n");
    }
}

void O(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i == 1)||(i==11))&&((j==10)||(j==11)||(j==1)||(j==2)))
        	{
        		printf("  ");
        	}
  		else if(((i == 2)||(i == 10))&&((j==1)||(j==11)))
        	{
        		printf("  ");
        	}
  		else if(((i == 4)||(i == 8))&&((j==5)||(j==6)||(j==7)))
        	{
        		printf("  ");
        	}
        	else if(((i == 5)||(i==6)||(i==7))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void P(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i == 1)||(i==7))&&((j==10)||(j==11)))
        	{
        		printf("  ");
        	}
  		else if(((i == 2)||(i == 6))&&(j==11))
        	{
        		printf("  ");
        	}
  		else if((i == 4)&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if(((i == 8)||(i==9)||(i==10)||(i == 11))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void Q(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if((i == 1)&&((j==10)||(j==11)||(j==1)||(j==2)))
        	{
        		printf("  ");
        	}
  		else if((i == 2)&&((j==1)||(j==11)))
        	{
        		printf("  ");
        	}
  		else if((i == 4)&&((j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if((i == 5)&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)||(j==9)))
        	{
        		printf("  ");
        	}
        	else if((i == 6)&&((j==4)||(j==5)||(j==6)||(j==9)))
        	{
        		printf("  ");
        	}
        	else if((i == 7)&&((j==4)||(j==5)||(j==6)))
        	{
        		printf("  ");
        	}
        	else if((i == 8)&&((j==5)||(j==6)||(j==7)))
        	{
        		printf("  ");
        	}
        	else if((i == 9)&&(j==11))
        	{
        		printf("  ");
        	}
        	else if((i == 10)&&(j==1))
        	{
        		printf("  ");
        	}
        	else if((i == 11)&&((j==1)||(j==2)||(j==9)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}


void R(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i == 1)||(i==7))&&((j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if(((i == 2)||(i == 6))&&(j==11))
        	{
        		printf("  ");
        	}
  		else if((i == 4)&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
  		else if((i == 8)&&((j==4)||(j==5)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 9)&&((j==4)||(j==5)||(j==6)))
        	{
        		printf("  ");
        	}
        	else if((i == 10)&&((j==4)||(j==5)||(j==6)||(j==7)))
        	{
        		printf("  ");
        	}
		else if((i == 11)&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void S(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if((i == 1)&&((j==1)||(j==2)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 2)&&(j==1))
        	{
        		printf("  ");
        	}
  		else if((i == 4)&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
  		else if((i == 5)&&((j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 6)&&((j==1)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 7)&&((j==1)||(j==2)))
        	{
        		printf("  ");
        	}
  		else if((i == 8)&&((j==1)||(j==2)||(j==3)||(j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if((i == 10)&&(j==11))
        	{
        		printf("  ");
        	}
		else if((i == 11)&&((j==1)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void T(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i==4)||(i==5)||(i==6)||(i==7)||(i==8)||(i==9)||(i == 10)||(i==11))&&((j==1)||(j==2)||(j==3)||(j==4)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void U(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i==1)||(i==2)||(i==3)||(i==4)||(i==5)||(i==6)||(i==7))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if((i==8)&&((j==5)||(j==6)||(j==7)))
        	{
        		printf("  ");
        	}
        	else if((i==10)&&((j==1)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 11)&&((j==1)||(j==2)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void V(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i==1)||(i==2)||(i==3)||(i==4))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if((i==5)&&((j==5)||(j==6)||(j==7)))
        	{
        		printf("  ");
        	}
        	else if((i==6)&&(j==6))
        	{
        		printf("  ");
        	}
        	else if((i==7)&&((j==1)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i==8)&&((j==1)||(j==2)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i==9)&&((j==1)||(j==2)||(j==3)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i==10)&&((j==1)||(j==2)||(j==3)||(j==4)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 11)&&((j==1)||(j==2)||(j==3)||(j==4)||(j==5)||(j==7)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void W(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i==1)||(i==2))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if(((i==3)||(i==4)||(i==5)||(i==6)||(i==7)||(i==8))&&((j==4)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if((i==10)&&((j==1)||(j==6)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 11)&&((j==1)||(j==2)||(j==5)||(j==6)||(j==7)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void X(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if(((i==1)||(i==11))&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if(((i==2)||(i==10))&&((j==5)||(j==6)||(j==7)))
        	{
        		printf("  ");
        	}
        	else if(((i==3)||(i==9))&&(j==6))
        	{
        		printf("  ");
        	}
        	else if(((i==4)||(i==8))&&((j==1)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if(((i==5)||(i==7))&&((j==1)||(j==2)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i==6)&&((j==1)||(j==2)||(j==3)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void Y(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if((i==1)&&((j==4)||(j==5)||(j==6)||(j==7)||(j==8)))
        	{
        		printf("  ");
        	}
        	else if((i==2)&&((j==5)||(j==6)||(j==7)))
        	{
        		printf("  ");
        	}
        	else if((i==3)&&(j==6))
        	{
        		printf("  ");
        	}
        	else if((i==4)&&((j==1)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i==5)&&((j==1)||(j==2)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i==6)&&((j==1)||(j==2)||(j==3)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if(((i==7)||(i==8)||(i==9)||(i==10)||(i==11))&&((j==1)||(j==2)||(j==3)||(j==4)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}

void Z(int N)
{
    int i = 0,j = 0;

    for(i=1; i<= N; i++)
    {
        for(j=1; j<=N; j++)
        {
        	if((i == 4)&&((j==1)||(j==2)||(j==3)||(j==4)||(j==5)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 5)&&((j==1)||(j==2)||(j==3)||(j==4)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 6)&&((j==1)||(j==2)||(j==3)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 7)&&((j==1)||(j==2)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else if((i == 8)&&((j==1)||(j==6)||(j==7)||(j==8)||(j==9)||(j==10)||(j==11)))
        	{
        		printf("  ");
        	}
        	else
        	{
        		printf("* ");	
        	}
        }
        printf("\n");
    }
}
   
int main(void) 
{
	char s[256];
 	int i = 0,N=11 ,j = 0;
 		
	printf("Enter the Word\n");
       scanf("%[^'\n']s",s);

 	while (s[i] != '\0') 
 	{
    		printf("%c\t",s[i]);
    		i++; 
	}
	printf("\n \n");
	
	for(i=0; i<strlen(s);i++)
	{
		if(s[i] == 'A')
    		{
      			A(N);
    		}
    		else if(s[i] == 'B')
    		{
      			B(N);
    		}
    		else if(s[i] == 'C')
    		{
      			C(N);
    		}
    		else if(s[i] == 'D')
    		{
      			D(N);
    		}
    		else if(s[i] == 'E')
    		{
      			E(N);
    		}
    		else if(s[i] == 'F')
    		{
      			F(N);
    		}
    		else if(s[i] == 'G')
    		{
      			G(N);
    		}
    		else if(s[i] == 'H')
    		{
      			H(N);
    		}
    		else if(s[i] == 'I')
    		{
      			I(N);
    		}
    		else if(s[i] == 'J')
    		{
      			J(N);
    		}
    		else if(s[i] == 'K')
    		{
      			K(N);
    		}
    		else if(s[i] == 'L')
    		{
      			L(N);
    		}
    		else if(s[i] == 'M')
    		{
      			M(N);
    		}
    		else if(s[i] == 'N')
    		{
      			NN(N);
    		}
    		else if(s[i] == 'O')
    		{
      			O(N);
    		}
    		else if(s[i] == 'P')
    		{
      			P(N);
    		}
    		else if(s[i] == 'Q')
    		{
      			Q(N);
    		}
    		else if(s[i] == 'R')
    		{
      			R(N);
    		}
    		else if(s[i] == 'S')
    		{
      			S(N);
    		}
    		else if(s[i] == 'T')
    		{
      			T(N);
    		}
    		else if(s[i] == 'U')
    		{
      			U(N);
    		}
    		else if(s[i] == 'V')
    		{
      			V(N);
    		}
    		else if(s[i] == 'X')
    		{
      			X(N);
    		}
    		else if(s[i] == 'Y')
    		{
      			Y(N);
    		}
    		else if(s[i] == 'Z')
    		{
      			Z(N);
    		}
    		else
    		{
    			Full(N);
    			printf("\nplease give String input \n");
    			printf("\n");
    				Dotted(N);
    		}
	}
 	return 0;
}
