#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int h = 0;
//	int m = 0;
//	int k = 0;
//	scanf("%d:%d %d", &h, &m, &k);
//	h = ((m + k) / 60 + h) % 24;
//	m = (m + k) % 60;
//	printf("%02d:%02d\n", h, m);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", n / 12 * 4 + 2);
//	return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 0;
	while (n)
	{
		int w = n % 10;
		if (w % 2 == 1)
			w = 1;
		else
			w = 0;
		ret += w * pow(10, i);
		n /= 10;
		i++;
	}
	printf("%d", ret);
	return 0;
}