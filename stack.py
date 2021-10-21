stack=[]
def push():
 e=input("Enter an element")
 stack.append(e)
 print(stack)

def pop():
 if not stack:
 print("Stack is empty")
 else:
 e=stack.pop()
 print("Removed element is:",e)
 print(stack)

def peek():
 print(stack[-1])
 
while True:
 print("Selct operation 1.push 2.pop 3.peek 4.quit")
 choice=int(input())
 if choice==1:
 push()
 elif choice==2:
 pop()
 elif choice==3:
 peek()
 elif choice==4:
 break
 else:
 print("Enter correct operation")
