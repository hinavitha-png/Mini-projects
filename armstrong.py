num = int(input("Enter number: "))
s = sum(int(d)**3 for d in str(num))
print("Armstrong" if s == num else "Not Armstrong")
