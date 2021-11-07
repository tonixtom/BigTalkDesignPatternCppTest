#include <iostream>
#include "./internal/Client.h"

//Model 字符串数据和设置和获取数据的方法
//控制器会触发模型更新，并且还提供最新信息做Views.

int main()
{
    Client *tom = new Client();
    tom->run();
    return 0;
}

