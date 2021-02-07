// TextEdit.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream fileio;
    int n;
    string filepath;
    char inputline[26];
    string input = "114514";
    for (;;) {
        cout << "请输入打开方式(0=打开,1=输入):";
        cin >> n;
        if (n == 0) {
            cout << "文件路径:";
            getline(cin, filepath);
            fileio.open(filepath.c_str(), ios::out);
            if (!fileio.fail()) {
                cout << "path error!(code:2)";
                return 2;
            }
            for (int i = 0; i <= 25 && !fileio.eof(); ++i) {
                fileio.getline(inputline, 25);
                cout << inputline << endl;
            }
        }
        else if (n == 1) {
            cout << "文件路径:";
            getline(cin, filepath);
            fileio.open(filepath.c_str(), ios::in);
            if (!fileio.fail()) {
                cout << "path error!(code:2)";
                return 2;
            }
            if (!fileio.fail()) {
                cout << "path error!(code:2)";
                return 2;
            }
            do {
                cout << "input string:" << endl;
                getline(cin, input);
                fileio << input << endl;
            } while (input == "");
        }
        else {
            cout << "input error!(code:1)";
            return 1;
        }
    }
    return 0;
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
