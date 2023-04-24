#Way 1: Long and convoluted
input_file = open(r'C:\\Networks\work\\files\\lyrics.txt','r')
lyrics = None
while lyrics != "":
    lyrics = input_file.readline()

    #Without end="" we would get a double space after
    #each line, because readline() already spaces a line
    print(lyrics, end="")

#Way 2: Short and nice :)
input_file = open(r'C:\\Networks\work\\files\\lyrics.txt','r')
for line in input_file:
    print(line, end="")