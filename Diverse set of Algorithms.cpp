#include <vector>
#include <math.h>
#include <iostream>
#include <Windows.h>
using namespace std;

void prime();
void coprime();
int enterint();
int digits(int);
void movename();
bool isEven(int);
bool isPrime(int);
int LCM(int, int);
int isWord(char *);
int power(int, int);
int reversenum(int);
void fibonacci(int);
int numwords(char *);
int _max(int[], int);
int _min(int[], int);
int sumofdigits(int);
void gotoxy(int, int);
bool isInteger(float);
void primefactor(int);
void prime_factor(int);
int countWords(char *);
int countvowels(char *);
int countVowels(char *);
void primenum(int, int);
void swap(int *, int *);
void capitalize(char *);
int BinaryToDecimel(int);
char minchar(char, char);
char maxchar(char, char);
bool isCoPrime(int, int);
void _swap(int *, int *);
int isPalindrome(char *);
int _strlen(const char *);
void coprimenum(int, int);
int nthfibonacciterm(int);
int primenumsum(int, int);
int oddnumsum(int[], int);
int evennumsum(int[], int);
int coprimenumsum(int, int);
char *__strupr(const char *);
char *__strrev(const char *);
void swapchar(char *, char *);
void substr(char *, int, int);
void _swapchar(char *, char *);
void roots(float, float, float);
int searchstring(char *, char *);
int prime_factor_index(int, int);
int isAlphaNumericString(char *);
int nCommonDivisor(int, int, int);
void __strcpy(char *, char *, int);
void stringrev_modified(char *, int);
void reverse_string_word_wise(char *);
void split_value(int, int[], int, int *);
char *RemoveAdjacentDuplicateCharacters(char *);

/* Function to check whether the given number is even or not */
bool isEven(int n) { return (n % 2 == 0); }

/* Function to check whether the given number is integer or not */
bool isInteger(float num) { return ((int)num == num); }

/* Function to check whether the given number is prime or not */
bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

/* Function to check whether the two numbers have n common divisor or not except 1 */
int nCommonDivisor(int n1, int n2, int n)
{
    int s, k = 0;
    (n1 > n2) ? (s = n2) : (s = n1);
    for (int i = 2; i <= s; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            k++;
            if (k > n)
            {
                return 0;
            }
        }
    }
    return ((k == n) ? 1 : 0);
}

/* Function to return maximum number in an array */
int _max(int num[], int length)
{
    int maxno = num[0];
    for (int i = 0; i < length; i++)
    {
        if (maxno < num[i])
        {
            maxno = num[i];
        }
    }
    return maxno;
}

/* Function to return minimum number in an array */
int _min(int num[], int length)
{
    int minno = num[0];
    for (int i = 0; i < length; i++)
    {
        if (minno > num[i])
        {
            minno = num[i];
        }
    }
    return minno;
}

/* Function to return LCM of two numbers */
int LCM(int n1, int n2)
{
    for (int i = 1; 1; i++)
    {
        if (((n1 * i) % n2) == 0)
        {
            return (n1 * i);
        }
    }
}

/* Function to return sum of digits of a number */
int sumofdigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

/* Function to return reverse of a number */
int reversenum(int num)
{
    int revnum = 0;
    while (num != 0)
    {
        int r = (num % 10);
        num /= 10;
        revnum = (revnum * 10 + r);
    }
    return revnum;
}

/*
Function to return the index of a prime factor of a number.
EX: 36 = 2 * 2 * 3 * 3 so prime factor index of 2 in 36 is 2
*/
int prime_factor_index(int num, int prime_factor)
{
    int k = 0;
    if (isPrime(prime_factor))
    {
        while ((num % prime_factor) == 0)
        {
            k++;
            num = (num / prime_factor);
        }
    }
    return k;
}

/*
Function to print prime factor of a number:
EX: prime factor of 36 is 2 2 3 3
*/
void prime_factor(int num)
{
    int k;
    cout << "Prime Factor of " << num << "is: ";
    for (int i = 2; i <= num; i++)
    {
        if ((k = prime_factor_index(num, i)))
        {
            while (k != 0)
            {
                cout << i;
                k--;
            }
        }
    }
}

/* Function to return the no. of digits in a number */
int digits(int num)
{
    int k = 0;
    while ((num / 10) != 0)
    {
        num = (num / 10);
        k++;
    }
    return (k + 1);
}

/* Function to return the value of x to the power y */
int power(int num, int power)
{
    int prod = 1;
    for (int i = 1; i <= power; i++)
    {
        prod = (prod * num);
    }
    return prod;
}

/* Function to return the nth fibonacci sequence term */
int nthfibonacciterm(int n)
{
    int currterm = 0, nextterm = 1, r;
    switch (n)
    {
    case 1:
        return 0;
        break;
    case 2:
        return 1;
        break;
    default:
        for (int i = 1; i <= (n - 2); i++)
        {
            r = nextterm;
            nextterm = (currterm + nextterm);
            currterm = r;
        }
        return nextterm;
    }
}

/*
Function takes two numbers as arguments and return the sum of all the prime numbers between these two numbers.
Ex: First Number = 2 Second Number = 5 output: 10(2, 3, 5)
*/
int primenumsum(int n1, int n2)
{
    int k = 0, sum = 0;
    for (int i = n1; i <= n2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                k++;
            }
        }
        if (k == 2)
        {
            sum = (sum + i);
        }
        k = 0;
    }
    return sum;
}

/* Function to return the sum of all the odd numbers in an array */
int oddnumsum(int num[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        if ((num[i] % 2) != 0)
        {
            sum = (sum + num[i]);
        }
    }
    return sum;
}

/* Function to return the sum of all even numbers in an array */
int evennumsum(int num[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        if ((num[i] % 2) == 0)
        {
            sum = (sum + num[i]);
        }
    }
    return sum;
}

/*
Function to split a given value in specified parts given in the parts array and put the splited parts in a array whose base array
is given in split pointer.
EX: value = 1435 parts[] = {100, 50, 20, 10, 5, 2, 1}. The function will split the amount 1435 in the parts of 100, 50, 20, 10, 5, 2, 1
*/
void split_value(int value, int parts[], int length, int *split)
{
    int num;
    for (int i = 0; i < length; i++)
    {
        num = (value / parts[i]);
        value = (value - (num * parts[i]));
        *(split + i) = num;
    }
}

/* Function to move a name up by pressing W, down by pressing S, left by pressing A, right by pressing D. */
void movename()
{
    char ch;
    int x = 10, y = 20; // arbitary coordinates
    gotoxy(x, y);       // to move the cursor at position x = 10, y = 20.
    cout << "Rishav Kumar";
    while (1)
    {
        cout << "press: w to move up, a to move left, s to move down, d to move right, esc to exit";
        cin >> ch;
        switch (ch)
        {
        case 'a':
            x--;
            break;
        case 'd':
            x++;
            break;
        case 's':
            y++;
            break;
        case 'w':
            y--;
            break;
        case 27:
            exit(0);
        }
        system("cls"); // to clear the screen
        gotoxy(x, y);  // to move the cursor at position (x, y). (x, y) will change as per the key pressed
        cout << "Rishav Kumar";
    }
}

/* Function to move cursor at specified (x, y) position. */
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

/* Function to swap number without use of third variable. */
void _swap(int *n1, int *n2)
{
    if ((*n1 > 0 && *n2 > 0) || (*n1 < 0 && *n2 < 0))
    {
        *n1 = ((10 * (*n2)) + *n1);
        *n2 = (*n2 - (10 * (*n2)));
        *n1 = (*n1 / 10);
    }
    else if ((*n1 > 0 && *n2 < 0) || (*n1 < 0 && *n2 > 0))
    {
        *n1 = ((10 * (*n2)) - *n1);
        *n2 = -(*n1 - (10 * (*n2)));
        *n1 = (*n1 / 10);
    }
    /*
    Another way to do this:
    *n1 = (*n1 + *n2);
    *n2 = (*n1 - *n2);
    *n1 = (*n1 - *n2);
    */
}

/* Function to swap number but with use of third variable. */
void swap(int *n1, int *n2)
{
    int r;
    r = *n1;
    *n1 = *n2;
    *n2 = r;
}

/*
Function to return sum of all the co-prime numbers between n1 and n2
Ex: First number = 1 Second number = 5
OUTPUT: 54
1 and 2 = 3
1 and 3 = 4
1 and 4 = 5
1 and 5 = 6
2 and 3 = 5
2 and 5 = 7
3 and 4 = 7
3 and 5 = 8
4 and 5 = 9
*/
int coprimenumsum(int n1, int n2)
{
    int i, j, a = (n1 + 1), sum = 0;
    for (i = n1; i <= n2; i++)
    {
        for (j = a; j <= n2; j++)
        {
            if (isCoPrime(i, j))
            {
                sum = (sum + i + j);
            }
        }
        a++;
    }
    return sum;
}

/*
Function to print fibonacci series to number n
EX: N = 8 OUTPUT: 0 1 1 2 3 5 8 13.
*/
void fibonacci(int n)
{
    int i, n1 = 0, n2 = 1, n3, r;
    switch (n)
    {
    case 0:
        return;
    case 1:
        cout << "0";
        return;
    case 2:
        cout << "0 1";
        return;
    }
    for (i = 1; i <= (n - 2); i++)
    {
        n3 = (n1 + n2);
        r = n2;
        n2 = n3;
        n1 = r;
        cout << n3;
    }
}

/*
Function to represent a number as the sum of two prime numbers
EX: 7 = 2 + 5
*/
void primefactor(int num)
{
    int i, j, k = 0;
    for (i = 1; i < num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i + j) == num)
            {
                if (isPrime(i) && isPrime(j))
                {
                    cout << num << " can be represented as sum of " << j << " and " << i << endl;
                    k++;
                }
            }
        }
    }
    if (k == 0)
    {
        cout << num << "cannot be represented as the sum of any two prime numbers";
    }
}

/* Function to input a integer value from user */
int enterint()
{
    float num;
    cout << "Enter a integer: ";
    while (1)
    {
        cin >> num;
        if ((int)num == num)
        {
            return num;
        }
        else
        {
            cout << "You have entered a Real number! please enter a Integer: ";
        }
    }
}

/*
OUTPUT:
How Many Numbers You Want To Enter: 5
Enter A Number: 1
Enter A Number: 2
Enter A Number: 3
Enter A Number: 4
Enter A Number: 5
Between 1 and 2 co-Prime Numbers Are:
1 and 2
Their Sum Is : 3
Between 1 and 3 co-Prime Numbers Are:
1 and 2
1 and 3
2 and 3
Their Sum Is : 12
Between 1 and 4 co-Prime Numbers Are:
1 and 2
1 and 3
1 and 4
2 and 3
3 and 4
Their Sum Is : 24
Between 1 and 5 co-Prime Numbers Are:
1 and 2
1 and 3
1 and 4
1 and 5
2 and 3
2 and 5
3 and 4
3 and 5
4 and 5
Their Sum Is : 54
Between 2 and 3 co-Prime Numbers Are:
2 and 3
Their Sum Is : 5
Between 2 and 4 co-Prime Numbers Are:
2 and 3
3 and 4
Their Sum Is : 12
Between 2 and 5 co-Prime Numbers Are:
2 and 3
2 and 5
3 and 4
3 and 5
4 and 5
Their Sum Is : 36
Between 3 and 4 co-Prime Numbers Are:
3 and 4
Their Sum Is : 7
Between 3 and 5 co-Prime Numbers Are:
3 and 4
3 and 5
4 and 5
Their Sum Is : 24
Between 4 and 5 co-Prime Numbers Are:
4 and 5
Their Sum Is : 9
Their Total Sum Is 186
*/
void coprime()
{
    int n;
    cout << "How Many Numbers You Want To Enter: ";
    cin >> n;
    int i, j, a = 1, sum = 0;
    vector<int> num(n);
    for (i = 0; i < n; i++)
    {
        cout << "Enter A Number: ";
        cin >> num[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = a; j < n; j++)
        {
            if (num[j] >= num[i])
            {
                cout << "Between " << num[i] << " and " << num[j] << " co-Prime Numbers Are: " << endl;
                coprimenum(num[i], num[j]);
                cout << "Their Sum Is : " << coprimenumsum(num[i], num[j]) << endl;
                sum = (sum + coprimenumsum(num[i], num[j]));
            }
            else
            {
                cout << "Between " << num[j] << " and " << num[i] << " co-Prime Numbers Are: " << endl;
                coprimenum(num[j], num[i]);
                cout << endl;
                cout << "Their Sum Is : " << coprimenumsum(num[j], num[i]) << endl;
                sum = (sum + coprimenumsum(num[j], num[i]));
            }
        }
        a++;
    }
    cout << "The Total Sum Is " << sum;
}

/*
Function to print all co-prime numbers between n1 and n2
EX: n1 = 1 n2 = 5
OUTPUT:
1 and 2
1 and 3
1 and 4
1 and 5
2 and 3
2 and 5
3 and 4
3 and 5
4 and 5
*/
void coprimenum(int n1, int n2)
{
    int i, j, a = (n1 + 1);
    for (i = n1; i <= n2; i++)
    {
        for (j = a; j <= n2; j++)
        {
            if (isCoPrime(i, j))
            {
                cout << i << " and " << j << endl;
            }
        }
        a++;
    }
}

/*
OUTPUT:
How Many Numbers You Want To Enter: 5
Enter A Number: 1
Enter A Number: 2
Enter A Number: 3
Enter A Number: 4
Enter A Number: 5
Between 1 and 2 Prime Numbers Are: 2
Their Sum Is : 2
Between 1 and 3 Prime Numbers Are: 2 3
Their Sum Is : 5
Between 1 and 4 Prime Numbers Are: 2 3
Their Sum Is : 5
Between 1 and 5 Prime Numbers Are: 2 3 5
Their Sum Is : 10
Between 2 and 3 Prime Numbers Are: 2 3
Their Sum Is : 5
Between 2 and 4 Prime Numbers Are: 2 3
Their Sum Is : 5
Between 2 and 5 Prime Numbers Are: 2 3 5
Their Sum Is : 10
Between 3 and 4 Prime Numbers Are: 3
Their Sum Is : 3
Between 3 and 5 Prime Numbers Are: 3 5
Their Sum Is : 8
Between 4 and 5 Prime Numbers Are: 5
Their Sum Is : 5
Their Total Sum Is 58
*/
void prime()
{
    int n;
    cout << "How Many Numbers You Want To Enter: ";
    cin >> n;
    int i, j, a = 1, sum = 0;
    vector<int> num(n);
    for (i = 0; i < n; i++)
    {
        cout << "Enter A Number: ";
        cin >> num[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = a; j < n; j++)
        {
            if (num[j] >= num[i])
            {
                cout << "Between " << num[i] << " and " << num[j] << " Prime Numbers Are: ";
                primenum(num[i], num[j]);
                cout << endl;
                cout << "Their Sum Is : " << primenumsum(num[i], num[j]);
                sum = (sum + primenumsum(num[i], num[j]));
            }
            else
            {
                cout << "Between " << num[j] << " and " << num[i] << " Prime Numbers Are: ";
                primenum(num[j], num[i]);
                cout << endl;
                cout << "Their Sum Is : " << primenumsum(num[j], num[i]) << endl;
                sum = (sum + primenumsum(num[j], num[i]));
            }
        }
        a++;
    }
    cout << "Their Total Sum Is " << sum;
}

/*
Function to print all the prime numbers between n1 and n2
Ex: First Number: 2 Second Number: 5
OUTPUT: 2 3 5
*/
void primenum(int n1, int n2)
{
    int k = 0;
    for (int i = n1; i <= n2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                k++;
            }
        }
        if (k == 2)
        {
            cout << i;
        }
        k = 0;
    }
}

bool isCoPrime(int n1, int n2)
{
    for (int i = 2; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Function to return the Decimal value of binary b.
int BinaryToDecimel(int b)
{
    int rem;
    int p = 0;
    int num = 0;
    while (b > 0)
    {
        rem = (b % 10);
        if (rem != 0 && rem != 1)
        {
            return -1;
        }
        b = (b / 10);
        num += (rem * power(2, p++));
    }
    return num;
}

void roots(float a, float b, float c)
{
    float d = ((b * b) - (4 * a * c));
    if (d >= 0)
    {
        cout << "Root 1: " << (((-1 * b) + sqrt(d)) / (2 * a)) << " Root 2: " << (((-1 * b) - sqrt(d)) / (2 * a));
    }
    else
    {
        cout << "Root 1: " << ((-1 * b) / (2 * a)) << " + " << ((sqrt(abs(d))) / (2 * a)) << "i Root 2: " << ((-1 * b) / (2 * a))
             << " - " << ((sqrt(abs(d))) / (2 * a)) << "i";
    }
}

int countVowels(char *str)
{
    int len = _strlen(str);
    __strcpy(_strupr(str), str, 1);
    int k = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            k++;
        }
    }
    return k;
}

int isAlphaNumericString(char *str)
{
    int len = _strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (!(str[i] >= '1' && str[i] <= '9'))
        {
            return 0;
        }
    }
    return 1;
}

char *RemoveAdjacentDuplicateCharacters(char *str)
{
    int len = _strlen(str);
    char *s = new char[len];
    __strcpy(str, s, 0);
    for (int i = 0; i < len; i++)
    {
        if (i != (len - 1) && s[i] == s[i + 1])
        {
            int j;
            for (j = i + 1; s[i] == s[j]; j++)
            {
                s[j] = '\0';
            }
            i = j;
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (i != (len - 1) && s[i + 1] == '\0')
        {
            for (int j = i + 1; j < len; j++)
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    return s;
}

int countWords(char *str)
{
    int k = 0, flag = 0;
    int len = _strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ' && flag == 0)
        {
            if (i == 0 || str[i - 1] == ' ')
            {
                flag = 1;
            }
        }
        else if (str[i] == ' ' && flag == 1)
        {
            k++;
            flag = 0;
        }
        else if (i == (len - 1) && flag == 1)
        {
            k++;
            flag = 0;
        }
    }
    return k;
}

int isPalindrome(char *str)
{
    int len = _strlen(str);
    char *s = new char[len];
    __strcpy(str, s, 0);
    __strcpy(__strrev(s), s, 1);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != s[i])
        {
            return 0;
        }
    }
    return 1;
}

char *__strupr(const char *str)
{
    int len = _strlen(str);
    char *s = new char[len];
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            s[i] = str[i] + ('A' - 'a');
        }
    }
    return s;
}

int _strlen(const char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}

char *__strrev(const char *str)
{
    int len = _strlen(str);
    char *s = new char[len];
    for (int i = 0; i < len; i++)
    {
        s[i] = str[len - i - 1];
    }
    return s;
}

/* Function to make first letter of every word capital */
void capitalize(char *strptr)
{
    int length = _strlen(strptr), i;
    for (i = 0; i < length; i++)
    {
        if (*(strptr + i) == ' ' && *(strptr + i + 1) != ' ' && *(strptr + i + 1) >= 97 && *(strptr + i + 1) <= 122 && isWord(strptr + i + 1))
        {
            *(strptr + i + 1) = *(strptr + i + 1) - 32;
        }
        else if (*(strptr) != ' ' && i == 0 && *(strptr) >= 97 && *(strptr) <= 122 && *(strptr + 1) != ' ')
        {
            *(strptr) = *(strptr)-32;
        }
    }
}

/* Function to check whether a string is word or not */
int isWord(char *strptr)
{
    return ((*(strptr + 1) != ' ' && *(strptr - 1) == ' ' && *(strptr + 1) != '\0') ? 1 : 0);
}

/* Function to return the no. of words in a sentence. */
int numwords(char *strptr)
{
    int length = _strlen(strptr), i, k = 0;
    for (i = 0; i < length; i++)
    {
        if (*(strptr + i) != ' ' && isWord(strptr + i))
        {
            k++;
        }
        else if (i == 0 && *(strptr) != ' ' && *(strptr + 1) != ' ')
        {
            k++;
        }
    }
    return k;
}

/*
Function to reverse a sentence word wise
EX: RISHAV KUMAR
OUTPUT: VAHSIR RAMUK
*/
void reverse_string_word_wise(char *strptr)
{
    int length = _strlen(strptr);
    int i, j;
    for (i = 0; i < length; i++)
    {
        if (*(strptr + i) != ' ' && *(strptr + i + 1) != ' ')
        {
            for (j = 0; (i + j < length) && (*(strptr + i + j) != ' '); j++)
                ;
            stringrev_modified(strptr + i, j);
            i = i + j;
        }
    }
}

void stringrev_modified(char *strptr, int length)
{
    int i;
    for (i = 0; i < length / 2; i++)
    {
        swapchar((strptr + i), (strptr + length - i - 1));
    }
}

/* Function to swap two characters c1 and c2 */
void swapchar(char *c1, char *c2)
{
    char r;
    r = *c1;
    *c1 = *c2;
    *c2 = r;
}

void _swapchar(char *c1, char *c2)
{
    *c1 = (*c1 + *c2);
    *c2 = (*c1 - *c2);
    *c1 = (*c1 - *c2);
}
/* Function to count no. of vowels in the string */
int countvowels(char *strptr)
{
    int k = 0;
    int length = _strlen(strptr);
    strptr = __strupr(strptr);
    for (int i = 0; i < length; i++)
    {
        if (*(strptr + i) == 'A' || *(strptr + i) == 'E' || *(strptr + i) == 'I' || *(strptr + i) == 'O' || *(strptr + i) == 'U')
        {
            k++;
        }
    }
    return k;
}

/* Function to print substring of a string. we have to pass the string pointer, the start position and the end position of the substring in the argument. */
void substr(char *strptr, int start, int end)
{
    int k = 0;
    int length = _strlen(strptr);
    char *str = new char[length];
    if (end <= length)
    {
        for (int i = (start - 1); i < end; i++, k++)
        {
            str[k] = *(strptr + i);
        }
        cout << str;
    }
    cout << "You Have Passed Wrong Arguments";
}

/* Function to return maximum of two characters. */
char maxchar(char c1, char c2)
{
    return (c1 >= c2 ? c1 : c2);
}

/* Function to return minimum of two characters. */
char minchar(char c1, char c2)
{
    return (c1 <= c2 ? c1 : c2);
}

/*
Function to return the first occurence of searchstrptr string in strptr string
if no occurence is found function will return -1
*/
int searchstring(char *strptr, char *searchstrptr)
{
    int k = 0;
    strptr = __strupr(strptr);
    searchstrptr = __strupr(searchstrptr);
    int strlen = _strlen(strptr);
    int searchstrlen = _strlen(searchstrptr);
    if (searchstrlen <= strlen)
    {
        for (int i = 0; i < strlen; i++)
        {
            if (*(searchstrptr) == *(strptr + i))
            {
                for (int j = 0; j < searchstrlen; j++)
                {
                    if (*(strptr + i + j) != *(searchstrptr + j))
                    {
                        k++;
                    }
                    if (k == 0)
                    {
                        return i + 1;
                    }
                    k = 0;
                }
            }
        }
    }
    return -1;
}

void __strcpy(char *str, char *s, int erase)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        s[i] = str[i];
    }
    if (erase)
    {
        delete (str);
    }
}