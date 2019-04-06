#include "float.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <ctype.h>
#include "math_lib.h"
#include "cmath"
using namespace std;

int CharisOperand(const char *expression, int position){

    if(expression[position]=='*' ||expression[position]=='/' ||expression[position]=='%' ||expression[position]=='+' ||
            expression[position]=='-'){
        return 0;
    }
    return -1;
}
int CharAfterlBracket(const char *expression, int position){
    //When we have operand, we accept digit, -,s for sin, strq and c for cos
    if(expression[position]=='s' || expression[position]=='c' || expression[position]=='-'){
        if(expression[position+1]=='t'){
         return 2;
        }
         return 1;
     }
    if(isdigit(expression[position])  || expression[position]=='('){
        return 0;
    }
    return -1;
 }


int CharAfterOperand(const char *expression, int position){
   //return value 2 for s --strq;
   //return value 1 for s --sin, cos;
   //return value 0 for digit and '('
   //return -1 when fault appears
   if(expression[position]=='s' || expression[position]=='c'){
       if(expression[position+1]=='t'){
        return 2;
       }
        return 1;
    }
   if(isdigit(expression[position])  || expression[position]=='('){
       return 0;
   }
   return -1;
}
int BracketValidation(const char *expression){
  int Bracket=0;
  for (int  i = 0;  i < (signed) strlen(expression);  i++) {
    if (expression[i] == '(') {
      Bracket++;
    }

    if (expression[i] == ')') {
      Bracket--;
    }

    if (Bracket<0) {
      return -1;
    }

  }
  if(Bracket>1){
    return -1;
  }
  return 0;
}

int isValidInput(const char *expression)
{
  //Firstly, check bracket, just if left counter justifies with right counter
  if(BracketValidation(expression) == -1){
    return -1;
  }
  int number=0;
  int dot=0;
  int op_minus_start=0;
  for (int  i = 0;  i < (signed) strlen(expression);  i++) {

    //For the first char in expression, we accept chars: '-'-for negative number, 's'-for sin;sqrt,
    //'c'-for cos,'(', or any number

    if(i == 0 ){
        switch (expression[i]) {
          case '(':
            continue;
          case 'c':
            i += 2;
            continue;
          case '-':
             op_minus_start=1;
            continue;
          case 's':
            if(expression[i+1] == 'i'){
              i += 2;
              continue;
            }
            else{
              i += 3;
              continue;
            }
          default:
            if(isdigit(expression[i])){
                number++;
                continue;
            }
         // throw std::runtime_error("error");
              return -1;
        }

    } // End of condition for first char

    //After "minus at the start", we check out what comes and continue in the loop
    if(op_minus_start==1){
        op_minus_start = 0;
        if(CharAfterOperand(expression,i)==-1){
            // throw std::runtime_error("error");
            return -1;
        }
        //char is digit
        if(CharAfterOperand(expression,i)==0){
           number++;
           continue;
        }
        //char is sin,cos
        if(CharAfterOperand(expression,i)==1){
            i+=2;
            continue;
        }
        //char is strq
        if(CharAfterOperand(expression,i)==2){
            i+=3;
            continue;
        }
    }// End of condition when minus is first


    //When it is last character
    if(i == (signed) (strlen(expression)-1)){
        if(isdigit(expression[i]) || expression[i] == ')' || expression[i]=='!'){
            return 0;
        }
        // throw std::runtime_error("error");
        return -1;
    }
    switch (expression[i]) {
    case '*':
    case '/':
    case '+':
    case '-':
    case '%':
    case '^':
    {
        if(number < 0 || CharAfterOperand(expression,i+1)==-1){
            // throw std::runtime_error("error");
            return -1;
        }
        number--;
        dot=0;
        continue;
    }
    case '(':
      if(CharAfterlBracket(expression,i+1)==-1 || CharisOperand(expression,i-1)==-1){
          // throw std::runtime_error("error");
          return -1;
      }
      continue;
    case 'c':
        if( CharisOperand(expression,i-1)==-1){
            return -1;
        }
      i += 2;
      dot=0;
      continue;
    case 's':
        if( CharisOperand(expression,i-1)==-1){
            return -1;
        }
      dot=0;
      if(expression[i+1] == 'i'){
          i += 2;
          continue;
       }
       else{
          i += 3;
          continue;
        }
    case '!':
        if(number < 0 ){
            // throw std::runtime_error("error");
            return -1;
        }
        dot=0;
        number--;
        continue;
     case '.':
        if(number<0 || !isdigit(expression[i+1]) || dot == 1){
            // throw std::runtime_error("error");
            return -1;
        }
        dot=1;
        continue;
     case ')':
        if(isdigit(expression[i-1]) || expression[i-1] == '!' ||CharisOperand(expression,i+1)==0  ){
            continue;
        }
        else{
            // throw std::runtime_error("error");
            return -1;
        }
     default:
        if(isdigit(expression[i])){
            number=1;
            continue;
        }
     // throw std::runtime_error("error");
          return -1;
    } //end of switch statement

  }//end of for loop

  return 0;

}

 double result(const char *expression)
{
     double result=MAXFLOAT;
     string parseResult=(string) expression;

     int numofLbracket=0;
     int numofSin=0;
     int numofCos=0;
     int numofStrq=0;
     int numofFact=0; //also for pow
     int numofMultPrecedence=0;
     int numofOperands=0;
     double num1=0;
     double num2=0;
     int neg=1;
     int decimalNumber=0;
     for(unsigned int i = 0; i < strlen(expression); i++){
           if(expression[i]=='(')
           {
               numofLbracket++;
           }
           if(expression[i]=='^' || expression[i]=='!'){
               numofFact++;
           }
           if(expression[i]=='*' || expression[i]=='/' || expression[i]=='%' ){
               numofMultPrecedence++;
           }
           if(expression[i]=='+' || expression[i]=='-'){
               numofOperands++;
           }

     } // End of for loop to count brackets
     if(numofLbracket==0){
         if(numofFact>0){
             numofFact--;
              for(unsigned int i = 0; i < parseResult.length(); i++){
                  if(parseResult[i]=='^' || parseResult[i]=='!'){
                            int j=i-1;
                            for(; j>=0;j--){
                                if(isdigit(parseResult[j])){
                                    continue;
                                }
                                else if(parseResult[j]='.'){
                                    decimalNumber=1;
                                    continue;
                                }
                                else if(parseResult[j] = '-' && j==0){
                                    neg=-1;
                                    continue;
                                }
                                else{
                                    break;
                                }
                            }
                         if(j< 0){j=0;}
                         if(decimalNumber==1){
                               string substr=parseResult.substr(j,i);
                               num1=std::stod(substr);
                               num1 = neg*num1;
                         }
                         else{
                             string substr=parseResult.substr(j,i);
                             num1=std::stoi(substr);
                             num1 = neg*num1;
                         }
                         if(parseResult[i] == '!'){
                             if(fmod(num1,1.0) != 0){
                                 return MAXFLOAT;
                             }
                             num1=factorial(num1);
                             string substr=std::to_string(num1);
                             parseResult.replace(j, i ,substr);
                             i = j + substr.length();
                         }
                         else{
                             decimalNumber=0;
                             int k = i+1;
                             for(; k<parseResult.length();k++){
                                 if(isdigit(parseResult[k])){
                                     continue;
                                 }
                                 else if(parseResult[k]='.'){
                                     decimalNumber=1;
                                     continue;
                                 }
                                 else if(k == parseResult.length()-1){
                                     break;
                                 }
                                 else{
                                     break;
                                 }
                             }
                             if(decimalNumber==1){
                                   string substr=parseResult.substr(i+1,k);
                                   num2=std::stod(substr);
                             }
                             else{
                                 string substr=parseResult.substr(i+1,k);
                                 num2=std::stoi(substr);
                             }
                            num1= powering(num1,num2);
                            string substr=std::to_string(num1);
                            parseResult.replace(j, k,substr);
                            i=j+substr.length();
                         } // end of else, that matches '^'
                  }//end of if statement, that matches  '!' or '^' in for loop

              } // end of foor loop, that search for '!' or '^'
         }//end of if, that matches '!' or '^'
         if(numofMultPrecedence > 0){
             numofMultPrecedence--;
             for(int i=0;i<parseResult.length();i++){
                 if(parseResult[i]=='*' || parseResult[i]=='/' || parseResult[i]=='%' ){
                     int j=i-1;
                     for(; j>=0;j--){
                         if(isdigit(parseResult[j])){
                             continue;
                         }
                         else if(parseResult[j]='.'){
                             decimalNumber=1;
                             continue;
                         }
                         else if(parseResult[j] = '-' && j==0){
                             neg=-1;
                             continue;
                         }
                         else{
                             break;
                         }
                     }
                  if(j < 0){j=0;}
                  if(decimalNumber==1){
                        string substr=parseResult.substr(j,i);
                        num1=std::stod(substr);
                        num1 = neg*num1;

                  }
                  else{
                      string substr=parseResult.substr(j,i);
                      num1=std::stoi(substr);
                      num1 = neg*num1;
                  }
                  decimalNumber=0;
                  int k = i+1;
                  for(; k<parseResult.length();k++){
                      if(isdigit(parseResult[k])){
                          continue;
                      }
                      else if(parseResult[k]=='.'){
                          decimalNumber=1;
                          continue;
                      }
                      else if(k == parseResult.length()-1){
                          break;
                      }
                      else{
                          break;
                      }
                  }
                  if(decimalNumber==1){
                        string substr=parseResult.substr(i+1,k-1);
                        num2=std::stod(substr);
                  }
                  else{
                      string substr=parseResult.substr(i+1,k-1);
                      num2=std::stoi(substr);
                  }
                  if(parseResult[i]=='*'){
                      num1=multiplication(num1,num2);
                      string substr=std::to_string(num1);
                      parseResult.replace(j, k,substr);
                      i=j+substr.length() -1;
                      continue;
                  }
                  if(parseResult[i]=='/'){
                      if(num2==0){
                          return MAXFLOAT;
                      }
                      num1=division(num1,num2);
                      string substr=std::to_string(num1);
                      parseResult.replace(j, k,substr);
                      i=j+substr.length() - 1;
                      continue;
                  }
                  if(parseResult[i]=='%'){
                      if(num2==0){
                          return MAXFLOAT;
                      }
                      num1=mod(num1,num2);
                      string substr=std::to_string(num1);
                      parseResult.replace(j, k,substr);
                      i=j+substr.length() - 1;
                      continue;
                  }
                 }//end of if loop when we have found position of *,/,%
             }//end of for loop that searches position of *,/,%
         }//end of if that matches *,/,%
         if(numofOperands>0){
             numofOperands--;
             for(int i=0;i<parseResult.length();i++){
                 if(parseResult[i]=='+' || parseResult[i]=='-' ){
                     int j=i-1;
                     for(; j>=0;j--){
                         if(isdigit(parseResult[j])){
                             continue;
                         }
                         else if(parseResult[j]='.'){
                             decimalNumber=1;
                             continue;
                         }
                         else if(parseResult[j] = '-' && j==0){
                             continue;
                         }
                         else{
                             break;
                         }
                     }
                  if(j < 0){j=0;}
                  if(decimalNumber==1){
                        string substr=parseResult.substr(j,i);
                        num1=std::stod(substr);


                  }
                  else{
                      string substr=parseResult.substr(j,i);
                      num1=std::stoi(substr);

                  }
                  decimalNumber=0;
                  int k = i+1;
                  for(; k<parseResult.length();k++){
                      if(isdigit(parseResult[k])){
                          continue;
                      }
                      else if(parseResult[k]=='.'){
                          decimalNumber=1;
                          continue;
                      }
                      else if(k == parseResult.length()-1){
                          break;
                      }
                      else{
                          break;
                      }
                  }
                  if(decimalNumber==1){
                        string substr=parseResult.substr(i+1,k-1);
                        num2=std::stod(substr);
                  }
                  else{
                      string substr=parseResult.substr(i+1,k-1);
                      num2=std::stoi(substr);
                  }
                  if(parseResult[i]=='+'){
                      num1=addition(num1,num2);
                      string substr=std::to_string(num1);
                      parseResult.replace(j, k,substr);
                      i=j+substr.length() -1;
                      continue;
                  }
                  if(parseResult[i]=='-'){
                      num1=difference(num1,num2);
                      string substr=std::to_string(num1);
                      parseResult.replace(j, k,substr);
                      i=j+substr.length() - 1;
                      continue;
                  }

                 }//end of if loop when we have found position of *,/,%
             }//end of for loop that searches position of *,/,%
         }//end of if that matches *,/,%


         }

     else{


     }
     return std::stod(parseResult);
}

double addition(double addend1, double addend2)
{
    return addend1+addend2;
}

double difference(double minuent, double subtrahent)
{
    return minuent-subtrahent;
}

double multiplication(double multiply1, double multiply2)
{
    return multiply1*multiply2;
}

double division(double divident, double divisor)
{
    return divident/divisor;
}
double mod(double divident, double divisor)
{
    return fmod(divident,divisor);
}
double factorial(double factor)
{
        if (factor == 1)
            return 1;
        else
            return factor * factorial(factor - 1);

}

double powering(double base, double exponent)
{
    return pow(base,exponent);
}

double m_sqrt(double base)
{

}

double sine(double base)
{
}
