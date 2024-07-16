def question1():
    str=input("enter a string: ")
    def pal(str):
        if len(str)<=1:
            return True
        if str[0]==str[-1]:
            return pal(str[1:-1])
        return False
    s=pal(str)
    print(s)
    
# def question2():
def question3():
    num=int(input("Enter a number:"))
    def add(num):
        if num%10==0:
            return num
        else:
            return num + add(num//10)
    sum=add(num)
    print(sum)
def main():
    print("ASSIGNMENT 10")
    print("1.qustion 1\n2.question 2\n3.question 3\n")
    n=int(input("enter a question number to run:"))
    if n==1:
        print("Given a list of products, print out the name of all the products with a price higher than 10.\n")
        question1()
    elif n==2:
        print("Take two list of numbers the products quantities and the prices. Calculate total price per product. (Use list comprehension)\n")
        # question2()
    elif n==3:
        print("Write a function which takes a list of votes for candidates, find out who is the winner.\n")
        question3()
    else:
        print("enter a valid option\n")  
while True:
    main()
    c=input("Do you want to Continue[y/n]: ")
    if c=='y' or c=='Y':
        continue
    else:
         break