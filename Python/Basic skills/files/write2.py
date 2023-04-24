def open_without_close():
    #Opening a file and not closing it can cause some weird stuff:
    FILENAME = r'C:\\Networks\work\\files\\lyrics.txt'

    #hfile stands for handle file
    hfile1 = open(FILENAME, 'a')
    hfile1.write('Here are some new lyrics\n')
    hfile2 = open(FILENAME, 'r')
    for line in hfile2:
        print(line, end="")#hfile2 was neglected because we didn't close the file, and hfile1 didn't write at all.
    
def open_with_close():
    FILENAME = r'C:\\Networks\work\\files\\lyrics.txt'
    hfile1 = open(FILENAME, 'a')
    hfile1.write('Some new lyrics\n')
    hfile1.close()

def open_with_with():
    FILENAME = r'C:\\Networks\work\\files\\lyrics.txt'
    with open(FILENAME,'r') as input_file:
        for line in input_file:
            print(line, end="")

open_with_with()