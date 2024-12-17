def palindrome(str):
    reverse = str.lower() == str[::-1].lower()
    return reverse

def count_char(str):
    counts = {}
    for i in str:
        if i not in counts.keys() and i != " ":
            counts[i] = str.count(i)
    print(counts)

str = input("please enter string : ")
while True:
    ch = int(input("1.Check Palindrome\n2.counts of each character\n.3.exit\n"))
    if ch == 1:
        if palindrome(str):
            print(f"string {str} is palindrome")
        else:
            print(f"string {str} is not palindrome")
    elif ch == 2:
        print("Counts of character : ")
        count_char(str)
    
    elif ch == 3:
        break
    else:
        print("invalid choice")

