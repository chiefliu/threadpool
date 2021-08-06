/*
 * @Descripttion: 
 * @version: 
 * @Author: chiefliu
 * @Date: 2021-08-06 14:08:11
 * @LastEditors: chiefliu
 * @LastEditTime: 2021-08-06 14:19:36
 */
#include "thread_pool.h"
#include <iostream>

using namespace std;

void ThreadWork(int i )
{
    cout<<"worker "<<i<<endl;
}

int main()
{
    ThreadPool pool(5);

    pool.enqueue(ThreadWork,1);
    pool.enqueue(ThreadWork,2);
    pool.enqueue(ThreadWork,3);
    pool.enqueue(ThreadWork,4);

    return 0;
}