def play_cricket_badminton(group_a,group_b):
    print(group_a.union(group_b))

def play_not_cricket_badminton(group_a,group_b,group_c):
    play_both = group_a.union(group_b)
    print("number of students who dont play either cricket and badminton : ",len(group_c.difference(play_both)))

group_a = {"Alex", "Bob", "Charlie", "David"} #play cricket
group_b = {"Eddie", "Frank", "Charlie", "George"} #play badminton
group_c = {"Bob", "Henry", "David", "Eddie"} #play football

play_cricket_badminton(group_a,group_b)
play_not_cricket_badminton(group_a,group_b,group_c)
