"""This script takes two text files as arguments
where file1 has a math problem in each line
in the format of:
'num1 + or - or * or / num2'

It writes the solutions to file2 in the format:
'num1 + or - or * or / num2 = result'
"""
import sys
import os

def is_operation(s):

    if s == '+' or\
       s == '-' or\
       s == "*" or\
       s == "/":
        return True
    else: 
        return False

def equation_strip(s):

    s = s.replace(" ","")
    while s[0].isdigit() == False:
        s = s.strip(s[0])
    while s[-1].isdigit() == False:
        s = s.strip(s[-1])
    
    #Formatting as "46 + 12" instead of "46+12"
    for i in s:
        if is_operation(i):
            return s[:s.index(i)] + " " + i + " " + s[s.index(i)+1:]

def addition_from_string(s):

    s = s.replace(" ","")
    for i in s:
        if i == "+":
            plus_sign = s.index("+")
            num1 = s[:plus_sign]
            num2 = s[plus_sign+1:]
    return int(num1) + int(num2)

def subtraction_from_string(s):

    s = s.replace(" ","")
    for i in s:
            if i == "-":
                minus_sign = s.index("-")
                num1 = s[:minus_sign]
                num2 = s[minus_sign+1:]
    return int(num1) - int(num2)

def multiplication_from_string(s):

    s = s.replace(" ","")
    for i in s:
            if i == "*":
                multiplication_sign = s.index("*")
                num1 = s[:multiplication_sign]
                num2 = s[multiplication_sign+1:]
    return int(num1) * int(num2)

def division_from_string(s):

    s = s.replace(" ","")
    for i in s:
            if i == "/":
                division_sign = s.index("/")
                num1 = s[:division_sign]
                num2 = s[division_sign+1:]
    return int(num1) / int(num2)

def calculate(equation):

    if "+" in equation:
        return addition_from_string(equation)
    if "-" in equation:
        return subtraction_from_string(equation)
    if "*" in equation:
        return multiplication_from_string(equation)
    if "/" in equation:
        return division_from_string(equation)

def file_exists(file):

    if(os.path.exists(file)):
        return True
    else: 
        print(f"File '{file}' doesn't exist.")
        return False

def main():
   
    homework = sys.argv[1]
    solution = sys.argv[2]

    if file_exists(homework) and\
       file_exists(solution):

        with open(homework,'r') as input_file:
            for line in input_file.readlines():
                equation = equation_strip(line)
                result = calculate(equation)

                #We are adding \n because equation_strip() removes
                #the automatic \n from input_file.readlines().
                final_output = equation + " = " + str(result) + '\n'

                with open(solution, 'a') as output_file:
                    output_file.write(final_output)

                

if __name__ == "__main__":
    main()        