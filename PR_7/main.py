def linear_search(roll_no,target):
    for i in roll_no:
        if i == target:
            print(f"roll no {target} attended the program")
            return
    print(f"roll no {target} not attended the program")

def binary_search(roll_no,target):
    low = 0
    high = len(roll_no) - 1

    while low <= high:
        mid = low + (high - low) // 2
        if roll_no[mid] == target:
            print(f"roll no {target} attended the program")
            return
        elif roll_no[mid] < target:
            low = mid + 1
        elif roll_no[mid] > target:
            high = mid - 1
    print(f"roll no {target} not attended the program")

roll_no = [2,5,13,14,15,27,30,42,78,90]
linear_search(roll_no,30)
binary_search(roll_no,27)