def play_cricket_badminton_but_not_both(group_a,group_b):
    print(group_a.union(group_b) - group_a.intersection(group_b))

def play_cricket_football_but_not_badminton(group_a,group_b,group_c):
    play_both = group_a.union(group_c)
    print(play_both.difference(group_b))


group_a = {"Alex", "Bob", "Charlie", "David"} #play cricket
group_b = {"Eddie", "Frank", "Charlie", "George"} #play badminton
group_c = {"Bob", "Henry", "David", "Eddie"} #play football

play_cricket_badminton_but_not_both(group_a,group_b)
play_cricket_football_but_not_badminton(group_a,group_b,group_c)