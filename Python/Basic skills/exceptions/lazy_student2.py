"""This script takes two text files as arguments
where file1 has a math problem in each line
in the format of:
'num1 {+ or - or * or /} num2'

It writes the solutions to file2 in the format:
'num1 {+ or - or * or /} num2 = result'
"""

import os
import argparse

def is_operation(s):
    # This function is only used for formatting
    # the output in equation_strip()

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
    
    # Formatting as "46 + 12" instead of "46+12"
    for i in s:
        if is_operation(i):
            return s[:s.index(i)] + " " + i + " " + s[s.index(i)+1:]

def addition_from_string(s):
    # All operation_from_string functions use
    # the operation sign as the median point
    # in the string-stripping for the number
    
    for i in s:
            if i == "+":
                plus_sign = s.index("+")
                num1 = s[:plus_sign]
                num2 = s[plus_sign+1:]
    return int(num1) + int(num2)

def subtraction_from_string(s):

    for i in s:
            if i == "-":
                minus_sign = s.index("-")
                num1 = s[:minus_sign]
                num2 = s[minus_sign+1:]
    return int(num1) - int(num2)

def multiplication_from_string(s):

    for i in s:
            if i == "*":
                multiplication_sign = s.index("*")
                num1 = s[:multiplication_sign]
                num2 = s[multiplication_sign+1:]
    return int(num1) * int(num2)

def division_from_string(s):

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
        return False

def solve(input_file,output_file):

    with open(input_file,'r') as f:
        for line in f.readlines():
            equation = equation_strip(line)
            result = calculate(equation)

            # We are adding \n because equation_strip() removes
            # the automatic \n from f.readlines().
            final_output = equation + " = " + str(result) + '\n'

            with open(output_file, 'a') as f2:
                f2.write(final_output)

def main():
   
    parser = argparse.ArgumentParser(description='Does your homework.')

    parser.add_argument('input_file', metavar='input_file', type=str,
                        help='The file where your homework is')
    parser.add_argument('output_file', metavar='output_file', type=str,
                        help='The file to output the solutions of your homework')
                        
    args = parser.parse_args()
    input_file = args.input_file
    output_file = args.output_file

    if file_exists(input_file) and file_exists(output_file):
        solve(input_file,output_file)

    elif file_exists(input_file) and not file_exists(output_file):
        print(f"File {output_file} doesn't exist.")
        
    else:
        print(f"File {input_file} doesn't exist.")
        
    
if __name__ == "__main__":
    main()        