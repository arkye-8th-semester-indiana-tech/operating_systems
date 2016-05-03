#ifndef REGISTERS_H
#define REGISTERS_H

//**** Global Records
struct sRegisterType                  // internal CPU registers
{
      int iHigh;                      // most significant byte
      int iLow;                       // least significant byte
};
struct sIRRecType
{
      int iInstr_Spec;                //  8 bits
      sRegisterType sR_OprndSpec;     // 16 bits
};

#endif // REGISTERS_H
