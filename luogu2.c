#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void insert(char ch, char str[]);
int main()
{
	int space = 0;
	char ch = 0;
	int coordinates = -1;
	int len = 0;
	int count = 0;
	char temp[15] = {0};
	char str[100] = {0};
	int flag = 1;
	scanf("%s", temp);
	for (int i = 0; i < strlen(temp); i++)
	{
		if (isupper(temp[i]))
		{
			temp[i] += 'a' - 'A';
		}
	}
	while (!isalpha(ch = getchar()))
	{
		space++;
	}
	scanf("%s", str);
	insert(ch, str);
	len += space;
	space = 0;
	do
	{
		for (int i = 0; i < strlen(str); i++)
		{
			if (isupper(str[i]))
			{
				str[i] += 'a' - 'A';
			}
		}
		if (!strcmp(temp, str))
		{
			count++;
			if (flag)
			{
				coordinates = len;
				flag = 0;
			}
		}
		len += strlen(str);
		len++;
	} while (scanf("%s", str) != EOF);
	if (coordinates != -1)
	{
		printf("%d %d", count, coordinates);
	}
	else
	{
		printf("%d", coordinates);
	}
	return 0;
}
void insert(char ch, char str[])
{
	for (int i = strlen(str); i >= 0; i--)
	{
		str[i + 1] = str[i];
	}
	str[0] = ch;
}