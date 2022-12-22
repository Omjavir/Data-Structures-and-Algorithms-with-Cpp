#include <iostream>
using namespace std;

int main()
{

    // // *** Adding two numbers ***
    // int amount1;
    // int amount2;
    // cin>>amount1;
    // cin>>amount2;
    // int sum = amount1 + amount2;
    // // cout<<"The sum is: \n";
    // cout<<"The sum is:"<<endl;
    // // cout<<amount1 + amount2;
    // cout<<sum;

    // // *** If Else ***
    // int number;
    // cin>>number;
    // if(number%2==0){
    //     cout<<"Even Number"<<endl;
    // }else{
    //     cout<<"Odd Number"<<endl;
    // }

    // // *** Nested If Else ***
    // int a, b, c;
    // cin>>a>>b>>c;
    // if(a>b){
    //     if(a>c){cout<<a;}else{cout<<c;}
    // }else{
    //     if(b>c){cout<<b;}else{cout<<c;}
    // }

    // // *** Loops ***
    // // *** For Loops ***
    // int num;
    // cin >> num;
    // int sum = 0;
    // for (int i = 0; i <= num; i++)
    // {
    //     sum += i;
    // }
    // cout<<sum<<endl;

    // // *** While Loops ***
    // int num;
    // cin>>num;
    // while(num>0){
    //     cout<<num<<endl;
    //     cin>>num;
    // }
    // cout<<"Good Bye!!\n";

    // // *** Do While Loops ***
    // // ***** Difference between While Loop and Do While loop is that do while loop will run atleast run for one time before checking for the condition. Where the While loop will first check the condiion and then run accordingly. *****
    // int num;
    // cin >> num;
    // do
    // {
    //     cout << num << endl;
    //     cin >> num;
    // } while (num > 0);
    // cout << "Good Bye!!\n";

    // // *** Program to check whether the number is prime or not ***
    // int num;
    // cin >> num;
    // int i;
    // for (i = 2; i < num; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         cout << "Not Prime\n";
    //         break;
    //     }
    // }
    // if (i == num)
    // {
    //     cout << "Prime" << endl;
    // }

    // // *** Program to check prime number in range ***
    // int a, b;
    // cin >> a >> b;
    // for (int num = a; num <= b; num++)
    // {
    //     int i;
    //     for (i = 2; i < num; i++)
    //     {
    //         if (num % i == 0)
    //         {
    //             break;
    //         }
    //     }
    //     if (i == num)
    //     {
    //         cout << num << endl;
    //     }
    // }

    // // *** Switch Case ***
    // // ***** Simple calculation using swtich case *****
    // int num1, num2;
    // cout << "Enter two numbers!\n";
    // cin >> num1 >> num2;
    // char op;
    // cout << "Enter an operation (+, -, *, %):\n";
    // cin >> op;
    // switch (op)
    // {
    // case '+':
    //     cout << num1 + num2 << endl;
    //     break;
    // case '-':
    //     cout << num1 - num2 << endl;
    //     break;
    // case '*':
    //     cout << num1 * num2 << endl;
    //     break;
    // case '%':
    //     cout << num1 % num2 << endl;
    //     break;
    // default:
    //     cout << "Enter a valid operator";
    //     break;
    // }

    // // *** Operators ***
    // // *** Example ***
    // int i = 10, j = 20, k;
    //     //10  //9  //19  //20  //9   //20  //10  //19
    // k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    // cout << i << endl; // 10
    // cout << j << endl; // 20
    // cout << k << endl;

    // // *** For printing * patterns ***
    // // Example 1
    // int row, col;
    // cin >> row >> col;
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // Example 2
    // int row, col;
    // cin >> row >> col;
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         if (i == 1 || i == row || j == 1 || j == col)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // // Example 3
    // int num;
    // cin >> num;
    // for (int i = num; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // Example 4
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= n - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << " *";
    //         }
    //     }
    //     cout << endl;
    // }

    // // Example 5
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // // Example 6
    // int n;
    // cin >> n;
    // int count = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    // // *** Example 7 ***
    // // Butterfly pattern
    // int n;
    // cin >> n;
    // // For upper side
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     int space = 2 * n - 2 * i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // For lower side
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     int space = 2 * n - 2 * i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // Example 8
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n + 1 - i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // // Example 9
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << " 1";
    //         }
    //         else
    //         {
    //             cout << " 0";
    //         }
    //     }
    //     cout << endl;
    // }

    // // *** Check for prime number ***
    // int n;
    // cin >> n;
    // int flag = 0;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Not Prime" << endl;
    //         flag = 1;
    //         break;
    //     }
    // }
    // if (flag == 0)
    // {
    //     cout << "Prime";
    // }

    // *** Reverse a number ***
    

    return 0;
}