def bubble_sort(percentage):
    for i in range(len(percentage)-1):
        for j in range(i+1,len(percentage)):
            if percentage[j] < percentage[i]:
                temp = percentage[i]
                percentage[i] = percentage[j]
                percentage[j] = temp

percentage = [35.65,89.4,46.56,20.99,99.3,83.5,78.34,67.44]
bubble_sort(percentage)

print("top 5 scores")

percentage = percentage[::-1]

for i in range(len(percentage)):
    if i >= 5:
        break
    print(percentage[i])