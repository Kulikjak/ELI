#ifndef __ELI__
#define __ELI__

#include <stdbool.h>

typedef enum {
  INC, DEC, PRINTC, SCANC, FWD, BWD, BRZ, BNZ, EXIT
} Instruction;

extern const char *InstructionTable[9];

void error(char * a);

extern bool r_memory_dump;
extern bool r_instr_dump;
extern bool r_lang_dump;

#endif // __ELI__ //
