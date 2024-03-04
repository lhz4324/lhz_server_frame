# lhz
c++ framework

主线程（SocketHandler）
1. 监听和建立客户端的连接；
2. 接收客户端的请求，创建一个任务，并把该任务放入任务队列；
3. 告诉分发线程，有请求任务过来了，叫他赶紧去处理；
4. 重复以上三个步骤；

注意：主线程不处理具体请求。

分发线程（TaskDispatcher）
1. 查看任务队列，看是否有请求任务？没有任务则继续睡觉，否则把任务取出来，然后分发给线程池；
2. 线程池有空闲的线程，则把该任务交给空闲的线程处理，否则该任务乖乖呆在队列里等待，直到有空闲的线程为止；
3. 重复以上两个步骤；

注意：分发线程也不处理具体请求。

工作线程（WorkerThread）
1. 执行任务；
2. 销毁任务；
3. 重复以上两个步骤；

注意：工作线程处理具体请求。


Reactor + 多线程

![image](https://github.com/lhz4324/lhz_server_frame/assets/127606697/68409de3-8403-4ab0-aa24-4d4c70287fe2)


python压测
服务器
OS：centos 6.10
CPU：2核（Intel(R) Xeon(R) Platinum 8269CY CPU @ 2.50GHz）
内存：8G

客户端
和服务端在同一台服务器上运行，客户端用多线程模拟并发

![image](https://github.com/lhz4324/lhz_server_frame/assets/127606697/78d8e4e8-76c6-4d42-9286-2b5c8800257a)
