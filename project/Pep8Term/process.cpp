#include "process.h"

Process::Process()
{
	vKeyboardInput = true;
	vScreenOutput = true;
	vSR_Accumulator.iHigh = 0;
	vSR_Accumulator.iLow = 0;
	vSR_IndexRegister.iHigh = 0;
	vSR_IndexRegister.iLow = 0;
}

Process::~Process(){}

const char* Process::fileName()
{
	return vFileName;
}

void Process::fileName(const char* fileName)
{
	strcpy(vFileName, fileName);
}

bool Process::loading()
{
	return vLoading;
}

void Process::loading(bool loading)
{
	vLoading = loading;
}


bool Process::machineReset()
{
	return vMachineReset;
}

void Process::machineReset(bool machineReset)
{
	vMachineReset = machineReset;
}


bool Process::bufferIsEmpty()
{
	return vBufferIsEmpty;
}

void Process::bufferIsEmpty(bool bufferIsEmpty)
{
	vBufferIsEmpty = bufferIsEmpty;
}

bool Process::keyboardInput()
{
	return vKeyboardInput;
}

void Process::keyboardInput(bool keyboardInput)
{
	vKeyboardInput = keyboardInput;
}

bool Process::screenOutput()
{
	return vScreenOutput;
}

void Process::screenOutput(bool screenOutput)
{
	vScreenOutput = screenOutput;
}


bool Process::statusN()
{
	return vStatusN;
}

void Process::statusN(bool statusN)
{
	vStatusN = statusN;
}


bool Process::statusZ()
{
	return vStatusZ;
}

void Process::statusZ(bool statusZ)
{
	vStatusZ = statusZ;
}


bool Process::statusV()
{
	return vStatusV;
}

void Process::statusV(bool statusV)
{
	vStatusV = statusV;
}


bool Process::statusC()
{
	return vStatusC;
}

void Process::statusC(bool statusC)
{
	vStatusC = statusC;
}

sRegisterType Process::sR_Accumulator()
{
	return vSR_Accumulator;
}
void Process::sR_Accumulator(sRegisterType sR_Accumulator)
{
	vSR_Accumulator = sR_Accumulator;
}

sRegisterType Process::sR_IndexRegister()
{
	return vSR_IndexRegister;
}
void Process::sR_IndexRegister(sRegisterType sR_IndexRegister)
{
	vSR_IndexRegister = sR_IndexRegister;
}

sRegisterType Process::sR_StackPointer()
{
	return vSR_StackPointer;
}
void Process::sR_StackPointer(sRegisterType sR_StackPointer)
{
	vSR_StackPointer = sR_StackPointer;
}

sRegisterType Process::sR_ProgramCounter()
{
	return vSR_ProgramCounter;
}
void Process::sR_ProgramCounter(sRegisterType sR_ProgramCounter)
{
	vSR_ProgramCounter = sR_ProgramCounter;
}

sIRRecType Process::sIR_InstrRegister()
{
	return vSIR_InstrRegister;
}
void Process::sIR_InstrRegister(sIRRecType sIR_InstrRegister)
{
	vSIR_InstrRegister = sIR_InstrRegister;
}
