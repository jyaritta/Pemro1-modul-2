import math

b, c = map(int, input().split())
a = math.sqrt(c*c - b*b)
print(f"Alas = {a:.0f} cm\nTinggi = {b:.0f} cm\nKeliling = {a+b+c:.0f} cm\nLuas = {0.5*a*b:.0f} cm^2")

b = float(input())
c = float(input())
print(f"Alas = {a:.0f} cm\nTinggi = {b:.0f} cm\nKeliling = {a+b+c:.0f} cm\nLuas = {0.5*a*b:.0f} cm^2")
