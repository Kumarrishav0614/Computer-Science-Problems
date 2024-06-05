#include <iostream>
using namespace std;

int rows, cols; // Global variables representing rows and columns in patterns.
// Global variables are used so we don't have to make local variables everytime inside functions.

void P1(int);
void P2(int);
void P3(int);
void P4(int);
void P5(int);
void P6(int);
void P7(int);
void P8(int);
void P9(int);
void P10(int);
void P11(int);
void P12(int);
void P13(int);
void P14(int);
void P15(int);
void P16(int);
void P17(int);
void P18(int);
void P19(int);
void P20(int);
void P21(int);
void P22(int);
void P23(int);
void P24(int);
void P25(int);
void P26(int);
void P27(int);
void P28(int);
void P29(int);
void P30(int);
void P31(int);
void P32(int);
void P33(int);
void P34(int);
void P35(int);
void P36(int);
void P37(int);
void P38(int);

/*
Pattern 1:
*
**
***
****
*****
*/
void P1(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols <= rows; cols++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Pattern 2:
    *
   **
  ***
 ****
*****
*/
void P2(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        for (cols = 1; cols <= rows; cols++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Pattern 3:
*****
 ****
  ***
   **
    *
*/
void P3(int _rows)
{
    for (rows = _rows; rows >= 1; rows--)
    {
        for (cols = _rows; cols > rows; cols--)
        {
            cout << " ";
        }
        for (cols = 1; cols <= rows; cols++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
Pattern 4:
*****
****
***
**
*
*/
void P4(int _rows)
{
    for (rows = _rows; rows >= 1; rows--)
    {
        for (cols = 1; cols <= rows; cols++)
        {
            cout << "*";
        }
        for (cols = _rows; cols > rows; cols--)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern 5:
    *
   ***
  *****
 *******
*********
*/
void P5(int _rows)
{
    for (rows = _rows; rows >= 1; rows--)
    {
        for (cols = 1; cols < rows; cols++)
        {
            cout << " ";
        }
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << "*";
        }
        cout << "*";
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << "*";
        }
        for (cols = 1; cols < rows; cols++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern 6:
    *
   * *
  * * *
 * * * *
* * * * *
*/
void P6(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        for (cols = 1; cols <= rows; cols++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
Pattern 7:
*********
**** ****
***   ***
**     **
*       *
*/
void P7(int _rows)
{
    for (rows = _rows; rows >= 1; rows--)
    {
        if (_rows == rows)
        {
            for (cols = 1; cols < rows; cols++)
            {
                cout << "*";
            }
            cout << "*";
            for (cols = 1; cols < rows; cols++)
            {
                cout << "*";
            }
        }
        else
        {
            for (cols = 1; cols <= rows; cols++)
            {
                cout << "*";
            }
            for (cols = 1; cols < (_rows - rows); cols++)
            {
                cout << " ";
            }
            cout << " ";
            for (cols = 1; cols < (_rows - rows); cols++)
            {
                cout << " ";
            }
            for (cols = 1; cols <= rows; cols++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

/*
Pattern 8:
    1
   121
  12321
 1234321
123454321
*/
void P8(int _rows)
{
    for (rows = _rows; rows >= 1; rows--)
    {
        for (cols = 1; cols < rows; cols++)
        {
            cout << " ";
        }
        for (cols = 1; cols <= (_rows - rows + 1); cols++)
        {
            cout << cols;
        }
        for (cols = (_rows - rows); cols >= 1; cols--)
        {
            cout << cols;
        }
        for (cols = 1; cols < rows; cols++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern 9:
ABCDEDCBA
ABCD DCBA
ABC   CBA
AB     BA
A       A
*/
void P9(int _rows)
{
    int k = 65;
    for (rows = _rows; rows >= 1; rows--)
    {
        if (_rows == rows)
        {
            for (cols = 1; cols < rows; cols++)
            {
                cout << ((char)k);
                k++;
            }
            cout << ((char)k);
            for (cols = 1; cols < rows; cols++)
            {
                k--;
                cout << ((char)k);
            }
        }
        else
        {
            for (cols = 1; cols <= rows; cols++)
            {
                cout << ((char)k);
                k++;
            }
            for (cols = 1; cols < (_rows - rows); cols++)
            {
                cout << " ";
            }
            cout << " ";
            for (cols = 1; cols < (_rows - rows); cols++)
            {
                cout << " ";
            }
            for (cols = 1; cols <= rows; cols++)
            {
                k--;
                cout << ((char)k);
            }
        }
        cout << endl;
    }
}

/*
Pattern 10:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
void P10(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        for (cols = 1; cols < rows; cols++)
        {
            cout << "*";
        }
        cout << "*";
        for (cols = 1; cols < rows; cols++)
        {
            cout << "*";
        }
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (rows = 1; rows < _rows; rows++)
    {
        for (cols = 1; cols <= rows; cols++)
        {
            cout << " ";
        }
        for (cols = 1; cols < (_rows - rows); cols++)
        {
            cout << "*";
        }
        cout << "*";
        for (cols = 1; cols < (_rows - rows); cols++)
        {
            cout << "*";
        }
        for (cols = 1; cols <= rows; cols++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern 11:
*
**
***
****
*****
****
***
**
*
*/
void P11(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols <= rows; cols++)
        {
            cout << "*";
        }
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (rows = 1; rows < _rows; rows++)
    {
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << "*";
        }
        for (cols = 1; cols <= rows; cols++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern 12:
*********
 *******
  *****
   ***
    *
*/
void P12(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols < rows; cols++)
        {
            cout << " ";
        }
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << "*";
        }
        cout << "*";
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << "*";
        }
        for (cols = 1; cols < rows; cols++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern 13:
    1
   232
  34543
 4567654
567898765
*/
void P13(int _rows)
{
    int k = 1, p = 1;
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        for (cols = k; cols <= p; cols++)
        {
            cout << cols;
        }
        for (cols = (p - 1); cols >= k; cols--)
        {
            cout << cols;
        }
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        cout << endl;
        k++;
        p += 2;
    }
}

/*
Pattern 14:
43210
3210
210
10
0
*/
void P14(int _rows)
{
    for (rows = (_rows - 1); rows >= 0; rows--)
    {
        for (cols = rows; cols >= 0; cols--)
        {
            cout << cols;
        }
        for (cols = 1; cols <= (_rows - cols - 1); cols++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern 15:
    1
   12
  123
 1234
12345
 1234
  123
   12
    1
*/
void P15(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        for (cols = 1; cols <= rows; cols++)
        {
            cout << cols;
        }
        cout << endl;
    }
    for (rows = 1; rows < _rows; rows++)
    {
        for (cols = 1; cols <= rows; cols++)
        {
            cout << " ";
        }
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << cols;
        }
        cout << endl;
    }
}

/*
// Pattern 16:
  \******************/
//*\****************/*
//**\**************/**
//***\************/***
//****\**********/****
//*****\********/*****
//******\******/******
//*******\****/*******
//********\**/********
//*********\/*********
//*********/\*********
//********/**\********
//*******/****\*******
//******/******\******
//*****/********\*****
//****/**********\****
//***/************\***
//**/**************\**
//*/****************\*
  /******************\
*/
void P16(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
        if (rows <= ((_rows + 1) / 2))
        {
            for (cols = 1; cols < rows; cols++)
            {
                cout << "*";
            }
            cout << "\\";
            for (cols = 1; cols <= (_rows - (rows * 2)); cols++)
            {
                cout << "*";
            }
            if ((rows != (_rows + 1) / 2) || (_rows % 2 == 0))
            {
                cout << "/";
            }
            for (cols = 1; cols < rows; cols++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (cols = 1; cols <= (_rows - rows); cols++)
            {
                cout << "*";
            }
            cout << "/";
            for (cols = 1; cols <= (_rows - (2 * (_rows - rows) + 2)); cols++)
            {
                cout << "*";
            }
            cout << "\\";
            for (cols = 1; cols <= (_rows - rows); cols++)
            {
                cout << "*";
            }
            cout << endl;
        }
}

/*
Pattern 17:
*       *
**     **
***   ***
**** ****
*********
*/
void P17(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        if (_rows == rows)
        {
            for (cols = 1; cols < rows; cols++)
            {
                cout << "*";
            }
            cout << "*";
            for (cols = 1; cols < rows; cols++)
            {
                cout << "*";
            }
        }
        else
        {
            for (cols = 1; cols <= rows; cols++)
            {
                cout << "*";
            }
            for (cols = 1; cols < (_rows - rows); cols++)
            {
                cout << " ";
            }
            cout << " ";
            for (cols = 1; cols < (_rows - rows); cols++)
            {
                cout << " ";
            }
            for (cols = 1; cols <= rows; cols++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

/*
Pattern 18:
*********
**** ****
***   ***
**     **
*       *
*       *
*       *
**     **
***   ***
**** ****
*********
*/
void P18(int _rows)
{
    P7(_rows);
    cout << "*";
    for (rows = 1; rows < (_rows - 1); rows++)
    {
        cout << " ";
    }
    cout << " ";
    for (rows = 1; rows < (_rows - 1); rows++)
    {
        cout << " ";
    }
    cout << "*";
    cout << endl;
    P17(_rows);
}

/*
Pattern 19:
*********
**** ****
***   ***
**     **
*/
void P19(int _rows)
{
    for (rows = _rows; rows > 1; rows--)
    {
        if (_rows == rows)
        {
            for (cols = 1; cols < rows; cols++)
            {
                cout << "*";
            }
            cout << "*";
            for (cols = 1; cols < rows; cols++)
            {
                cout << "*";
            }
        }
        else
        {
            for (cols = 1; cols <= rows; cols++)
            {
                cout << "*";
            }
            for (cols = 1; cols < (_rows - rows); cols++)
            {
                cout << " ";
            }
            cout << " ";
            for (cols = 1; cols < (_rows - rows); cols++)
            {
                cout << " ";
            }
            for (cols = 1; cols <= rows; cols++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

/*
Pattern 20:
**     **
***   ***
**** ****
*********
*/
void P20(int _rows)
{
    for (rows = 2; rows <= _rows; rows++)
    {
        if (_rows == rows)
        {
            for (cols = 1; cols < rows; cols++)
            {
                cout << "*";
            }
            cout << "*";
            for (cols = 1; cols < rows; cols++)
            {
                cout << "*";
            }
        }
        else
        {
            for (cols = 1; cols <= rows; cols++)
            {
                cout << "*";
            }
            for (cols = 1; cols < (_rows - rows); cols++)
            {
                cout << " ";
            }
            cout << " ";
            for (cols = 1; cols < (_rows - rows); cols++)
            {
                cout << " ";
            }
            for (cols = 1; cols <= rows; cols++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

/*
Pattern 21:
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********
*/
void P21(int _rows)
{
    P19(_rows);
    cout << "*";
    for (rows = 1; rows < (_rows - 1); rows++)
    {
        cout << " ";
    }
    cout << " ";
    for (rows = 1; rows < (_rows - 1); rows++)
    {
        cout << " ";
    }
    cout << "*";
    cout << endl;
    P20(_rows);
}

/*
Pattern 22:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
void P22(int _rows)
{
    for (rows = _rows; rows >= 1; rows--)
    {
        for (cols = 1; cols < rows; cols++)
        {
            cout << " ";
        }
        for (cols = 1; cols <= (_rows - rows + 1); cols++)
        {
            cout << ((char)(cols + 64));
        }
        for (cols = (_rows - rows); cols >= 1; cols--)
        {
            cout << ((char)(cols + 64));
        }
        for (cols = 1; cols < rows; cols++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern 23:
    A1
   AB12
  ABC123
 ABCD1234
ABCDE12345
*/
void P23(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        for (cols = 1; cols <= rows; cols++)
        {
            cout << ((char)(64 + cols));
        }
        for (cols = 1; cols <= rows; cols++)
        {
            cout << cols;
        }
        cout << endl;
    }
}

/*
Pattern 24:
    *****
   *****
  *****
 *****
*****
*/
void P24(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        cout << "*****";
        for (cols = 1; cols < rows; cols++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
Pattern 25:
    1
   12A
  123AB
 1234ABC
12345ABCD
*/
void P25(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        for (cols = 1; cols <= rows; cols++)
        {
            cout << cols;
        }
        for (cols = 1; cols < rows; cols++)
        {
            cout << ((char)(64 + cols));
        }
        cout << endl;
    }
}

/*
PATTERN 26:
1
10
101
1010
10101
*/
void P26(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols <= rows; cols++)
        {
            if (cols % 2 == 0)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }
}

/*
PATTERN 27:
* * * * * * *
*           *
*   * * *   *
*   *   *   *
*   * * *   *
*           *
* * * * * * *
*/
void P27(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        if (rows == 1 || rows == _rows)
        {
            for (cols = 1; cols <= _rows; cols++)
            {
                cout << "* ";
            }
        }
        else if (rows == 2 || rows == (_rows - 1))
        {
            cout << "* ";
            for (cols = 1; cols <= (_rows - 2); cols++)
            {
                cout << "  ";
            }
            cout << "*";
        }
        else if (rows == 3 || rows == (_rows - 2))
        {
            cout << "*   ";
            for (cols = 1; cols <= (_rows - 4); cols++)
            {
                cout << "* ";
            }
            cout << "  *";
        }
        else if (rows > 3 && rows < (_rows - 2))
        {
            cout << "*   *";
            for (cols = 1; cols <= (_rows - 6); cols++)
            {
                cout << "  ";
            }
            cout << " *   *";
        }
        cout << endl;
    }
}

/*
PATTERN 28:
                    0
                  1 2 1
                2 3 4 3 2
              3 4 5 6 5 4 3
            4 5 6 7 8 7 6 5 4
          5 6 7 8 9 0 9 8 7 6 5
        6 7 8 9 0 1 2 1 0 9 8 7 6
      7 8 9 0 1 2 3 4 3 2 1 0 9 8 7
    8 9 0 1 2 3 4 5 6 5 4 3 2 1 0 9 8
  9 0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0 9
0 1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1 0
  9 0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0 9
    8 9 0 1 2 3 4 5 6 5 4 3 2 1 0 9 8
      7 8 9 0 1 2 3 4 3 2 1 0 9 8 7
        6 7 8 9 0 1 2 1 0 9 8 7 6
          5 6 7 8 9 0 9 8 7 6 5
            4 5 6 7 8 7 6 5 4
              3 4 5 6 5 4 3
                2 3 4 3 2
                  1 2 1
                    0
*/
void P28(int _rows)
{
    int k = 0;
    for (rows = 0; rows < _rows; rows++)
    {
        for (cols = 1; cols < (_rows - cols); cols++)
        {
            cout << "  ";
        }
        for (cols = k; cols < (2 * rows); cols++)
        {
            if (cols >= 10)
            {
                cout << (cols % 10);
            }
            else
            {
                cout << cols;
            }
        }
        if ((rows * 2) >= 10)
        {
            cout << ((rows * 2) % 10);
        }
        else
        {
            cout << (rows * 2);
        }
        cols--;
        for (; cols >= k; cols--)
        {
            if (cols >= 10)
            {
                cout << (cols % 10);
            }
            else
            {
                cout << (cols);
            }
        }
        k++;
        cout << endl;
    }
    k -= 2;
    rows -= 2;
    for (; rows >= 0; rows--)
    {
        for (cols = 1; cols < (_rows - rows); cols++)
        {
            cout << "  ";
        }
        for (cols = k; cols < (2 * rows); cols++)
        {
            if (cols >= 10)
            {
                cout << (cols % 10);
            }
            else
            {
                cout << cols;
            }
        }
        if ((rows * 2) >= 10)
        {
            cout << ((rows * 2) % 10);
        }
        else
        {
            cout << (rows * 2);
        }
        cols--;
        for (; cols >= k; cols--)
        {
            if (cols >= 10)
            {
                cout << (cols % 10);
            }
            else
            {
                cout << (cols);
            }
        }
        k--;
        cout << endl;
    }
}

/*
PATTERN 29:
A
BA
CBA
DCBA
EDCBA
*/
void P29(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = rows; cols >= 1; cols--)
        {
            cout << ((char)(cols + 64));
        }
        cout << endl;
    }
}

/*
PATTERN 30:
    1
   212
  32123
 4321234
543212345
*/
void P30(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        for (cols = rows; cols >= 2; cols--)
        {
            cout << cols;
        }
        for (cols = 1; cols <= rows; cols++)
        {
            cout << cols;
        }
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
PATTERN 31:
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/
void P31(int _rows)
{
    int k = 0;
    for (rows = 1; rows <= _rows; rows++)
    {
        if (rows % 2 == 0)
        {
            for (cols = (rows + k); cols >= (k + 1); cols--)
            {
                cout << cols;
                if (cols != (k + 1))
                {
                    cout << "*";
                }
            }
            k = rows + k;
            cout << endl;
        }
        else
        {
            for (cols = k + 1; cols <= (rows + k); cols++)
            {
                cout << cols;
                if (cols != (rows + k))
                {
                    cout << "*";
                }
            }
            k = rows + k;
            cout << endl;
        }
    }
}

/*
PATTERN 32:
    A
   CB
  FED
 JIHG
ONMLK
*/
void P32(int _rows)
{
    int k = 64;
    for (rows = 1; rows <= _rows; rows++)
    {
        k = rows + k;
        for (cols = 1; cols <= (_rows - rows); cols++)
        {
            cout << " ";
        }
        for (cols = k; cols > (k - rows); cols--)
        {
            cout << cols;
        }
        cout << endl;
    }
}

/*
PATTERN 33:
    1
   A B
  1 2 3
 A B C D
1 2 3 4 5
*/
void P33(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        if (rows % 2 == 0)
        {
            for (cols = 1; cols <= (_rows - rows); cols++)
            {
                cout << " ";
            }
            for (cols = 1; cols <= rows; cols++)
            {
                cout << ((char)(64 + cols));
            }
            cout << endl;
        }
        else
        {
            for (cols = 1; cols <= (_rows - rows); cols++)
            {
                cout << " ";
            }
            for (cols = 1; cols <= rows; cols++)
            {
                cout << cols;
            }
            cout << endl;
        }
    }
}

/*
PATTERN 34:
*   *
 * *
  *
 * *
*   *
*/
void P34(int _rows)
{
    for (rows = 1; rows <= _rows; rows++)
    {
        if (rows <= (_rows + 1) / 2)
        {
            for (cols = 1; cols < rows; cols++)
            {
                cout << " ";
            }
            cout << "*";
            for (cols = 1; cols <= (_rows - rows * 2); cols++)
            {
                cout << " ";
            }
            if (rows != (_rows + 1) / 2)
            {
                cout << "*";
            }
            for (cols = 1; cols < rows; cols++)
            {
                cout << " ";
            }
            cout << endl;
        }
        else
        {
            for (cols = 1; cols <= (_rows - rows); cols++)
            {
                cout << " ";
            }
            cout << "*";
            for (cols = 1; cols <= (_rows - (2 * (_rows - rows) + 2)); cols++)
            {
                cout << " ";
            }
            cout << "*";
            for (cols = 1; cols <= (_rows - rows); cols++)
            {
                cout << " ";
            }
            cout << endl;
        }
    }
}

/*
PATTERN 35:
ABCDEFGHI
ABCD FGHI
ABC   GHI
AB     HI
A       I
*/
void P35(int _rows)
{
    int k = 0;
    for (rows = _rows; rows >= 1; rows--)
    {
        if (_rows == rows)
        {
            for (cols = 1; cols < rows; cols++)
            {
                cout << ((char)(cols + 64));
            }
            cout << ((char)(cols + 64));
            k = cols + 64;
            for (cols = 1; cols <= (_rows - rows); cols++)
            {
                cout << " ";
            }
            for (cols = 1; cols < rows; cols++)
            {
                cout << ((char)(k + cols));
            }
            k = 0;
        }
        else
        {
            for (cols = 1; cols <= rows; cols++)
            {
                cout << ((char)(cols + 64));
            }
            k = cols + 64;
            for (cols = 1; cols < (_rows - rows); cols++)
            {
                cout << " ";
                k++;
            }
            cout << " ";
            for (cols = 1; cols < (_rows - rows); cols++)
            {
                cout << " ";
                k++;
            }
            for (cols = 1; cols <= rows; cols++)
            {
                cout << ((char)(k + cols));
            }
            k = 0;
        }
        cout << endl;
    }
}

/*
PATTERN 36:
1
62
1073
131184
15141295
16161513106
*/
void P36(int _rows)
{
    int k = 1;
    for (rows = 0; rows <= _rows; rows++)
    {
        for (cols = 0; cols < rows; cols++)
        {
            k = k + _rows - cols - 1;
        }
        for (cols = rows; cols >= 0; cols--)
        {
            cout << k;
            if (k > _rows)
            {
                k = k - _rows + cols;
            }
        }
        k++;
        cout << endl;
    }
}

/*
PATTERN 37:
    *
   * *
  * * *
 * * * *
* * * * *
*/
void P37(int _rows)
{
    rows = 1;
    int k = 1, p = 1;
    while (1)
    {
        if (k <= (_rows - rows))
        {
            cout << " ";
            k++;
            continue;
        }
        if (p <= rows)
        {
            cout << "* ";
            p++;
            continue;
        }
        k = 1;
        p = 1;
        rows++;
        cout << endl;
        if (rows > _rows)
        {
            break;
        }
    }
}

/*
PATTERN 38:
0
0 1
0 2 4
0 3 6 9
0 4 8 12 16
*/
void P38(int _rows)
{

    for (rows = 0; rows < _rows; rows++)
    {
        for (cols = 0; cols <= rows; cols++)
        {
            cout << (cols * rows);
        }
        cout << endl;
    }
}