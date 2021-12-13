// hello_001.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int func_test_001()
{
    std::cout << "function test 001!\n";
    return 0;
}

float getMold(const vector<float>& vec) {   //求向量的模长
    int n = vec.size();
    float sum = 0.0;
    for (int i = 0; i < n; ++i)
        sum += vec[i] * vec[i];
    return sqrt(sum);
}

float getSimilarity(const vector<float>& lhs, const vector<float>& rhs) {
    int n = lhs.size();
    assert(n == rhs.size());
    float tmp = 0.0;  //内积
    for (int i = 0; i < n; ++i)
        tmp += lhs[i] * rhs[i];
    return tmp / (getMold(lhs) * getMold(rhs));
}

int func_vector_001()
{
    std::cout << "function vector 001!\n";
    vector<vector<float>> vector_int;
    vector<float> a{ 1,2,3,4,5 };
    vector<float> b{ 1,2,3,4,6 };
    float cosSimilarity = 0.0;

    vector_int.push_back(a);
    vector_int.push_back(b);

    //for (auto num : a) {
    //    cout << num << endl;
    //}

    //for (auto num : b) {
    //    cout << num << endl;
    //}

    for (auto vec : vector_int) {
        for (auto num : vec) {
            cout << num << endl;
        }
    }

    //求解两个vector之间的余弦相似度；
    cosSimilarity = getSimilarity(a, b);
    cout << "a和b vector的余弦相似度求结果为：" <<cosSimilarity << endl;

    return 0;
}



int main()
{
    std::cout << "Hello World 001!\n";
    func_vector_001();
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
