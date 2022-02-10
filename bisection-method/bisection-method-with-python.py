def func(p):
    return p*p*p - p*p + 2

def bisection_method(a, b, error_accept):
    if(func(a) * func(b) >= 0):
        print("Enter the correct value of a and b.")
        return
    
    c = a
    while ((b - a) >= error_accept):
        c = (a+b)/2

        if(func(c) == 0.00):
            break

        if( func(c) * func(a) < 0):
            b = c 

        else: 
            a = c 

    print("The root is: ", "%.4f"%c)


bisection_method(3, -20, 0.01)