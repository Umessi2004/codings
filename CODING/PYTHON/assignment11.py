def question1():
    def leftmost(n, target):
        left,right=0,len(n)-1
        first_pos =-1
        while left<=right:
            mid=(left+right)//2
            if n[mid]==target:
                first_pos= mid
                right=mid - 1
            elif n[mid] < target:
                left=mid + 1
            else:
                right = mid - 1
        return first_pos
    def rightmost(n, target):
        left,right=0,len(n)-1
        last_pos =-1
        while left<=right:
            mid=(left+right)//2
            if n[mid]==target:
                last_pos= mid
                left=mid+1
            elif n[mid] < target:
                left=mid + 1
            else:
                right = mid - 1
        return last_pos
    n=int(input("enter the size of the list: "))
    l=[]
    for i in range(n):
        xi=int(input("enter the no."))
        l.append(xi)
    x=int(input("enter the target value: "))
    start=leftmost(l,x)
    end=rightmost(l,x)
    print([start, end])
def main():
    print("ASSIGNMENT 11")
    print("1.qustion 1\n2.question 2\n3.question 3\n")
    n=int(input("enter a question number to run:"))
    if n==1:
        print("Write a recursive function that takes a string word as input and check if the given word is palindrome. Return True if string is palindrome else return False.\n")
        question1()
    elif n==2:
        print("Given a list of tuples contains weight (w) and value (v) pair for items and the capacity of a bag. Write a function that calculate the maximum item value that can be carried in the bag.\n")
        # question2()
    elif n==3:
        print("Write a recursive function that takes an integer number (num) as input and add all the digits of the number. \n")
        # question3()
    else:
        print("enter a valid option\n")  
while True:
    main()
    c=input("Do you want to Continue[y/n]: ")
    if c=='y' or c=='Y':
        continue
    else:
         break