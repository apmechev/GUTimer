#include <fstream>         /* std::ifstream */
#include <iostream>         /* std::cout */

//Timer includes
//#include <boost/timer.hpp>

#include "include/GUTimer.h"        /*Timers: time_h, rdtsc, chrono_hr, ctime, LOFAR_timer*/


std::string
getFileContent(const std::string& path)
{
    GUTimer t(GUTimer::LOFAR_timer);// GUTimer t(GUTimer::time_h)
    GUTimer t1(GUTimer::rdtsc);// GUTimer t(GUTimer::time_h)
    GUTimer t2(GUTimer::time_h);// GUTimer t(GUTimer::time_h)
    GUTimer t3(GUTimer::chrono_hr);// GUTimer t(GUTimer::time_h)
    GUTimer t4(GUTimer::ctime);// GUTimer t(GUTimer::time_h)
    t.start();
    t.stop();
    t1.start();
    t1.stop();
    t2.start();
    t2.stop();
    t3.start();
    t3.stop();
    t4.start();
    t4.stop();

  std::ifstream file(path);
  std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    //t.stop();
    std::cout<<t.getElapsed()<<" "<<t1.getElapsed()<<" "<<t2.getElapsed()<<" "<<t3.getElapsed()<<" "<<t4.getElapsed()<<"\n";

  return "";
}



int main() {
for(int i=0;i<=100000;i++){
getFileContent("/proc/loadavg");
}
return 0;}
