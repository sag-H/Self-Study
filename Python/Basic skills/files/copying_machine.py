#Copying text from one file to another 
def solution1():
    original = r'C:\\Networks\work\\files\\original.txt'
    copied_file = r'C:\\Networks\work\\files\\copy.txt'

    with open(original, 'r') as f:
            text_to_copy = f.read()  
    with open(copied_file, 'w') as f:
            f.write(text_to_copy)

def solution2():
    original = r'C:\\Networks\work\\files\\original.txt'
    copied_file = r'C:\\Networks\work\\files\\copy.txt'
    with open('original.txt','r') as original, open('copy.txt','w') as copied_file:
      
        # read content from first file
        for line in original:
               
             # append content to second file
             copied_file.write(line)
             
solution1()
solution2()