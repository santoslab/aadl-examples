#include <all.h>
#include <signal.h>

void atExit(int signum) {
  #ifdef SIREUM_LOC
  StackFrame sf = NULL;
  #endif
  hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_atExit(SF_LAST);
}

int main(int argc, char *argv[]) {
  struct sigaction action;
  action.sa_handler = atExit;
  sigemptyset(&action.sa_mask);
  action.sa_flags = 0;
  sigaction(SIGTERM, &action, NULL);

  DeclNewStackFrame(NULL, "SW_Impl_Instance_FC_UART_UARTDriver_App.scala", "hamr.SW_Impl_Instance_FC_UART_UARTDriver_App", "<App>", 0);

  DeclNewIS_948B60(t_args);

  int size = argc - 1;
  if (size > MaxIS_948B60) {
    sfAbort("Argument list too long.");
  }

  for (int i = 0; i < size; i++) {
    char *arg = argv[i + 1];
    size_t argSize = strlen(arg);
    if (argSize > MaxString) {
      sfAbort("Argument too long.");
    }
    IS_948B60_at(&t_args, i)->type = TString;
    IS_948B60_at(&t_args, i)->size = (Z) argSize;
    memcpy(IS_948B60_at(&t_args, i)->value, arg, argSize + 1);
  }

  t_args.size = (int8_t) size;

  return (int) hamr_SW_Impl_Instance_FC_UART_UARTDriver_App_main(SF &t_args);
}