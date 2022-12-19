%{
	/* C Declarations */
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	int yylex ();
	int yyerror();

	#define maxn 1000007
	char valname[1009][1009];
	int data[1009], switch_data[maxn+1];
	int idx = 1;
	int isDeclared(char *now) {
		for(int i=1; i<idx; i++) {
			if(strcmp(valname[i], now) == 0) {
				return i; 
			}
		}
		return 0;
	}
	int addNewVal(char *now){
		if(isDeclared(now)) return 0;
		strcpy(valname[idx], now);
		data[idx]=0;
		idx++;
	}
	int getVal(char *now) {
		return data[isDeclared(now)];
	}
	int setVal(char *now, int v) {
		int id = isDeclared(now);
		data[id] = v;
	}
%}

/* Bison Declaration */

%union{
	char text[1009];
	int val;
}

%token<val>NUMBER
%token<text>VAR
%token START IS PLUS MINUS MUL DIV MOD INCREMENT XCHANGE CONVERT_TO_BINARY DECREMENT POW GT LT LTE GTE EQL NEQL NONE ELIS INT FLOAT CHAR CBS CBE FLOOP WHILE EVEN_OR_ODD DISPLAY FACTORIAL IF DEFAULT GO CASE MIN MAX ISPRIME FUNCTION ARRAY ARRINT ARRFLOAT ARRCHAR
%type<val>statement
%type<val>function_statement
%type<val>expression
%nonassoc IS
%nonassoc ELIS
%nonassoc NONE
%left PLUS MINUS
%left POW MUL DIV

/* Grammar Rules */

%%

program : START '(' ')'  CBS line CBE {printf("\nCompilation Successful\n");}
		;

line: 
	| line statement
	;

statement: ';'

	| declaration ';'	{ }

	| expression ';'	{$$ = $1;}
	
	| VAR '=' expression ';' { 
		printf("\nValue of the variable: %d\n",$3);
		setVal($1, $3); 								//data[$1]=$3;
		$$ = $3;
	} 

	| IS '(' expression ')' CBS statement CBE {
		if($3) {
			printf("\nvalue of expression in IS: %d\n",$6);
		}
		else{
			printf("\ncondition value zero in IS block\n");
		}
	}

	| IS '(' expression ')' CBS statement CBE NONE CBS statement CBE  {
		if($3){
			printf("value of expression in IS: %d\n",$6);
		}
		else{
			printf("value of expression in NONE: %d\n",$10);
		}
	}

	| IS '(' expression ')' CBS statement CBE ELIS '(' expression ')' CBS statement CBE NONE CBS statement CBE {
		if($3) {
			printf("\nValue of expression in IS: %d\n", $6);
		}
		else if($10) {
			printf("\nValue of expression in ELIS: %d\n", $13);
		}
		else{
			printf("\nValue of expression in NONE: %d\n", $17);
		}
	}

	| GO '(' expression ')' CBS casenumber CBE {
		printf("\nSIMILIAR of Switch Case\n");
		if(switch_data[$3]) printf("\nChoosen case number is : %d and the value is: %d\n", $3, switch_data[$3]);
		else printf("\nChoosen case number is: Default and the value is: %d\n", $3, switch_data[$3]);
		memset(switch_data, 0, sizeof(switch_data));
	}

	
	| FLOOP '(' expression LT expression ')' CBS statement CBE {
	    for(int i=$3 ; i<$5 ; i++) {printf("\nCount loop: %d\n", i);}	
	}

	| FLOOP '(' expression LTE expression ')' CBS statement CBE {
	    for(int i=$3 ; i<=$5 ; i++) {printf("\nCount loop: %d\n", i);}	
	}

	| FLOOP '(' expression GT expression ')' CBS statement CBE {
	    for(int i=$5 ; i<$3 ; i++) {printf("\nCount loop: %d\n", i);}		
	}

	| FLOOP '(' expression GTE expression ')' CBS statement CBE {
	    for(int i=$5 ; i<=$3 ; i++) {printf("\nCount loop: %d\n", i);}		
	}

	| FLOOP '(' expression ',' expression ',' expression ')' CBS statement CBE {
	    if($3 <= $5) {
	    	for(int i=$3 ; i<$5 ; i+=$7) {printf("\nCount loop: %d\n", i);}	
	    }
	    else {
	    	for(int i=$3 ; i>$5 ; i-=$7) {printf("\nCount loop: %d\n", i);}	
	    }
	}
	| FUNCTION VAR '(' function_line ')' CBS function_line CBE {
		printf("\nFunction Declaration\n");
	}

	| DISPLAY '(' expression ')' ';' {
		printf("\nPrint Function: %d\n",$3);
	}

	| ARRAY ARRINT VAR '(' NUMBER ')' ';' {
		printf("\nInterger Array Declared\n");
		printf("\nSize of the array is: %d\n", $5);
	}

	| ARRAY ARRFLOAT VAR '(' NUMBER ')' ';' {
		printf("\nFloating Array Declared\n");
		printf("\nSize of the array is: %d\n", $5);
	}

	| ARRAY ARRCHAR VAR '(' NUMBER ')' ';' {
		printf("\nCharacter Array Declared\n");
		printf("\nSize of the array is: %d\n", $5);
	}

	| FACTORIAL '(' NUMBER ')' ';' {
		int fact = 1;
		for(int i=1; i<=$3; i++) {
			fact *= i;
		}
		printf("\nFactorial of %d is: %d\n", $3, fact);
	}

	| EVEN_OR_ODD '(' NUMBER ')' ';' {
		if($3 % 2 == 0) {
			printf("Number : %d is Even\n",$3);
		}
		else {
			printf("Number :%d is Odd\n",$3);
		}
	}

	| MIN '(' NUMBER ',' NUMBER ')' ';' {
		int n1 = $3;
		int n2 = $5;
		printf("\nMin of (%d, %d) is: ", n1, n2);
		if(n1 < n2) printf("%d\n", n1);
		else printf("%d\n", n2);
	}

	| MAX '(' NUMBER ',' NUMBER ')' ';' {
		int n1 = $3;
		int n2 = $5;
		printf("\nMax of (%d, %d) is: ", n1, n2);
		if(n1 > n2) printf("%d\n", n1);
		else printf("%d\n", n2);
	}
	
	| ISPRIME '(' NUMBER ')' ';' {
		int n1 = $3, fl = 1;
		for(int i=2; i<=n1/2; i++) {
			if(n1 % i == 0) {
				fl = 0;
				break;
			}
		}
		if(fl) printf("\n%d is a Prime number.\n", n1);
		else printf("\n%d is Not a prime number\n", n1);
	}

	| XCHANGE '(' expression ',' expression ')' {
		int n1 = $3, n2 = $5, temp;
		temp = n1;
		n1=n2;
		n2=temp;
		printf("\nFirst variabel = %d\n",n1);
		printf("\nSecond variabel = %d\n",n2);

	}

	| CONVERT_TO_BINARY '(' expression ')' {
		int n = $3, c, k;

		for (c = 31; c >= 0; c--)
  		{
   	 		k = n >> c;

    		if (k & 1)
      		printf("1");
    		else
      		printf("0");
  		}

  		printf("\n");
	}
	;


function_line: 
	| function_line function_statement
	;

function_statement: ';'

	| declaration ';'	{ }

	| expression ';'	{$$ = $1;}
	
	| VAR '=' expression ';' { 
		printf("\nValue of the variable: %d\n",$3);
		setVal($1, $3); //data[$1]=$3;
		$$ = $3;
	} 

	| IS '(' expression ')' CBS function_statement CBE {
		if($3) {
			printf("\nvalue of expression in IS: %d\n",$6);
		}
		else{
			printf("\ncondition value zero in IS block\n");
		}
	}

	| IS '(' expression ')' CBS function_statement CBE NONE CBS function_statement CBE  {
		if($3){
			printf("value of expression in IS: %d\n",$6);
		}
		else{
			printf("value of expression in NONE: %d\n",$10);
		}
	}

	| IS '(' expression ')' CBS function_statement CBE ELIS '(' expression ')' CBS function_statement CBE NONE CBS function_statement CBE {
		if($3) {
			printf("\nValue of expression in IS: %d\n", $6);
		}
		else if($10) {
			printf("\nValue of expression in ELIS: %d\n", $13);
		}
		else{
			printf("\nValue of expression in NONE: %d\n", $17);
		}
	}

	| GO '(' expression ')' CBS casenumber CBE {
		printf("\nSIMILIAR of Switch Case\n");
		if(switch_data[$3]) printf("\nChoosen case number is : %d and the value is: %d\n", $3, switch_data[$3]);
		else printf("\nChoosen case number is: Default and the value is: %d\n", $3, switch_data[$3]);
		memset(switch_data, 0, sizeof(switch_data));
	}

	| FLOOP '(' expression LT expression ')' CBS function_statement CBE {
	    for(int i=$3 ; i<$5 ; i++) {printf("\nCount loop: %d\n", i);}	
	}

	| FLOOP '(' expression LTE expression ')' CBS function_statement CBE {
	    for(int i=$3 ; i<=$5 ; i++) {printf("\nCount loop: %d\n", i);}
	}

	| FLOOP '(' expression GT expression ')' CBS function_statement CBE {
	    for(int i=$5 ; i<$3 ; i++) {printf("\nCount loop: %d\n", i);}	
	}

	| FLOOP '(' expression GTE expression ')' CBS function_statement CBE {
	    for(int i=$5 ; i<=$3 ; i++) {printf("\nCount loop: %d\n", i);}
	}

	| FLOOP '(' expression ',' expression ',' expression ')' CBS function_statement CBE {
	    if($3 <= $5) {
	    	for(int i=$3 ; i<$5 ; i+=$7) {printf("\nCount loop: %d\n", i);}	
	    }
	    else {
	    	for(int i=$3 ; i>$5 ; i-=$7) {printf("\nCount loop: %d\n", i);}	
	    }
	}
	| DISPLAY '(' expression ')' ';' {
		printf("\nPrint Function: %d\n",$3);
	}

	| ARRAY ARRINT VAR '(' NUMBER ')' ';' {
		printf("\nInterger Array Declared\n");
		printf("\nSize of the array is: %d\n", $5);
	}

	| ARRAY ARRFLOAT VAR '(' NUMBER ')' ';' {
		printf("\nFloating Array Declared\n");
		printf("\nSize of the array is: %d\n", $5);
	}

	| ARRAY ARRCHAR VAR '(' NUMBER ')' ';' {
		printf("\nCharacter Array Declared\n");
		printf("\nSize of the array is: %d\n", $5);
	}

	| FACTORIAL '(' NUMBER ')' ';' {
		int fact = 1;
		for(int i=1; i<=$3; i++) {
			fact *= i;
		}
		printf("\nFactorial of %d is: %d\n", $3, fact);
	}

	| EVEN_OR_ODD '(' NUMBER ')' ';' {
		if($3 % 2 == 0) {
			printf("Number : %d is Even\n",$3);
		}
		else {
			printf("Number :%d is Odd\n",$3);
		}
	}

	| MIN '(' NUMBER ',' NUMBER ')' ';' {
		int n1 = $3;
		int n2 = $5;
		printf("\nMin of (%d, %d) is: ", n1, n2);
		if(n1 < n2) printf("%d\n", n1);
		else printf("%d\n", n2);
	}

	| MAX '(' NUMBER ',' NUMBER ')' ';' {
		int n1 = $3;
		int n2 = $5;
		printf("\nMax of (%d, %d) is: ", n1, n2);
		if(n1 > n2) printf("%d\n", n1);
		else printf("%d\n", n2);
	}
	
	| ISPRIME '(' NUMBER ')' ';' {
		int n1 = $3, fl = 1;
		for(int i=2; i<=n1/2; i++) {
			if(n1 % i == 0) {
				fl = 0;
				break;
			}
		}
		if(fl) printf("\n%d is a Prime number.\n", n1);
		else printf("\n%d is Not a prime number\n", n1);
	}
	| XCHANGE '(' expression ',' expression ')' {
		int n1 = $3, n2 = $5, temp;
		temp = n1;
		n1=n2;
		n2=temp;
		printf("\nFirst variabel = %d\n",n1);
		printf("\nSecond variabel = %d\n",n2);

	}

	| CONVERT_TO_BINARY '(' expression ')' {
		int n = $3, c, k;

		for (c = 31; c >= 0; c--)
  		{
   	 		k = n >> c;

    		if (k & 1)
      		printf("1");
    		else
      		printf("0");
  		}

  		printf("\n");
	}

	;


declaration: datatype ID   {printf("\nVariable Declared\n");}
     ;


datatype : INT 	{printf("\nInterger Declaration\n");}
     | FLOAT  		{printf("\nFloat Declaration\n");}
     | CHAR   		{printf("\nCharacter Declaration\n");}
     ;



ID : ID ',' VAR {
	int res = addNewVal($3);
		if(res == 0){
			printf("\nVariable already declared\n");
			exit(-1);
		}
	}

     | VAR {
		int res = addNewVal($1);
		if(res == 0){
			printf("\nVariable already declared\n");
			exit(-1);
		}
	}  
     ;

casenumber: caserule
 	| caserule defaultnum
 	;

caserule:
 	| caserule casenum
 	;

casenum: CASE NUMBER ':' expression ';' {
		printf("\nExpression value is %d of Case %d\n", $4, $2);
		switch_data[$2] = $4;
	}
 	;

defaultnum: DEFAULT ':' expression ';' {
		printf("\nExpression value is %d of Default case\n", $3);
		switch_data[maxn] = $3;
	}
 	;

expression: NUMBER 				{$$ = $1;}

	| VAR 					{$$ = getVal($1);}
	
	| expression PLUS expression	{$$ = $1 + $3;}

	| expression MINUS expression	{$$ = $1 - $3;}

	| expression MUL expression	{$$ = $1 * $3;}

	| expression LT expression	{$$ = $1 < $3;}
	
	| expression GT expression	{$$ = $1 > $3;}

	| expression LTE expression	{$$ = $1 <= $3;}
	
	| expression GTE expression	{$$ = $1 >= $3;}

	| expression EQL expression	{$$ = $1 == $3;}

	| expression NEQL expression	{$$ = $1 != $3;}

	| expression INCREMENT		{$$ = $1 + 1;}

	| expression DECREMENT		{$$ = $1 - 1;}

	| '(' expression ')'		{$$ = $2;}

	| expression DIV expression {
		if($3) {$$ = $1 / $3;}
		else {$$ = 0; printf("\nDivision by Zero\n");} 	
	}

	| expression MOD expression { 
		if($3) {$$ = $1 % $3;}
		else {$$ = 0; printf("\nMod by Zero\n");} 	
	}

	| expression POW expression { 
		if($3) {$$ = pow($1,$3);}	
	}

	;


%%



/* Additional C Codes */
int yyerror(char *s){
	printf( "%s\n", s);
}

int yywrap()
{
	return 1;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt" ,"w", stdout);

	yyparse();

	return 0;
}