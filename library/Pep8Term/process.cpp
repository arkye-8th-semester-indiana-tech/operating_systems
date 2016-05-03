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

sRegisterType Process::traceAddr()
{
	return vTraceAddr;
}
void Process::traceAddr(sRegisterType traceAddr)
{
	vTraceAddr = traceAddr;
}

sIRRecType Process::sIR_InstrRegister()
{
	return vSIR_InstrRegister;
}
void Process::sIR_InstrRegister(sIRRecType sIR_InstrRegister)
{
	vSIR_InstrRegister = sIR_InstrRegister;
}

int Process::iLineCount()
{
	return vILineCount;
}
void Process::iLineCount(int iLineCount)
{
	vILineCount = iLineCount;
}
