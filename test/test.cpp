//
// Created by 陈旭扬 on 2025/1/14.
//

#include "json.hpp"
using json = nlohmann::json;
#include <iostream>
#include <vector>
#include <map>

using namespace std;

void fun1() {
    json js;
    js["name"] = "chen";
    js["age"] = 18;
    js["msg"]["a"] = "hello";
    js["msg"]["b"] = "world";
    cout << js << endl;
}

int main() {
    fun1();
}