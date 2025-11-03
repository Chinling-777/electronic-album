from sympy import sympify,symbols
import sympy

def midpoint_rule(k,expr_str,a,b,n,v):
    x=symbols('x')
    expr=sympify(expr_str)
    delta_x=(b-a)/n
    sum=0
    for i in range(n):
        j=k*expr.subs(x,a+(0.5+i)*delta_x)
        sum+=j
    p=v+len(str(int(sum)))
    return delta_x*sum.evalf(p)
print(midpoint_rule(18,"sin(x)",0,sympy.pi,10,6))

