#include "gflags/gflags.h"
#include <iostream>
DEFINE_string(log_dir, "./", "log files path");
int main(int argc, char **argv){
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    std::cout << FLAGS_log_dir << std::endl;
    return 0;
}