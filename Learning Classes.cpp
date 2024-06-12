#include <iostream>
using namespace std;

class Time;
Time normalize(int, int, int);

class Time
{
private:
    int hr, mn, sc;

public:
    Time()
    {
        hr = 0;
        mn = 0;
        sc = 0;
    }

    Time(int x, int y, int z)
    {
        Time temp = normalize(x, y, z);
        hr = temp.hr;
        mn = temp.mn;
        sc = temp.sc;
        showTime(temp);
    }

    friend int seconds(Time);
    friend void showTime(Time);
    friend int operator>(Time, Time);
    friend Time operator>>(Time, int);
    friend Time operator<<(Time, int);
    friend Time operator+(Time, Time);
    friend Time operator-(Time, Time);
    friend Time normalize(int, int, int);
};
void showTime(Time t)
{
    cout << "You Entered: ";
    cout << t.hr << ":" << t.mn << ":" << t.sc << endl;
}

int operator>(Time t1, Time t2)
{
    if (t1.hr == t2.hr)
    {
        if (t1.mn == t2.mn)
        {
            if (t1.sc == t2.sc)
            {
                return 0;
            }
            else if (t1.sc > t2.sc)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (t1.mn > t2.mn)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (t1.hr > t2.hr)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

Time normalize(int h, int m, int s)
{
    Time temp;
    if (s >= 60)
    {
        m += (s / 60);
        s = s % 60;
    }
    if (m >= 60)
    {
        h += (m / 60);
        m = m % 60;
    }
    if (h >= 24)
    {
        h = h % 24;
    }
    temp.hr = h;
    temp.mn = m;
    temp.sc = s;
    return temp;
}

Time operator>>(Time t, int seconds)
{
    Time temp = normalize(t.hr, t.mn, t.sc + seconds);
    return temp;
}

Time operator<<(Time t, int seconds)
{
    if (t.sc < seconds)
    {
        while (t.mn != 0)
        {
            if (t.sc > seconds)
            {
                break;
            }
            t.mn--;
            t.sc += 60;
        }
        while (t.hr != 0)
        {
            if (t.sc > seconds)
            {
                break;
            }
            t.hr--;
            t.sc += 3600;
        }
        if (t.sc > seconds)
        {
            return (normalize(t.hr, t.mn, t.sc - seconds));
        }
        else
        {
            return (normalize(0, 0, 0));
        }
    }
    else
    {
        return (normalize(t.hr, t.mn, t.sc - seconds));
    }
}

int seconds(Time t)
{
    int second = 0;
    while (t.hr != 0)
    {
        t.hr--;
        second += 3600;
    }
    while (t.mn != 0)
    {
        t.mn--;
        second += 60;
    }
    second += t.sc;
    return second;
}

Time operator+(Time t1, Time t2)
{
    return normalize(t1.hr + t2.hr, t1.mn + t2.mn, t1.sc + t2.sc);
}

Time operator-(Time t1, Time t2)
{
    return normalize(abs(t1.hr - t2.hr), abs(t1.mn - t2.mn), abs(t1.sc - t2.sc));
}

class complex
{
private:
    double a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }

    complex(double a, double b)
    {
        this->a = a;
        this->b = b;
    }

    complex(double a) { this->a = a; }
    void setData(double a, double b)
    {
        this->a = a;
        this->b = b;
    }

    void showData()
    {
        cout << "a: " << a << endl
             << "b: " << b << endl;
    }

    int operator[](int idx)
    {
        try
        {
            if (idx == 0)
            {
                return a;
            }
            else if (idx == 1)
            {
                return b;
            }
            else
            {
                throw "Index out of bound";
            }
        }
        catch (const char *str)
        {
            cout << str;
            exit(1);
        }
    }

    complex operator+(complex c)
    {
        complex c1;
        c1.a = a + c.a;
        c1.b = b + c.b;
        return c1;
    }

    complex operator-(complex c)
    {
        complex c1;
        c1.a = a - c.a;
        c1.b = b - c.b;
        return c1;
    }

    complex operator*(complex c)
    {
        complex c1;
        c1.a = a * c.a;
        c1.b = b * c.b;
        return c1;
    }

    complex operator/(complex c)
    {
        complex c1;
        c1.a = (a * c.a - b * c.b) / (c.a * c.a + c.b + c.b);
        c1.b = (b * c.a - a * c.b) / (c.a * c.a + c.b * c.b);
        return c1;
    }

    void operator+=(complex c)
    {
        a += c.a;
        b += c.b;
    }

    void operator-=(complex c)
    {
        a -= c.a;
        b -= c.b;
    }

    void operator*=(complex c)
    {
        a *= c.a;
        b *= c.b;
    }

    void operator/=(complex c)
    {
        a = (a * c.a - b * c.b) / (c.a * c.a + c.b + c.b);
        b = (b * c.a - a * c.b) / (c.a * c.a + c.b * c.b);
    }

    complex operator++()
    {
        complex c;
        a++;
        b++;
        c.a = a;
        c.b = b;
        return c;
    }

    complex operator--()
    {
        complex c;
        a--;
        b--;
        c.a = a;
        c.b = b;
        return c;
    }

    complex operator++(int)
    {
        complex c;
        c.a = a;
        c.b = b;
        a++;
        b++;
        return c;
    }

    complex operator--(int)
    {
        complex c;
        c.a = a;
        c.b = b;
        a--;
        b--;
        return c;
    }

    complex operator~()
    {
        complex c;
        b = -b;
        c.a = a;
        c.b = b;
        return c;
    }

    operator int() { return (a); }
    void operator=(double data) { a = data; }
    friend ostream &operator<<(ostream &, complex);
    friend istream &operator>>(istream &, complex &);
    operator bool() { return (!(a == 0 && b == 0)); }
    bool operator>(complex c) { return (a > c.a && b > c.b); }
    bool operator==(complex c) { return (a == c.a && b == c.b); }
};
ostream &operator<<(ostream &cout, complex c)
{
    cout << "a: " << c.a << endl
         << "b: " << c.b << endl;
    return cout;
}

istream &operator>>(istream &cin, complex &c)
{
    cout << "a: ";
    cin >> c.a;
    cout << "b: ";
    cin >> c.b;
    return cin;
}
