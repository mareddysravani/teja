k=int(raw_input())
s=0
if m>1:
    for i in range(2,k):
        if m%i==0:
            s=s+1
if s>1:
   print "yes"
else:
    print "no"
