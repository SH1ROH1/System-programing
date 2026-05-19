
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int x = 5;
//	int y = 7;
//	if (y == 8)
//		if (x == 5)
//		{
//			printf("**********\n");
//			printf("&&&&&&&\n");
//		}
//		else
//		{
//			printf("##########\n");
//			printf("$$$$$$$$$$\n");
//			printf("&&&&&&&\n");
//		}
//	return 0;
//}
#include <stdio.h>

int main()
{
    int m;

    printf("¬вед≥ть номер м≥с€ц€ (число в≥д 1 до 12): ");
    scanf("%d", &m);

    if (m < 1 || m > 12)
    {
        printf("“акого м≥с€ц€ немаЇ");
    }
    else
    {
        if (m == 2)
            printf(" ≥льк≥сть дн≥в Ц 28");
        else if (m == 4 || m == 6 || m == 9 || m == 11)
            printf(" ≥льк≥сть дн≥в Ц 30");
        else
            printf(" ≥льк≥сть дн≥в Ц 31");
    }

    return 0;
}