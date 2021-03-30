#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cctype>
#include<string.h>
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
	//char* space = new char;
	int index = 0;
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
			space[index] = str[i];
			index++;
		}
		count2 = 0;
	}
	for (int i = 0; i < strlen(space); i++)
	{
		str[i] = space[i];
	}
	str[strlen(space)] = '\0';
	//delete space;
}
//quiz 3
int countWords(const char* str)
{
	int count = 0;
	for (int i = 0 ; i < strlen(str); i++)
	{
		if(isspace(*(str+i)) && !isspace(*(str+i+1)))
			count++;
	}
	return count;
}
// quiz4
bool examinePairedParenthesis(const char* str)
{
	int count = 0;
	for (; *str != '\0'; str++)
	{
		if (*str == 40) // '(' 40
			count++;
		if (*str == 41) // ')' 41
			count--;
	}
	if(count==0)
		return true;
	return false;
}
//quiz 5
void convertString(char* input)
{
	char str[100] = "";
	int count = 0;
	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] == 32)
		{
			str[i +count] = '%';
			str[i +count + 1] = '2';
			str[i +count + 2] = '0';
			count += 2;
		}
		else
			str[i + count] = input[i]; //input[0] =h ... e l l o input[5] = '' str[5 ,6 ,7] %20 str[8] = str[6]
	}
	strcpy(input, str);
	return;
}
void main()
{
	//int count = countMatchedNumberLetterInString("11122233333444555", 3);
	//printf("%d", count);

	//char data[100]{ "Hello World" };
	//excludeRedundantLetters(data);
	//printf("%s", data);

	//int count2 = countWords("Hello World, Here is train\n");
	//printf("%d", count2);

	//bool result = examinePairedParenthesis("((()))"); // 40 41
	//printf("%s", result == true ? "true" : "false");

	char input[100] = "Hello World.Nice to Meet you.";
	convertString(input);
	printf("%s\n", input);
	return;
}