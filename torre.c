    /*

     * Torre de hanoi

     */

    #include <stdio.h>

     

    void towers(int, char, char, char);

     

    int main()

    {

        int num;

     

        printf("Escribe el numero de discos : ");

        scanf("%d", &num);

        printf("La secuencia de movientos es la siguiente:\n");

        towers(num, 'A', 'C', 'B');

        return 0;

    }

    void towers(int num, char frompeg, char topeg, char auxpeg)

    {

        if (num == 1)

        {

            printf("\n Mueve el disco 1 del poste %c al poste %c", frompeg, topeg);

            return;

        }

        towers(num - 1, frompeg, auxpeg, topeg);

        printf("\n Mueve el disco %d del poste %c al poste %c", num, frompeg, topeg);

        towers(num - 1, auxpeg, topeg, frompeg);

    }
