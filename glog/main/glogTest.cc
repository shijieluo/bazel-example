#include <iostream>
#include "glog/logging.h"

int main(int argc, char **argv) {
    google::InitGoogleLogging(argv[0]);
    LOG(INFO) << "google log test...";
    CHECK_EQ(1, 0);
}