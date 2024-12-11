def partition(percentage,low,high):
    pivot = percentage[high]
    i = low - 1
    j = low
    
    while j < high:
        if percentage[j] < pivot:
            i+=1
            temp = percentage[i]
            percentage[i] = percentage[j]
            percentage[j] = temp
        j += 1
    i+=1
    temp = percentage[i]
    percentage[i] = percentage[high]
    percentage[high] = temp
    return i

def quick_sort(percentage,low,high):
    if low < high:
        pi = partition(percentage,low,high)
        quick_sort(percentage,low,pi-1)
        quick_sort(percentage,pi+1,high)
    pass

percentage = [35.65,89.4,46.56,20.99,99.3,83.5,78.34,67.44]
quick_sort(percentage,low=0,high=len(percentage)-1)
print(percentage)