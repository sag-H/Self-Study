import sys

def solution1():
    #The File name is taken from the command line
    file_to_print = sys.argv[1]
    with open(file_to_print,'r') as f:
        print(f.read())


def solution2():
    import fileinput

    with fileinput.input(files=('myfile.txt'), encoding="utf-8") as f:
        for line in f:
            print(line)

print('Number of arguments:', len(sys.argv), 'arguments.')
print('Argument List:', str(sys.argv))
"""This will output:
Number of arguments: 1 arguments.
Argument List: ['C:\\Networks\\work\\script parameters\\printer.py']


But running the script through the terminal like so:
>> python printer.py arg1 arg2 arg3
Will yeild:
Number of arguments: 4 arguments.
Argument List: [printer.py', 'arg1', 'arg2', 'arg3'] """