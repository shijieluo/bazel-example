#include<iostream>
#include"g3log/g3log.hpp"
#include"g3log/logworker.hpp"
#include<thread>
#define path_to_log_file "./"
using namespace std;

void divideByZero(){
    LOGF(INFO, "Printf-style syntax is also %s", "available");
    exit(0);
    LOGF(INFO, "Printf-style syntax is also %s", "available");    
}
void func(){
    LOG(INFO) << "thread stream" << 123;
}
int main(int argc, char **argv){
    auto worker = g3::LogWorker::createLogWorker();
    auto handle = worker->addDefaultLogger(argv[0], path_to_log_file);
    g3::initializeLogging(worker.get());
    LOG(DEBUG) << "streaming API is as easy as ABC or " << 123;
    LOG(ERROR) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is as easy as ABC or " << 123;
    LOG(INFO) << "streaming API is in debug mode" << 123;
    //LOG(FATAL) << "fatal error" << 123;
    CHECK_STREQ("1", "1");
    CHECK_NOTNULL("fafafa");
    CHECK_STREQ("1", "2");
    CHECK_NOTNULL(nullptr);
    int count = 0 ;
    while(1){
          count++;
          G3LOG_LOG_EVERY_N(ERROR, 10) << "sfsfsfsfs" << count;
          if(count == 30) break;
    }
    //divideByZero();
    thread t1(func);
    thread t2(func);
    t1.join();
    t2.join();
    cout << "frontend log end" << endl;
    CHECK_EQ(1, 0);
    return 0;
}
