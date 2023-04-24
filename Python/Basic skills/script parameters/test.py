import os
def does_file_exist(file):

    if(os.path.exists(file)):
        return True
    else:
        print(f"File {file} doesn't exist")
        return False