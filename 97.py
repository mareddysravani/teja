m=int(raw_input())    
Reverse=0    
while(m>0):    
    Reminder=m%10    
    Reverse=(Reverse*10)+Reminder    
    m=m//10    
print(Reverse)   
