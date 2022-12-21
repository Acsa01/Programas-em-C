#include <stdio.h>

int faz_conta_direito(int parcelas, char op)
{
    int num, num2;
    scanf("%d", &num);

    for (int i = 1; i < parcelas; i++)
    {
        scanf("%d", &num2);

        if (op == '-')
        {
            num -= num2;
        }
        else if (op == '+')
        {
            num += num2;
        }
    }

    return num;
}
