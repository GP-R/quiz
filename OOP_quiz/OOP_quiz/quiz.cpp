#include<iostream>
//quiz 1
int countMatchedNumberLetterInString(const char *str, int digit)
{
	int count = 0;
	digit += 48;
	for (; *str != '\0'; str++)
	{
		if (*str == digit)
			count++;
	}
	return count;
}
// quiz 2
void excludeRedundantLetters(char* str)
{
	char space[100] = "";
	int count = 0;
	int count2 = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; j < strlen(space); j++)
		{
			if (space[j] == str[i])
			{
				count2++;
			}
		}
		if (count2 == 0)
		{
			space[count] = str[i];
			count++;
		}
		count2 = 0;
	}
	for (int i = 0; i < strlen(space); i++)
	{
		str[i] = space[i];
	}
	str[strlen(space)] = '\0';
}

/*int countWords(const char* str)
{
	int count = 0;
	for (; *str != '\0'; str++)
	{
		if (*str != 32 && *str != 10)
			str++;
		if(*)
			count++;
	}
	return count;
}*/

void main()
{
	//int count = countMatchedNumberLetterInString("11122233333444555", 3);
	//printf("%d", count);
	char data[100]{ "Hello World" };
	excludeRedundantLetters(data);
	printf("%s", data);
	//int count2 = countWords("Hello World, Here is train\n");
	//printf("%d", count2);

	return;
}