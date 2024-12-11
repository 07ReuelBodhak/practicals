def sentinel_search(roll_no,target):
    n = len(roll_no)-1
    temp = roll_no[n]
    roll_no[n] = target

    i = 0
    while roll_no[i] != target:
        i += 1
    
    roll_no[n] = temp
    if i < n or roll_no[n] == target:
        print(f"roll no {target} attended the program")
    else:
        print(f"roll no {target} did not attended the program")

def fibonacci_search(roll_no,target):
    n = len(roll_no)
    fibM2 = 0
    fibM1 = 1
    fibM = fibM2 + fibM1

    while fibM < n:
        fibM2 = fibM1
        fibM1 = fibM
        fibM = fibM2 + fibM1
    
    offset = -1
    i = 0

    while fibM > 1:
        i = min(offset + fibM2,n-1)
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
    
    if fibM2 == 1 and roll_no[offset + 1] == target:
        print(f"roll no {target} attended the program")
    else:
        print(f"roll no {target} did not attended the program")

        

roll_no = [2,5,13,14,15,27,30,42,78,90]
sentinel_search(roll_no,78)
fibonacci_search(roll_no,27)