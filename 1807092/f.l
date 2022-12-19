%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include "f.tab.h"
%}

variable		[a-zA-Z]*
digit			[0-9]
header			"ADDLIB ".*
comment			[#].*
m_comment 		"##"[^##]*"##"

%%

"start"				{printf("\nstarted main function \n"); return START;}
"{"					{return CBS;}
"}"					{return CBE;}
"plus"				{return PLUS;}
"++"				{return INCREMENT;}
"minus"      	  	{return MINUS;}
"--"				{return DECREMENT;}
"mul"				{return MUL;}
"div"   			{return DIV;}
"^"				{return POW;}
"rem"    			{return MOD;}
"gtoe"				{return GTE;}
"gt"				{return GT;}
"ltoe"				{return LTE;}
"lt"				{return LT;}
"equal"				{return EQL;}
"!equal"			{return NEQL;}
"isprime"			{return ISPRIME;}
"max" 				{return MAX;}
"min" 				{return MIN;}
"even_or_odd"		{return EVEN_OR_ODD;}
"factorial_of"		{return FACTORIAL;}
"//int//"			{return ARRINT;}
"//float//"			{return ARRFLOAT;}
"//char//"			{return ARRCHAR;}
"fun"				{printf("\nFunction Declaration\n"); return FUNCTION;}
"array"				{return ARRAY;}
"display"			{return DISPLAY;} 
"floop"				{return FLOOP; }
"go"				{return GO; }
"if"				{return CASE;}
"default"			{return DEFAULT;}
"is"				{return IS;}
"none"				{return NONE;}
"elis"				{return ELIS;}
"Int"  				{return INT;}
"char" 				{return CHAR;}
"Float"				{return FLOAT;}
"convert_to_binary" {return CONVERT_TO_BINARY;}
"xchange"			{return XCHANGE;}
{header}			{printf("\nHeader found: "); ECHO; printf("\n");}
{comment}			{printf("\nSingle line comment found: "); ECHO;printf("\n");}
{m_comment}			{printf("\nMulti line comment found: "); ECHO;printf("\n");}
[//=,():;^]			{return yytext[0];}
{digit}+			{yylval.val = atoi(yytext); return NUMBER;}
{variable}			{strcpy(yylval.text, yytext); return VAR;}
[ ]*	    		{}
[\n]*				{}
[\t]*				{}
.					{printf("\nUnknown syntax: %s\n", yytext);}
%%