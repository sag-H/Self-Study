#os.path excercise solution: 

import sys
import os
PATH = 1
directory = sys.argv[PATH]
if(os.path.exists(directory)):
    print(os.listdir(directory))
else:
    print("Directory doesn't exist")
