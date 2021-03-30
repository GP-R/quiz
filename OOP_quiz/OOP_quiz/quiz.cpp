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

void main()
{
	int count = countMatchedNumberLetterInString("11122233333444555", 3);
	printf("%d", count);
	//char data[100]{ "Hello World" };
	//excludeRedundantLetters(data);
	//printf("%s", data);
	//int count2 = countWords("Hello World, Here is train\n");
	//printf("%d", count2);

	return;
}