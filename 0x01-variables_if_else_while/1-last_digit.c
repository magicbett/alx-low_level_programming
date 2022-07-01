nclude "main.h"
/**
*main - Begin Here
*print a-z and A-Z using putchar
*Return: Value 0 (true)
**/
int main(void)

{
	char ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
