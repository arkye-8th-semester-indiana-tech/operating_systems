;This program is going to take in two numbers, then add, subtract, and multiply them

br main

;Storage for all integers that will be used
number1: .BLOCK 2
number2: .BLOCK 2
addition: .BLOCK 2
sub: .BLOCK 2
division: .BLOCK 2

;Integers for the multiplications
multi: .BLOCK 2
comp: .BLOCK 2
times: .BLOCK 2
counter: .BLOCK 2

;Integers for the division
counter2: .BLOCK 2
temp: .BLOCK 2
mysub: .BLOCK 2

;User Prompts
msg: .ascii "\n Multiplying \n \x00"
msg0: .ascii " \x00"
msg1: .ascii "\nPlease enter in a number \x00"
msg2: .ascii "\nPlease enter in a second number \x00"
msg3: .ascii "\nThis is the final result \n \x00"
msg4: .ascii "\n Adder \n \x00"
msg5: .ascii "\n Addition: \x00"
msg6: .ascii "\n Subtraction: \x00"
msg7: .ascii "\n Multiplication: \x00"
myr: .ascii "\n Division \x00"

main: STRO msg1,d
      DECI number1,d
      LDA number1,d
      STRO msg2,d
      DECI number2, d

     ;Addition:
      ADDA number2,d
      STA addition,d ;this add the first two numbers

     ;Subtraction:
      LDA number1,d
      SUBA number2,d
      STA sub,d

     ;Division
      LDA 0,i
      STA counter2,d
      LDA number2,d
      CPA number1,d
      BRLE loopl ;4= num1, 3=num2, 3 is less
      BRGT loopg

loopl: LDA number1,d
       STA temp,d ;4
       LDA number2,d
       STA mysub,d ;3
	BR divi

loopg: LDA number2,d
       STA temp,d
       LDA number1,d
       STA mysub,d
       BR divi

divi: STRO msg0,d
      LDA temp,d
      SUBA mysub,d
      STA temp,d
      LDA counter2,d
      ADDA 1,i
      STA counter2,d
      LDA temp,d
      CPA 1,i
      BRGT divi
      BRLE mi

	;Muliplication:
mi:   LDA number1, d
      CPA number2,d
      BRGT mystg
      BRLT mystl

mystg: LDA number2,d  ;This loop will do the multiplication
       STA comp,d
       LDA number1,d
       STA times,d
       LDA 1,i
       STA counter,d
       STRO msg0,d
	BR loopm

mystl: LDA number1,d
       STA comp,d ;--This is the first number
       LDA number2,d
       STA times,d
       LDA 1,i
       STA counter,d
	BR loopm

loopm: STRO msg0,d
       LDA multi,d ;this loads the second number(3),
       ADDA comp,d
       STA multi,d
       STRO msg0,d
       LDA counter,d
       CPA times,d
       BRLT myadd
       BRGE thee

myadd: STRO msg0,d
       LDA counter,d
       ADDA 1,i
       STA counter,d
       BR loopm

thee: STRO msg3,d
      STRO msg0,d
      STRO msg5,d
      DECO addition,d
      STRO msg0,d
      STRO msg6,d
      DECO sub,d
      STRO msg7,d
      DECO multi,d
      STRO msg0,d
      LDA counter2,d
      STA division,d
      STRO myr,d
      DECO division,d
      STOP
      .END
