def func (p):
    return p*p*p - p*p + 2

def bisection_method(a, b, error_accept):
    if( func(a) * func(b) >= 0):
        print("Please enter correct value of a and b.")
        return
    
    c = a
    while ( (b-a) >= error_accept):
        c = (a+b)/2

        if( func(c) == 0.00):
            print("Root = ", c)
            break

        elif( func(c)*func(a) < 0):
            print("Root = ", c)
            b = c 

        else: 
            print("Root = ", c)
            a = c 
    
    print("The Root is = ", c)

bisection_method(-200, 300, 0.01)