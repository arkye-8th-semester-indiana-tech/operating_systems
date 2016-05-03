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

	bool loading();
	void loading(bool loading);

	bool machineReset();
	void machineReset(bool machineReset);

	bool bufferIsEmpty();
	void bufferIsEmpty(bool bufferIsEmpty);

	bool keyboardInput();
	void keyboardInput(bool keyboardInput);

	bool screenOutput();
	void screenOutput(bool screenOutput);

	bool statusN();
	void statusN(bool statusN);

	bool statusZ();
	void statusZ(bool statusZ);

	bool statusV();
	void statusV(bool statusV);

	bool statusC();
	void statusC(bool statusC);

	sRegisterType sR_Accumulator();
	void sR_Accumulator(sRegisterType sR_Accumulator);

	sRegisterType sR_IndexRegister();
	void sR_IndexRegister(sRegisterType sR_IndexRegister);

	sRegisterType sR_StackPointer();
	void sR_StackPointer(sRegisterType sR_StackPointer);

	sRegisterType sR_ProgramCounter();
	void sR_ProgramCounter(sRegisterType sR_ProgramCounter);

	sIRRecType sIR_InstrRegister();
	void sIR_InstrRegister(sIRRecType sIR_InstrRegister);

private:
	char vFileName[64];

	bool vLoading;
	bool vMachineReset;

	bool vBufferIsEmpty;

	bool vKeyboardInput;
	bool vScreenOutput;

	bool vStatusN;
	bool vStatusZ;
	bool vStatusV;
	bool vStatusC;

	sRegisterType vSR_Accumulator;
	sRegisterType vSR_IndexRegister;
	sRegisterType vSR_StackPointer;
	sRegisterType vSR_ProgramCounter;

	sIRRecType vSIR_InstrRegister;
};

#endif // PROCESS_H
