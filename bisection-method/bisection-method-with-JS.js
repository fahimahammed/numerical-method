const func = (p) => {
    return p*p*p - p*p + 2;
}

const bisection_method = (a, b, error_accept) => {
    if( func(a) * func(b) >= 0){
        console.log("Please enter the correct value of a and b.");
        return;
    }

    let c = a;
    while( (b-a) >= error_accept){
        c = (a+b)/2;
        if(func(c) == 0.00){
            break;
        }
        else if(func(c)*func(a) < 0){
            b = c;
        }
        else{
            a = c;
        }
    }
    console.log("The root is: " + c);
}

bisection_method(-200, 300, 0.01);