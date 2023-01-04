scores=[]
for i in range(5):
    n=int(input("put in the score"))
    scores.append(n)
    #scores+=[n] does the same thing
average= sum(scores)/len(scores)

print(f"the average is: {average:}")