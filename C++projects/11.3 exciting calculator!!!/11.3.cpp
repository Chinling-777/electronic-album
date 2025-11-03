// 11.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char c;
    
    do {
        
        while (true) {
            cout << "please enter two numbers you want to calculate" << endl;
            cin >> a >> b;//'1''0'(okay,I understand, get them together)'space'(What's this? end the input process! switch to b!) 
			               //now, before getting the value of b, first clear up all the spaces, newlines and tabs)
            
			if (cin.fail()) {//cin fails when the input is invalid
				cin.clear();// clear the pipe error flag
				cin.ignore(numeric_limits<streamsize>::max(), '\n');//clean the input buffer until the next newline character
                cout<<"invalid input, please try again" << endl;
            }
            else {
				break;

            }
        }
        while (true) {
            cout << "please enter a operator" << endl;
			cin >> c;// only get the first character of the input, so never fail
            if (c!='+' && c != '-' && c !='*' && c != '/') {//same as 'not in '
                cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');//::is represents getting the function from the namespace
                //for namespaces, classes, and types — it’s like saying “belonging to this category,” not “belonging to this object.”
                cout << "invalid input, please try again" << endl;
            }
            else {
                break;
            }

        }
        
        
        
        
        
            switch (c) {
            case '+':
                cout << a << c << b << '=' << a + b << endl;
                break;
            case '-':
                cout << a << c << b << '=' << a - b << endl;
                break;
            case '*':
                cout << a << c << b << '=' << a * b << endl;
                break;
            case '/':
               
                cout << a << c << b << '=' << a / b << endl;

				break;//do not forget the break statement!!!
            default://default is also important
                cout << "something wrong!" << endl;
				break;
            
                
        }
    } while (1);


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
