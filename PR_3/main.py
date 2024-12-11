def longest_word(str):
    words = str.split()
    longest = max(words,key=len)
    return longest

def frequency(chr,str):
    freq = str.count(chr)
    return freq

def index_substring(sub,str):
    index = str.find(sub)
    return index

str = input("Please Enter String : ")

while True:
    print("1.word with longest length\n2.Frequency of character\n3.index of first occurrence of substring\n4.exit")
    c = int(input("please enter your choice : "))
    if c == 1:
        print(longest_word(str))
    elif c == 2:
        ch = input("enter character : ")
        print(frequency(ch,str))
    elif c == 3:
        sub = input("enter substring : ")
        print(index_substring(sub,str))
    elif c == 4:
        break
    else:
        print("invalid choice")