user = input()
list = [" ","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
user1=user.lower()
user2 = []
for i in user1:
    if i in list:
        user2.append(i)
user3 = user2[::-1]
print("".join(user3))
