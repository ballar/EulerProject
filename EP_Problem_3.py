##The prime factors of 13195 are 5, 7, 13 and 29.
##What is the largest prime factor of the number 600851475143 ?

def primeQ(n):
    if n <= 1:
        return False
    i = 2
    while i < n:
        if n%i == 0:
            return False
        i = i+1
    return True

def factors(n):
    i = 2
    facs = []
    while i <= n :
        if n % i == 0:
            facs.append(i)
            n = n/i
        i = i+1
    return facs

def firstprime(list):
    for i in list[-1::-1]:
        if primeQ(i):
            return i
    return None

def firstprimefactor(n):
    return firstprime(factors(n))

print firstprimefactor(100)
print firstprimefactor(13195)
print firstprimefactor(600851475143)
