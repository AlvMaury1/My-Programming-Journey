

#include <stdio.h>

int main()
{
	int c, cont;

	while (( c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			cont++;
	        int c, cont;

        while (( c = getchar()) != EOF)
        {
                if (c == ' ')
                {
                        cont++;
                        if (cont >= 2)
                                continue;
                        else
                                putchar(c);
                }
                if (c != ' ') 
                { 
                        putchar(c); 
                        cont = 0; 
                } 
        } 
}
                        

