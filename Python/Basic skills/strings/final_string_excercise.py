def print_num(num):
    print(f"Your num: {num}")

def print_digits(num):
#Prints The number's digits seperated by comma.
#Accepts int types only 
    if type(num) != int:   
        print("Not an integer")
    else: 
        nums_digits = ",".join(str(num))
        print("Digits:",nums_digits)

def sum_of_digits(num):
#Prints the sum of the number's digits,
#Accepts int types only
    print("Digits sum:",sum(list(map(int,str(num)))))

def main():
    
    num = input("Enter a 5 digit positive number: ")

    #Validating user input
    while True:
        if not num.isdigit(): 
            num = input("Incorrect input. \nEnter a 5 digit positive number:")

        elif len(num) != 5:
            num = input("Number isn't 5 digits, re-enter:")

        else: 
            break
    print_num(num)
    print_digits(int(num))
    sum_of_digits(num)

if __name__ == "__main__":
    main()
