def linear_search(roll_no,target):
    for i in roll_no:
        if i == target:
            print(f"roll no {target} attended the program")
            return
    print(f"roll no {target} not attended the program")

def fibonacci_search(roll_no,target):
    n = len(roll_no) - 1
    fibM2 = 0
    fibM1 = 1
    fibM = fibM2+fibM1
    while fibM < n:
        fibM2 = fibM1
        fibM1 = fibM
        fibM = fibM + fibM1

    offset = -1
    i = 0

    while fibM > 1:
        i = min(offset+fibM2, n - 1)
        if roll_no[i] < target:
            fibM = fibM1
            fibM1 = fibM2
            fibM2 = fibM - fibM1
            offset = i
        elif roll_no[i] > target:
            fibM = fibM2
            fibM1 = fibM1 - fibM
            fibM2 = fibM - fibM1
        else:
            print(f"roll no {target} attended the program")
            return
    
    if fibM == 1 and roll_no[offset + 1] == target:
        print(f"roll no {target} attended the program")
    else:
        print(f"roll no {target} not attended the program")


roll_no = [2,5,13,14,15,27,30,42,78,90]
linear_search(roll_no,30)
fibonacci_search(roll_no,42)