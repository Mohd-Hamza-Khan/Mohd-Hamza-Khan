import re # import regX module to use search function for special character
while True: # run while loop until the password is not strong
    pass1 = input("Enter the password : ") # take password
    lepas = len(pass1) # length of password
    if lepas < 8: # check password's length
        print("password should be of 8 digit")
    else:
        if(bool(re.search('^[a-zA-Z0-9]*$',pass1))==True): # use search function for special character
            print("very weak password, \nAdd atleast one special character")  # if special character not found print weak password
        else:
            print("strong password") # if special character found print strong password
            break # when reach the condition loop will break