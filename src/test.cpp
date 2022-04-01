/*
 * @Author: your name
 * @Date: 2022-04-01 03:32:55
 * @LastEditTime: 2022-04-01 03:48:34
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /mylearnproject/src/test.cpp
 */
#include <iostream>
#include <memory>

int main(){
    std::shared_ptr<int> ptr(new int(7777));
    
    std::cout << *ptr << "  hdhakdjak   " << std::endl;
    
}