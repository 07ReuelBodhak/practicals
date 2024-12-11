def sentinel_search(roll_no,target):
    n = len(roll_no)
    temp = roll_no[-1]
    roll_no[-1] = target

    i = 0

    while roll_no[i] != target:
        i += 1
    
    roll_no[n-1] = temp

    if i < n-1 or roll_no[n-1] == target:
        print(f"roll no {target} attended the program")
    else:
        print(f"roll no {target} did not attended the program")
   
def binary_search(roll_no,target):
    low = 0
    high = len(roll_no)-1

    while low < high:
        mid = low + (high - low)//2
        if roll_no[mid] == target:
            print(f"roll no {target} attended the program")
            return
        elif roll_no[mid] < target:
            low = mid + 1
        elif roll_no[mid] < target:
            high = mid - 1
    print(f"roll no {target} did not attended the program")
   

roll_no = [2,5,13,14,15,27,30,42,78,90]
sentinel_search(roll_no,78)
binary_search(roll_no,15)