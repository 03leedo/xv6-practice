#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
  if(argc == 1){
    ps(0);
  }
  else if(argc == 2){
    int pid = atoi(argv[1]);
    ps(pid);
  }
  else{
    printf(2, "Usage: minitop [pid]\n");
  }
  exit();
}