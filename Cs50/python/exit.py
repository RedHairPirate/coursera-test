import sys
# if (len(sys.argv)) != 2:
#     print("missing command line argument")
#     sys.exit(1)
# print(f"Hello, {sys.argv[1]}")
# sys.exit(0)
names={"bill", "rakesh", "sam"}
name=input("put the name ")
if name in names:
    print("found")
    sys.exit(0)
print("not found")
sys.exit(1)