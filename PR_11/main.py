def selection_sort(percentage):
    n = len(percentage)
    for i in range(n-1):
        min_index = i
        for j in range(i,n):
            if percentage[j] < percentage[min_index]:
                min_index = j
        temp = percentage[i]
        percentage[i] = percentage[min_index]
        percentage[min_index] = temp
        

percentage = [35.65,89.4,46.56,20.99,99.3,83.5,78.34,67.44]
selection_sort(percentage)
print("top 5 scores : ")

n = len(percentage)

for i in range(n-1,max(n - 6,-1),-1):
    print(percentage[i])