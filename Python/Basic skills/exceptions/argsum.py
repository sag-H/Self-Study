import argparse

# The ArgumentParser object holds all the necessary
# information to parse the command line into Python data types.
parser = argparse.ArgumentParser(description='Process some integers.')

# Now we need to add arguments by making 
# calls to the add_argument() method:
parser.add_argument('integers', metavar='N', type=int, nargs='+',
                     help='an integer for the accumulator')

parser.add_argument('--sum', dest='accumulate', action='store_const',
                     const=sum, default=max,
                    help='sum the integers (default: find the max)')
                    
args = parser.parse_args()
print(args.accumulate(args.integers))