import math
M_PI = 3.14286

r = float(input())
t = float(input())
print(f"Volume = {M_PI*r*r*t:.2f}\nLuas = {(2*M_PI*r)*(r+t):.2f}\nKeliling = {2*M_PI*r:.2f}")

r, t = map(float, input().split())
print(f"Volume = {M_PI*r*r*t:.2f}\nLuas = {(2*M_PI*r)*(r+t):.2f}\nKeliling = {2*M_PI*r:.2f}")
