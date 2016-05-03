;The ascii converting code  is from: http://www.go4expert.com/forums/displaying-characters-ascii-assembly-t28963/

br main

;Tester Variables
number1: .BLOCK 2
number2: .BLOCK 2
name2: .BLOCK 2
msg0: .ascii " \x00"
out: .BLOCK 2
answer: .BLOCK 2
answer1: .BLOCK 2
out2: .BLOCK 2

;Input Variables for Names:
name1: .BLOCK 2
tnum: .BLOCK 2

;Output
msg: .ascii " \n Please enter in the length of the name: \x00"
msg1: .ascii "\n Please enter in the first letter: \x00"
space: .ascii "\n  \x00"
msg2: .ascii "\n Please enter in a value \x00"
msg3: .ascii "\n Equal: \x00"
msg4: .ascii "\n Less \x00"
msg5: .ascii "\n Greater \x00"
msg6: .ascii "\n Enter y to run program again, n to quit \x00" 
;Actual Code

main: CHARI number1,d 
LDBYTEA number1,d
STA out,d
DECO out,d
STRO space,d
LDA out,d
STBYTEA number2,d
STRO number2,d

      STRO msg2,d
      DECI name1,d
      STRO msg2,d
      DECI name2,d
      BR comp

comp: LDA name1,d
      CPA name2,d
      BRGT gr ;takes the loaded number and compares it
      BRLT ls
      BREQ equ

gr: STRO msg5,d
    LDA name1,d
    STBYTEA number1,d
    CHARO number1,d
    BR thee


ls: STRO msg4,d
    LDA name2,d
    STBYTEA number2,d
    CHARO number2,d
    BR thee

equ: STRO msg3,d
        BR thee

thee: STOP
	.END
      ;STRO msg6,d
      ;CHARI answer,d
      ;LDBYTEA answer1,d
      ;STA out2,d
           
