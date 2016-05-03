#ifndef PROCESS_H
#define PROCESS_H

#include "registers.h"
#include <string>
#include <cstring> // Necessary if used on Linux

class Process
{
public:
	Process();
	~Process();

	const char* fileName();
	void fileName(const char* fileName);

	bool keyboardInput();
	void keyboardInput(bool keyboardInput);

	bool screenOutput();
	void screenOutput(bool screenOutput);

	sRegisterType sR_Accumulator();
	void sR_Accumulator(sRegisterType sR_Accumulator);

	sRegisterType sR_IndexRegister();
	void sR_IndexRegister(sRegisterType sR_IndexRegister);

	sRegisterType sR_StackPointer();
	void sR_StackPointer(sRegisterType sR_StackPointer);

	sRegisterType sR_ProgramCounter();
	void sR_ProgramCounter(sRegisterType sR_ProgramCounter);

	sRegisterType traceAddr();
	void traceAddr(sRegisterType traceAddr);

	sIRRecType sIR_InstrRegister();
	void sIR_InstrRegister(sIRRecType sIR_InstrRegister);

	int iLineCount();
	void iLineCount(int iLineCount);

private:
	char vFileName[64];

	bool vKeyboardInput;
	bool vScreenOutput;

	sRegisterType vSR_Accumulator;
	sRegisterType vSR_IndexRegister;
	sRegisterType vSR_StackPointer;
	sRegisterType vSR_ProgramCounter;

	sIRRecType vSIR_InstrRegister;

	sRegisterType vTraceAddr;
	int vILineCount;
};

#endif // PROCESS_H
