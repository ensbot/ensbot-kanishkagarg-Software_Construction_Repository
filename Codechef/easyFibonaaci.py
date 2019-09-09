import math  


def fib(N):
	if((N==1) or (N==0)):
		return N
	else:
		ans = (pow(((1+math.sqrt(5))/2),N) - pow(((1-math.sqrt(5))/2),N))/ math.sqrt(5)
		print("ANS : ", ans)
        return ans


def highestPowerof2(N):
	p = math.log2(N)
	return p 

if __name__ == "__main__":
	t = int(input())
	while(t>0):
		N = int(input())
		index = 0
    	index =  highestPowerof2(N)
    	ans = fib(pow(2,index)-1)
    	ans = ans%10
    	print("ANS%10: ", ans)
    	t-=1


   