#include <iostream>
#include <iomanip>

int main(void)
{
    int n;
    std::cin >> n;
    for (int a(1); a <= n; ++a)
    {
        if (n == 1)
        {
            std::cout << 
            std::setw(5) << a << 
            std::endl;
            continue;
        }
    for (int b(1); b <= n; ++b)
    {
        if (b == a)
            continue;
        if (n == 2)
        {
            std::cout << 
            std::setw(5) << a << std::setw(5) << b << 
            std::endl;
            continue;
        }
    for (int c(1); c <= n; ++c)
    {
        if (c == a || c == b)
            continue;
        if (n == 3)
        {
            std::cout << 
            std::setw(5) << a << std::setw(5) << b << std::setw(5) << c << 
            std::endl;
            continue;
        }
    for (int d(1); d <= n; ++d)
    {
        if (d == a || d == b || d == c)
            continue;
        if (n == 4)
        {
            std::cout << 
            std::setw(5) << a << std::setw(5) << b << std::setw(5) << c << std::setw(5) << d << 
            std::endl;
            continue;
        }
    for (int e(1); e <= n; ++e)
    {
        if (e == a || e == b || e == c || e == d)
            continue;
        if (n == 5)
        {
            std::cout << 
            std::setw(5) << a << std::setw(5) << b << std::setw(5) << c << std::setw(5) << d <<
            std::setw(5) << e <<
            std::endl;
            continue;
        }
    for (int f(1); f <= n; ++f)
    {
        if (f == a || f == b || f == c || f == d || f == e)
            continue;
        if (n == 6)
        {
            std::cout << 
            std::setw(5) << a << std::setw(5) << b << std::setw(5) << c << std::setw(5) << d <<
            std::setw(5) << e << std::setw(5) << f <<
            std::endl;
            continue;
        }
    for (int g(1); g <= n; ++g)
    {
        if (g == a || g == b || g == c || g == d || g == e || g == f)
            continue;
        if (n == 7)
        {
            std::cout << 
            std::setw(5) << a << std::setw(5) << b << std::setw(5) << c << std::setw(5) << d <<
            std::setw(5) << e << std::setw(5) << f << std::setw(5) << g <<
            std::endl;
            continue;
        }
    for (int h(1); h <= n; ++h)
    {
        if (h == a || h == b || h == c || h == d || h == e || h == f || h == g)
            continue;
        if (n == 8)
        {
            std::cout << 
            std::setw(5) << a << std::setw(5) << b << std::setw(5) << c << std::setw(5) << d <<
            std::setw(5) << e << std::setw(5) << f << std::setw(5) << g << std::setw(5) << h <<
            std::endl;
            continue;
        }
    for (int i(1); i <= n; ++i)
    {
        if (i == a || i == b || i == c || i == d || i == e || i == f || i == g || i == h)
            continue;
        if (n == 9)
        {
            std::cout << 
            std::setw(5) << a << std::setw(5) << b << std::setw(5) << c << std::setw(5) << d <<
            std::setw(5) << e << std::setw(5) << f << std::setw(5) << g << std::setw(5) << h <<
            std::setw(5) << i <<
            std::endl;
            continue;
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
    return 0;
}