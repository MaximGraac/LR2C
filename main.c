#include <stdio.h>
#include <math.h>

int lr2task1()
{
    double a, b, c, d, ansf, ans1;

    printf("38) Enter A: ");
    scanf("%lf", &a);

    printf("38) Enter B: ");
    scanf("%lf", &b);

    printf("38) Enter C: ");
    scanf("%lf", &c);

    printf("38) Enter D: ");
    scanf("%lf", &d);

    ans1 = a * b * sin(c);
    ansf = ans1 / cos(d);

    printf("Task 38 = %lf\n", ansf);

    return 0;
}

int lr2task2()
{
    double x, ansf;

    printf("45) Enter X: ");
    scanf("%lf", &x);

    ansf = fabs(x) / fabs(x + 1);

    printf("Task 45 = %lf\n", ansf);

    return 0;
}

int lr2task3()
{
    double x, y, ans1, ans2, ansf, e;
    printf("4) Enter X: ");
    scanf("%lf", &x);

    printf("4) Enter Y: ");
    scanf("%lf", &y);

    e = exp(y - 1);

    ans1 = 3 + e;
    ans2 = 1 + pow(x, 2) * fabs(y - tan(x));
    ansf = ans1 / ans2;

    printf("Task 4 = %lf\n", ansf);

    return 0;
}

int lr2task4()
{
    double x, ansf;

    printf("41) Enter X: ");
    scanf("%lf", &x);

    ansf = sqrt(1 - pow(sin(x), 2));

    printf("Task 41 = %lf\n", ansf);

    return 0;
}

int lr2task5()
{
    double a, b, c, x, sq, ansf;

    printf("42) Enter a: ");
    scanf("%lf", &a);

    printf("42) Enter b: ");
    scanf("%lf", &b);

    printf("42) Enter c: ");
    scanf("%lf", &c);

    printf("42) Enter x: ");
    scanf("%lf", &x);

    sq = a * pow(x, 2) + b * x + c;
    if (sq <= 0)
    {
        printf("1/sqrt(%lf)\n", sq);
        printf("No resolves\n");
    }
    else
    {
        ansf = 1 / sqrt(sq);
        printf("Task 42 = %lf\n", ansf);
    }
    return 0;
}
int main()
{
    lr2task1();
    // lr2task2();
    // lr2task3();
    // lr2task4();
    // lr2task5();

    return 0;
}