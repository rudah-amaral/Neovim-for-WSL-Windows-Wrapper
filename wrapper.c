#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  char *wtProfile = "Ubuntu 22.04.5 LTS";
  char *wslDistribution = "Ubuntu-22.04";
  char *linuxCommand = "nvim";

  char fullCmd[512];
  sprintf(fullCmd, "wt -p \"%s\" ", wtProfile);
  strcat(fullCmd, "wsl -d ");
  strcat(fullCmd, wslDistribution);
  strcat(fullCmd, " ");
  strcat(fullCmd, linuxCommand);
  strcat(fullCmd, " \"$(wslpath \\\"");
  strcat(fullCmd, argv[1]);
  strcat(fullCmd, "\\\")\"");

  system(fullCmd);
  return 0;
}
