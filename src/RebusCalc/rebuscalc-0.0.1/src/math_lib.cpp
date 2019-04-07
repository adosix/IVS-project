#include "float.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <ctype.h>
#include "math_lib.h"
#include "cmath"
using namespace std;
void BracketEvalvuation(const char* expression, int start, int end, const char* value){
    int count=0;
     int min_atStart=0;
     string parseExpression = (string) expression;
     int numofFact=0;
     int numofMultPrecedence=0;
     int numofOperands=0;
     int ops = 0;
     double num1=0;
     double num2=0;
     int neg=1;
     int decimalNumber=0;
     for(int i = start;i< end; i++){
         if(expression[i]=='(' || expression[i]==')')
         {
             continue;
         }
         if(expression[i]=='^' || expression[i]=='!'){
             numofFact++;
         }
         if(expression[i]=='*' || expression[i]=='/' || expression[i]=='%' ){
            numofMultPrecedence++;
         }
         if(expression[i]=='+' || expression[i]=='-'){
            numofOperands++;
            if(i==0) {min_atStart=1;
            }
          }
        } // End of for loop to count operands
     while(numofFact>0){
         for(int i = start; i<strlen(expression); i++){
             if(parseExpression[i]=='^' || parseExpression[i]=='!'){
                   numofFact--;
                       int j=i-1;
                       for(; j>=0;j--){
                           if(isdigit(parseExpression[j])){
                               continue;
                           }
                           else if(parseExpression[j]=='.'){
                               decimalNumber=1;
                               continue;
                           }
                           else if(parseExpression[j] == '-' && j==start){
                               numofOperands--;
                               break;
                           }
                           else{
                               break;
                           }
                       }
                    if(j<= start){j=start;}
                    else{j++; count=1;}
                    if(decimalNumber==1){
                        decimalNumber=0;
                          if(j+1 == i){
                             string substr=parseExpression.substr(j+1,1);
                             num1=std::stod(substr);
                          }
                          else{
                            string substr=parseExpression.substr(j+1,i);
                            num1=std::stod(substr);
                          }
                    }
                    else{
                        if(j+1 == i){
                           string substr=parseExpression.substr(j+1,1);
                            num1=std::stoi(substr);
                        }
                        else{
                          string substr=parseExpression.substr(j+1,i);
                           num1=std::stoi(substr);
                        }
                    }

                    if(parseExpression[i] == '!'){
                        if(fmod(num1,1.0) != 0 || num1<=0){
                            value = "WRONG";
                        }
                        num1=factorial(num1);
                        string substr=std::to_string(num1);
                        parseExpression.replace(j+1, (i-j)+1,substr);
                        i = j + substr.length()-1;
                    }
                    else{
                        decimalNumber=0;
                        int k = i+1;
                        for(; k<parseExpression.length();k++){
                            if(isdigit(parseExpression[k])){
                                continue;
                            }
                            else if(parseExpression[k]=='.'){
                                decimalNumber=1;
                                continue;
                            }
                            else if(k == parseExpression.length()-1){
                                break;
                            }
                            else{
                                break;
                            }
                        }

                        if(decimalNumber==1){
                            decimalNumber=0;
                              if(i+1==k-1){
                              string substr=parseExpression.substr(i+1,1);
                                 num2=std::stod(substr);
                              }
                              else{
                                string substr=parseExpression.substr(i+1,k-1);
                                   num2=std::stod(substr);
                              }
                        }
                        else{
                            if(i+1==k-1){
                            string substr=parseExpression.substr(i+1,1);
                             num2=std::stoi(substr);

                            }
                            else{
                              string substr=parseExpression.substr(i+1,k-1);
                                num2=std::stoi(substr);
                            }
                        }
                        if(count==1 || j==0){
                            j--; count=0;
                        }
                       num1= powering(num1,num2);
                       string substr=std::to_string(num1);
                       parseExpression.replace(j+2, (k-j)-2,substr);
                       i=j+substr.length()-1;
                    } // end of else, that matches '^'
             }//end of if statement, that matches  '!' or '^' in for loop
         }
     }
     while(numofMultPrecedence>0){
         for(int i = start; i<strlen(expression); i++){
             if(parseExpression[i]=='*' || parseExpression[i]=='/' || parseExpression[i]=='%'){
                 numofMultPrecedence--;
                 int j=i-1;
                       for(; j>=0;j--){
                           if(isdigit(parseExpression[j])){
                               continue;
                           }
                           else if(parseExpression[j]=='.'){
                               decimalNumber=1;
                               continue;
                           }
                           else if(parseExpression[j] == '-' && j==start){
                               numofOperands--;
                               break;
                           }
                           else{
                               break;
                           }
                       }
                    if(j<= start){j=start;}
                    else{j++; count=1;}
                    if(decimalNumber==1){
                        decimalNumber=0;
                          if(j+1 == i){
                             string substr=parseExpression.substr(j+1,1);
                             num1=std::stod(substr);
                          }
                          else{
                            string substr=parseExpression.substr(j+1,i);
                            num1=std::stod(substr);
                          }
                    }
                    else{
                        if(j+1 == i){
                           string substr=parseExpression.substr(j+1,1);
                           num1=std::stoi(substr);
                        }
                        else{
                          string substr=parseExpression.substr(j+1,i);
                          num1=std::stoi(substr);
                        }
                    }
                        decimalNumber=0;
                        int k = i+1;
                        for(; k<parseExpression.length();k++){
                            if(isdigit(parseExpression[k])){
                                continue;
                            }
                            else if(parseExpression[k]=='.'){
                                decimalNumber=1;
                                continue;
                            }
                            else if(k == parseExpression.length()-1){
                                break;
                            }
                            else{
                                break;
                            }
                        }

                        if(decimalNumber==1){
                            decimalNumber=0;
                              if(i+1==k-1){
                              string substr=parseExpression.substr(i+1,1);
                              num2=std::stod(substr);

                              }
                              else{
                                string substr=parseExpression.substr(i+1,k-1);
                                num2=std::stod(substr);

                              }
                        }
                        else{

                            if(i+1==k-1){
                            string substr=parseExpression.substr(i+1,1);
                            num2=std::stoi(substr);

                            }
                            else{
                              string substr=parseExpression.substr(i+1,k-1);
                              num2=std::stoi(substr);

                            }
                        }
                        if(count==1 || j==0){
                            j--; count=0;
                        }
                        if(parseExpression[i]=='*'){
                            num1=multiplication(num1,num2);
                            string substr=std::to_string(num1);
                            parseExpression.replace(j+1, (k-j)-2,substr);
                            i=j+substr.length() -1;
                            continue;
                        }
                        if(parseExpression[i]=='/'){
                            if(num2==0){
                                value = "WRONG";
                            }
                            num1=division(num1,num2);
                            string substr=std::to_string(num1);
                            parseExpression.replace(j+1, (k-j)-2,substr);
                            i=j+substr.length() - 1;
                            continue;
                        }
                        if(parseExpression[i]=='%'){
                            if(num2==0){
                                value = "WRONG";
                            }
                            num1=mod(num1,num2);
                            string substr=std::to_string(num1);
                            parseExpression.replace(j+1, (k-j)-2,substr);
                            i=j+substr.length() - 1;
                            continue;
                        }
                    } // end of else, that matches '^'
             }//end of if statement, that matches  '!' or '^' in for loop
        }
     while(numofOperands>0){
         for(int i = start; i<strlen(expression); i++){
             if(parseExpression[i]=='+' || parseExpression[i]=='-'){
                      numofOperands--;
                      if(min_atStart==1 && i == start){
                          if(numofOperands < 0){
                              break;
                          }
                       }
                       int j=i-1;
                       for(; j>=0;j--){
                           if(isdigit(parseExpression[j])){
                               continue;
                           }
                           else if(parseExpression[j]=='.'){
                               decimalNumber=1;
                               continue;
                           }
                           else if(parseExpression[j] == '-' && j==start){
                               numofOperands--;
                               break;
                           }
                           else{
                               break;
                           }
                       }
                       if(j<= start){j=start;}
                       else{j++; count=1;}
                       if(decimalNumber==1){
                           decimalNumber=0;
                            // string substr=parseExpression.substr(j+1,i-1);
                             if(j+1 == i){
                                string substr=parseExpression.substr(j+1,1);
                                num1=std::stod(substr);
                             }
                             else{
                               string substr=parseExpression.substr(j+1,i);
                               num1=std::stod(substr);
                             }

                       }
                       else{
                           //string substr=parseExpression.substr(j+1,i-1);
                           if(j+1 == i){
                              string substr=parseExpression.substr(j+1,1);
                              num1=std::stoi(substr);
                           }
                           else{
                             string substr=parseExpression.substr(j+1,i);
                             num1=std::stoi(substr);
                           }

                       }
                           decimalNumber=0;
                           int k = i+1;
                           for(; k<parseExpression.length();k++){
                               if(isdigit(parseExpression[k])){
                                   continue;
                               }
                               else if(parseExpression[k]=='.'){
                                   decimalNumber=1;
                                   continue;
                               }
                               else if(k == parseExpression.length()-1){
                                   break;
                               }
                               else{
                                   break;
                               }
                           }

                           if(decimalNumber==1){
                               decimalNumber=0;

                                 if(i+1==k-1){
                                 string substr=parseExpression.substr(i+1,1);
                                 num2=std::stod(substr);
                                 }
                                 else{
                                   string substr=parseExpression.substr(i+1,k-1);
                                   num2=std::stod(substr);
                                 }
                           }
                           else{

                               if(i+1==k-1){
                               string substr=parseExpression.substr(i+1,1);
                               num2=std::stod(substr);
                               }
                               else{
                                 string substr=parseExpression.substr(i+1,k-1);
                                 num2=std::stod(substr);
                               }
                           }
                           if(count==1 || j==start){
                               j--; count=0;
                           }
                           if(parseExpression[i]=='+'){
                               num1=addition(num1,num2);
                               string substr=std::to_string(num1);
                               parseExpression.replace(j+2, (k-j)-2,substr);
                               i=j+substr.length() -1;
                               continue;
                           }
                           if(parseExpression[i]=='-'){
                               num1=difference(num1,num2);
                               string substr=std::to_string(num1);
                               parseExpression.replace(j+2, (k-j)-2,substr);
                               i=j+substr.length() -1;
                               continue;
                           }
             }//end of if statement, that matches  '!' or '^' in for loop
         }
     }
     count = 0;
     parseExpression=parseExpression.erase(start,1);
     for(int i = start; i < parseExpression.length(); i++){
         if(parseExpression[i] == ')')
         {
             count=1;
             end=i;
             break;
         }
     }
     if(count==1){
         parseExpression=parseExpression.erase(end,1);
        strcpy((char*)value,parseExpression.c_str());
        return;

     }
    return;
}


int CharisOperand(const char *expression, int position){

    if(expression[position]=='*' ||expression[position]=='/' ||expression[position]=='%' ||expression[position]=='+' ||
            expression[position]=='-' ||expression[position]=='n' ||expression[position]=='t' ||expression[position]=='s' ){
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
     int count=0;
     string parseResult=(string) expression;
     int min_atStart=0;
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
               if(i==0) min_atStart=1;
           }
           if(expression[i]=='c'){
               i += 3;
               numofLbracket++;
               numofCos++;
           }
           if(expression[i]=='s'){
               if(expression[i+1] == 'i'){
                   i+=3;
                   numofSin++;
               }
               else{
                   i+=4;
                   numofStrq++;
               }
               numofLbracket++;
           }

     } // End of for loop to count brackets, operands etc.
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
                                else if(parseResult[j]=='.'){
                                    decimalNumber=1;
                                    continue;
                                }
                                else if(parseResult[j] == '-' && j==0){
                                    numofOperands--;
                                    break;
                                }
                                else{
                                    break;
                                }
                            }
                         if(j<= 0){j=0;}
                         else{j++; count=1;}
                         if(decimalNumber==1){
                             decimalNumber=0;
                             decimalNumber=0;
                             if(j == i){
                                string substr=parseResult.substr(j,1);
                                num1=std::stod(substr);
                             }
                             else{
                               string substr=parseResult.substr(j,i);
                               num1=std::stod(substr);
                             }

                         }
                         else{
                             if(j == i){
                                string substr=parseResult.substr(j,1);
                                 num1=std::stoi(substr);
                             }
                             else{
                               string substr=parseResult.substr(j,i);
                                num1=std::stoi(substr);
                             }

                         }

                         if(parseResult[i] == '!'){
                             if(fmod(num1,1.0) != 0 || num1<=0){
                                 return MAXFLOAT;
                             }
                             num1=factorial(num1);
                             string substr=std::to_string(num1);
                             parseResult.replace(j, (i-j)+1,substr);
                             i = j + substr.length()-1;
                         }
                         else{
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
                                 decimalNumber=0;
                                 if(i+1==k-1){
                                 string substr=parseResult.substr(i+1,1);
                                    num2=std::stod(substr);
                                 }
                                 else{
                                   string substr=parseResult.substr(i+1,k-1);
                                      num2=std::stod(substr);
                                 }

                             }
                             else{
                                 if(i+1==k-1){
                                 string substr=parseResult.substr(i+1,1);
                                  num2=std::stoi(substr);

                                 }
                                 else{
                                   string substr=parseResult.substr(i+1,k-1);
                                     num2=std::stoi(substr);
                                 }

                             }
                             if(count==1 || j==0){
                                 j--; count=0;
                             }
                            num1= powering(num1,num2);
                            string substr=std::to_string(num1);
                            parseResult.replace(j+1, (k-j)-1,substr);
                            i=j+substr.length()-1;
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
                         else if(parseResult[j]=='.'){
                             decimalNumber=1;
                             continue;
                         }
                         else if(parseResult[j] == '-' && j==0){
                             numofOperands--;
                             continue;
                         }
                         else{
                             break;
                         }
                     }

                  if(j <= 0){j=0;}
                  else{j++; count=1;}
                  if(decimalNumber==1){
                      decimalNumber=0;
                      if(j == i){
                         string substr=parseResult.substr(j,1);
                         num1=std::stod(substr);
                      }
                      else{
                        string substr=parseResult.substr(j,i);
                        num1=std::stod(substr);
                      }

                  }
                  else{
                      if(j == i){
                         string substr=parseResult.substr(j,1);
                         num1=std::stoi(substr);
                      }
                      else{
                        string substr=parseResult.substr(j,i);
                        num1=std::stoi(substr);
                      }

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
                      decimalNumber=0;
                      if(i+1==k-1){
                      string substr=parseResult.substr(i+1,1);
                      num2=std::stod(substr);

                      }
                      else{
                        string substr=parseResult.substr(i+1,k-1);
                        num2=std::stod(substr);

                      }

                  }
                  else{
                      if(i+1==k-1){
                      string substr=parseResult.substr(i+1,1);
                      num2=std::stoi(substr);

                      }
                      else{
                        string substr=parseResult.substr(i+1,k-1);
                         num2=std::stoi(substr);
                      }

                  }
                  if(count==1 || j==0){j--; count=0;}
                  if(parseResult[i]=='*'){
                      num1=multiplication(num1,num2);
                      string substr=std::to_string(num1);
                      parseResult.replace(j+1, (k-j)-1,substr);
                      i=j+substr.length() -1;
                      continue;
                  }
                  if(parseResult[i]=='/'){
                      if(num2==0){
                          return MAXFLOAT;
                      }
                      num1=division(num1,num2);
                      string substr=std::to_string(num1);
                      parseResult.replace(j+1, (k-j)-1,substr);
                      i=j+substr.length() - 1;
                      continue;
                  }
                  if(parseResult[i]=='%'){
                      if(num2==0){
                          return MAXFLOAT;
                      }
                      num1=mod(num1,num2);
                      string substr=std::to_string(num1);
                      parseResult.replace(j+1, (k-j)-1,substr);
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
                     if(min_atStart==1 && i == 0){
                         if(numofOperands <= 0){
                             return std::stod(parseResult);
                         }
                        neg=-1;
                        continue;
                     }
                     for(; j>=0;j--){
                         if(isdigit(parseResult[j])){
                             continue;
                         }
                         else if(parseResult[j]=='.'){
                             decimalNumber=1;
                             continue;
                         }

                         else{
                             break;
                         }
                     }
                  if(j <= 0){j=0;}
                  else{j++; count=1;}
                  if(decimalNumber==1){
                      decimalNumber=0;
                      if(j == i){
                         string substr=parseResult.substr(j,1);
                         num1=std::stod(substr);
                      }
                      else{
                        string substr=parseResult.substr(j,i);
                        num1=std::stod(substr);
                      }

                     }
                  else{
                      if(j == i){
                         string substr=parseResult.substr(j,1);
                         num1=std::stod(substr);
                      }
                      else{
                        string substr=parseResult.substr(j,i);
                        num1=std::stod(substr);
                      }

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
                      decimalNumber=0;
                      if(i+1==k-1){
                      string substr=parseResult.substr(i+1,1);
                      num2=std::stod(substr);
                      }
                      else{
                        string substr=parseResult.substr(i+1,k-1);
                        num2=std::stod(substr);
                      }
                  }
                  else{
                      if(i+1==k-1){
                      string substr=parseResult.substr(i+1,1);
                        num2=std::stoi(substr);
                      }
                      else{
                        string substr=parseResult.substr(i+1,k-1);
                        num2=std::stoi(substr);
                      }

                  }
                  if(count==1 || j==0){j--;count=0;}
                  if(parseResult[i]=='+'){
                      num1=addition(num1,num2);
                      string substr=std::to_string(num1);
                      parseResult.replace(j+1, (k-j)-1,substr);
                      i=j+substr.length() -1;
                      continue;
                  }
                  if(parseResult[i]=='-'){
                      num1=difference(num1,num2);
                      string substr=std::to_string(num1);
                      parseResult.replace(j+1, (k-j)-1,substr);
                      i=j+substr.length() - 1;
                      continue;
                  }

                 }//end of if loop when we have found position of *,/,%
             }//end of for loop that searches position of *,/,%
         }//end of if that matches *,/,%


         } // End of if statement, when in expression are not bracktets

     else{
         int  bracket [numofLbracket];
         count=0;
        for(unsigned int i = 0; i < parseResult.length(); i++){
            if(parseResult[i]=='('){
                bracket[count]=i;
                count++;
            }
            if(parseResult[i]==')'){
                int j = bracket[count-1]; // j= position of lBracket
                                         //i=posiion of rBracket
                count--;
                int lBracketpos=j;
                int rBracketpos=i;
                const char* tmp;

                BracketEvalvuation(parseResult.c_str(), lBracketpos, rBracketpos,tmp);
                if(tmp=="WRONG"){
                    return MAXFLOAT;
                }
                parseResult = (string)tmp;
            }
             continue;
        }

     } // end of else, brackets in expression
     int counter=numofCos+numofSin+numofStrq;

     if(counter > 0){

        for(int i = 0; i < parseResult.length(); i++){
            if(parseResult[i] == 's' ){
                if(parseResult[i+1] == 'i'){
                    int j = i+3;
                    for(;j<parseResult.length(); j++)
                    {
                        if(isdigit(parseResult[j])){
                            continue;
                        }
                        else if(parseResult[j]=='.'){
                            decimalNumber=1;
                            continue;
                        }
                        else if(j == parseResult.length()-1){
                            break;
                        }
                        else{
                            break;
                        }
                    }
                    if(decimalNumber==1){
                        decimalNumber=0;
                        if(i+3==j-1){
                            string substr=parseResult.substr(i+3,1);
                            num1=std::stod(substr);
                        }
                         else{
                          string substr=parseResult.substr(i+3,j-1);
                          num1=std::stod(substr);
                        }
                    }
                    else{
                        if(i+3==j-1){
                            string substr=parseResult.substr(i+3,1);
                            num1=std::stoi(substr);
                        }
                         else{
                          string substr=parseResult.substr(i+3,j-1);
                          num1=std::stoi(substr);
                        }
                    }
                     num1=sine(num1);
                     string substr=std::to_string(num1);
                     parseResult.replace(i, (j-i)-1,substr);
                     i=j+substr.length()-1;
                    continue;
                }//end of sin
                int j = i+4;
                for(;j<parseResult.length(); j++)
                {
                    if(isdigit(parseResult[j])){
                        continue;
                    }
                    else if(parseResult[j]=='.'){
                        decimalNumber=1;
                        continue;
                    }
                    else if(j == parseResult.length()-1){
                        break;
                    }
                    else{
                        break;
                    }
                }
                if(decimalNumber==1){
                    decimalNumber=0;
                    if(i+4==j-1){
                        string substr=parseResult.substr(i+4,1);
                        num1=std::stod(substr);
                    }
                     else{
                      string substr=parseResult.substr(i+4,j-1);
                      num1=std::stod(substr);
                    }
                }
                else{
                    if(i+4==j-1){
                        string substr=parseResult.substr(i+4,1);
                        num1=std::stoi(substr);
                    }
                     else{
                      string substr=parseResult.substr(i+4,j-1);
                      num1=std::stoi(substr);
                    }
                }
                if(num1<0){
                    return MAXFLOAT;
                }
                 num1=m_sqrt(num1);
                 string substr=std::to_string(num1);
                 parseResult.replace(i, (j-i)-1,substr);
                 i=j+substr.length()-1;
                continue;
            }
            if(parseResult[i] == 'c'){
                int j = i+3;
                for(;j<parseResult.length(); j++)
                {
                    if(isdigit(parseResult[j])){
                        continue;
                    }
                    else if(parseResult[j]=='.'){
                        decimalNumber=1;
                        continue;
                    }
                    else if(j == parseResult.length()-1){
                        break;
                    }
                    else{
                        break;
                    }
                }
                if(decimalNumber==1){
                    decimalNumber=0;
                    if(i+3==j-1){
                        string substr=parseResult.substr(i+3,1);
                        num1=std::stod(substr);
                    }
                     else{
                      string substr=parseResult.substr(i+3,j-1);
                      num1=std::stod(substr);
                    }
                }
                else{
                    if(i+3==j-1){
                        string substr=parseResult.substr(i+3,1);
                        num1=std::stoi(substr);
                    }
                     else{
                      string substr=parseResult.substr(i+3,j-1);
                      num1=std::stoi(substr);
                    }
                }
                 num1=cosine(num1);
                 string substr=std::to_string(num1);
                 parseResult.replace(i, (j-i)-1,substr);
                 i=j+substr.length()-1;

            }

         }

       } //end of sin,strq,cos
     if(numofFact>0){
         numofFact--;
          for(unsigned int i = 0; i < parseResult.length(); i++){
              if(parseResult[i]=='^' || parseResult[i]=='!'){
                        int j=i-1;
                        for(; j>=0;j--){
                            if(isdigit(parseResult[j])){
                                continue;
                            }
                            else if(parseResult[j]=='.'){
                                decimalNumber=1;
                                continue;
                            }
                            else if(parseResult[j] == '-' && j==0){
                                numofOperands--;
                                break;
                            }
                            else{
                                break;
                            }
                        }
                     if(j<= 0){j=0;}
                     else{j++; count=1;}
                     if(decimalNumber==1){
                         decimalNumber=0;
                           if(j == i){
                                string substr=parseResult.substr(j,1);
                               num1=std::stod(substr);
                            }
                            else{
                              string substr=parseResult.substr(j,i);
                              num1=std::stod(substr);
                            }
                     }
                     else{
                         if(j == i){
                              string substr=parseResult.substr(j,1);
                             num1=std::stoi(substr);
                          }
                          else{
                            string substr=parseResult.substr(j,i);
                            num1=std::stoi(substr);
                          }
                     }

                     if(parseResult[i] == '!'){
                         if(fmod(num1,1.0) != 0 || num1<=0){
                             return MAXFLOAT;
                         }
                         num1=factorial(num1);
                         string substr=std::to_string(num1);
                         parseResult.replace(j, (i-j)+1,substr);
                         i = j + substr.length()-1;
                     }
                     else{
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
                             decimalNumber=0;

                               if(i+1==k-1){
                               string substr=parseResult.substr(i+1,1);
                                  num2=std::stod(substr);
                               }
                               else{
                                 string substr=parseResult.substr(i+1,k-1);
                                    num2=std::stod(substr);
                               }
                         }
                         else{

                             if(i+1==k-1){
                             string substr=parseResult.substr(i+1,1);
                                num2=std::stoi(substr);
                             }
                             else{
                               string substr=parseResult.substr(i+1,k-1);
                                  num2=std::stoi(substr);
                             }
                         }
                         if(count==1 || j==0){
                             j--; count=0;
                         }
                        num1= powering(num1,num2);
                        string substr=std::to_string(num1);
                        parseResult.replace(j+1, (k-j)-1,substr);
                        i=j+substr.length()-1;
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
                     else if(parseResult[j]=='.'){
                         decimalNumber=1;
                         continue;
                     }
                     else if(parseResult[j] == '-' && j==0){
                         numofOperands--;
                         continue;
                     }
                     else{
                         break;
                     }
                 }

              if(j <= 0){j=0;}
              else{j++; count=1;}
              if(decimalNumber==1){
                  decimalNumber=0;
                    if(j == i){
                       string substr=parseResult.substr(j,1);
                       num1=std::stod(substr);
                    }
                    else{
                      string substr=parseResult.substr(j,i);
                      num1=std::stod(substr);
                    }
              }
              else{
                  if(j == i){
                     string substr=parseResult.substr(j,1);
                     num1=std::stoi(substr);
                  }
                  else{
                    string substr=parseResult.substr(j,i);
                    num1=std::stoi(substr);
                  }
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
                  decimalNumber=0;
                    if(i+1==k-1){
                    string substr=parseResult.substr(i+1,1);
                    num2=std::stod(substr);

                    }
                    else{
                      string substr=parseResult.substr(i+1,k-1);
                      num2=std::stod(substr);

                    }
              }
              else{
                  if(i+1==k-1){
                  string substr=parseResult.substr(i+1,1);
                  num2=std::stoi(substr);

                  }
                  else{
                    string substr=parseResult.substr(i+1,k-1);
                    num2=std::stoi(substr);

                  }
              }
              if(count==1 || j==0){j--; count=0;}
              if(parseResult[i]=='*'){
                  num1=multiplication(num1,num2);
                  string substr=std::to_string(num1);
                  parseResult.replace(j+1, (k-j)-1,substr);
                  i=j+substr.length() -1;
                  continue;
              }
              if(parseResult[i]=='/'){
                  if(num2==0){
                      return MAXFLOAT;
                  }
                  num1=division(num1,num2);
                  string substr=std::to_string(num1);
                  parseResult.replace(j+1, (k-j)-1,substr);
                  i=j+substr.length() - 1;
                  continue;
              }
              if(parseResult[i]=='%'){
                  if(num2==0){
                      return MAXFLOAT;
                  }
                  num1=mod(num1,num2);
                  string substr=std::to_string(num1);
                  parseResult.replace(j+1, (k-j)-1,substr);
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
                 if(i == 0){
                     if(numofOperands <= 0){
                         return std::stod(parseResult);
                     }
                    neg=-1;
                    continue;
                 }
                 for(; j>=0;j--){
                     if(isdigit(parseResult[j])){
                         continue;
                     }
                     else if(parseResult[j]=='.'){
                         decimalNumber=1;
                         continue;
                     }

                     else{
                         break;
                     }
                 }
              if(j <= 0){j=0;}
              else{j++; count=1;}
              if(decimalNumber==1){
                  decimalNumber=0;
                    string substr=parseResult.substr(j,i-1);
                    num1=std::stod(substr);
                 }
              else{
                  string substr=parseResult.substr(j,i-1);
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
                  decimalNumber=0;
                    string substr=parseResult.substr(i+1,k-1);
                    num2=std::stod(substr);
              }
              else{
                  string substr=parseResult.substr(i+1,k-1);
                  num2=std::stoi(substr);
              }
              if(count==1 || j==0){j--;count=0;}
              if(parseResult[i]=='+'){
                  num1=addition(num1,num2);
                  string substr=std::to_string(num1);
                  parseResult.replace(j+1, (k-j)-1,substr);
                  i=j+substr.length() -1;
                  continue;
              }
              if(parseResult[i]=='-'){
                  num1=difference(num1,num2);
                  string substr=std::to_string(num1);
                  parseResult.replace(j+1, (k-j)-1,substr);
                  i=j+substr.length() - 1;
                  continue;
              }

             }//end of if loop when we have found position of *,/,%
         }//end of for loop that searches position of *,/,%
     }//end of if that matches *,/,%


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
    return sqrt(base);
}
double cosine(double base){
    return cos(base);
}
double sine(double base)
{
    return sin(base);
}
