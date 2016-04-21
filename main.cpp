#include <fstream>         /* std::ifstream */
#include <iostream>         /* std::cout */

//Timer includes
//#include <boost/timer.hpp>

#include "include/GUTimer.h"        /*Timers: time_h, rdtsc, chrono_hr, ctime, LOFAR_timer*/


std::string
getFileContent(const std::string& path)
{
    GUTimer t(GUTimer::LOFAR_timer);// GUTimer t(GUTimer::time_h)
    t.start();

  std::ifstream file(path);
  std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    t.stop();std::cout<<t.getElapsed()<<"\n";

  return "";
}



int main() {
for(int i=0;i<=100;i++){
getFileContent("/proc/loadavg");
}
return 0;}
