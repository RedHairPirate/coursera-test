def main():
    height=get_height()
    for i in range(height):
        print("#")
def get_height():
    try:
        n=int(input("put the number of blocks: "))
        if n>0:
            return n
    except ValueError:
        print("not an integer")

main()
