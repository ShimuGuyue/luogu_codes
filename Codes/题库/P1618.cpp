#include <iostream>

int main(void)
{
    int x, y, z;
    std::cin >> x >> y >> z;
    bool ok(false);
    for (int a(1); a <= 9; ++a)
    {
    for (int b(1); b <= 9; ++b)
    {
    if (b == a)
        continue;
    for (int c(1); c <= 9; ++c)
    {
    if (c == a || c == b)
        continue;
    for (int d(1); d <= 9; ++d)
    {
    if (d == a || d == b || d == c)
        continue;
    for (int e(1); e <= 9; ++e)
    {
    if (e == a || e == b || e == c || e == d)
        continue;
    for (int f(1); f <= 9; ++f)
    {
    if (f == a || f == b || f == c || f == d || f == e)
        continue;
    for (int g(1); g <= 9; ++g)
    {
    if (g == a || g == b || g == c || g == d || g == e || g == f)
        continue;
    for (int h(1); h <= 9; ++h)
    {
    if (h == a || h == b || h == c || h == d || h == e || h == f || h == g)
        continue;
    for (int i(1); i <= 9; ++i)
    {
    if (i == a || i == b || i == c || i == d || i == e || i == f || i == g || i == h)
        continue;
    int flag1(a * 100 + b * 10 + c);
    int flag2(d * 100 + e * 10 + f);
    int flag3(g * 100 + h * 10 + i);
    if (flag1 * y == flag2 * x && flag1 * z == flag3 * x && flag2 * z == flag3 * y)
    {
        ok = true;
        std::cout << flag1 << " " << flag2 << " " << flag3 << std::endl;
    }
    }
    }
    }
    }
    }
    }
    }
    }
    }
    if (!ok)
        std::cout << "No!!!" << std::endl;
    return 0;                           
}